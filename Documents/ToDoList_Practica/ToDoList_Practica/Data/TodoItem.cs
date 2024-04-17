using System.ComponentModel.DataAnnotations.Schema;
using System.ComponentModel.DataAnnotations;
using ToDoList_Practica.Data;

public class TodoItem
{
    [Key]
    [DatabaseGenerated(DatabaseGeneratedOption.Identity)]
    public int id { get; set; }
    public string title { get; set; }
    public string description { get; set; }
    public int UserId { get; set; } 

    [ForeignKey("UserId")] 
    public User User { get; set; }
}

