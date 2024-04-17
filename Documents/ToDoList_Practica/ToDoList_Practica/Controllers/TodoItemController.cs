using Microsoft.AspNetCore.Mvc;
using ToDoList_Practica.Models;
using ToDoList_Practica.Services.Interfaces;

namespace ToDoList_Practica.Controllers
{
    [Route("api/[controller]")]
    [ApiController]
    public class TodoItemController : ControllerBase
    {
        private readonly ITodoItemServices _todoItemServices;

        public TodoItemController(ITodoItemServices todoItemServices)
        {
            _todoItemServices = todoItemServices;
        }

        // GET: api/TodoItem
        [HttpGet]
        public IActionResult GetTodoItems()
        {
            var todoItems = _todoItemServices.GetAllTodoItems();
            return Ok(todoItems);
        }

        // GET: api/TodoItem/5
        [HttpGet("{id}")]
        public IActionResult GetTodoItem(int id)
        {
            var todoItem = _todoItemServices.GetTodoItemById(id);
            if (todoItem == null)
            {
                return NotFound();
            }
            return Ok(todoItem);
        }

        // POST: api/TodoItem
        [HttpPost]
        public IActionResult AddTodoItem(TodoItemDto item)
        {
            var newItemId = _todoItemServices.AddTodoItem(item);

            var todoItemResponse = new
            {
                id = newItemId
            };

            return CreatedAtAction(nameof(GetTodoItem), new { id = newItemId }, todoItemResponse);
        }

        // DELETE: api/TodoItem/5
        [HttpDelete("{id}")]
        public IActionResult DeleteTodoItem(int id)
        {
            var result = _todoItemServices.DeleteTodoItem(id);
            if (result == 0)
            {
                return NotFound();
            }
            return NoContent();
        }
    }
}