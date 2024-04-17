using System.ComponentModel.DataAnnotations;

namespace ToDoList_Practica.Models
{
    public class TodoItemDto
    {
        [Required]
        public string title { get; set; }

        [Required]
        public string description { get; set; }

        [Required]
        public int UserId { get; set; }
    }
}

