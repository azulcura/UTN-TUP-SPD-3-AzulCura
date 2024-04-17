using System.ComponentModel.DataAnnotations;

namespace ToDoList_Practica.Models
{
    public class UserDto
    {
        [Required]
        public string name { get; set; }

        [Required]
        public string email { get; set; }
        [Required]
        public string address { get; set; }
    }
}
