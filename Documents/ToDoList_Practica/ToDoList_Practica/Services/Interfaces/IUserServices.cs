﻿using ToDoList_Practica.Data;
using ToDoList_Practica.Models;

namespace ToDoList_Practica.Services.Interfaces
{
    public interface IUserServices
    {
        public List<User> GetAllUsers();
        public User GetUserById(int id);
        public User AddUser(UserDto user);
        public int DeleteUser(int id);

        public User UpdateUser(int id, UserDto user);

        List<TodoItem> GetTodoItemsByUserId(int userId);
    }
}