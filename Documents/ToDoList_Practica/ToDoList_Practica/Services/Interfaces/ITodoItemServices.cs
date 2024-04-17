using System.Threading.Tasks;
using ToDoList_Practica.Models;

namespace ToDoList_Practica.Services.Interfaces
{
    public interface ITodoItemServices
    {
        List<TodoItem> GetAllTodoItems();
        TodoItem GetTodoItemById(int id);
        int AddTodoItem(TodoItemDto item);
        int DeleteTodoItem(int id);
        Task UpdateTodoItem(int id, TodoItemDto todoItemDto);
    }
}

