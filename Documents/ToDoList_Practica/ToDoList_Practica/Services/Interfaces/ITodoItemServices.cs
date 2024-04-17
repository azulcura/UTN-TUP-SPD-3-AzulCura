using ToDoList_Practica.Data;
using ToDoList_Practica.Models;

namespace ToDoList_Practica.Services.Interfaces
{
    public interface ITodoItemServices
    {
        public List<TodoItem> GetAllTodoItems();
        public TodoItem GetTodoItemById(int id);
        public int AddTodoItem(TodoItemDto item);
        public int DeleteTodoItem(int id);
    }
}
