#include <gtk/gtk.h>

int main(int argc, char **argv)
{

  GtkWidget *window;
  GtkWidget *combo;
  GtkWidget *label;
  GtkWidget *box;
 
  gtk_init (&argc, &argv);
  window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  
  box = gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 12);
  gtk_container_add (GTK_CONTAINER (window), box);

  label = gtk_label_new ("Select a value: ");
  gtk_container_add (GTK_CONTAINER (box), label);

  combo = gtk_combo_box_text_new ();

  gtk_combo_box_text_insert (GTK_COMBO_BOX_TEXT(combo), 0, "one", "first item");
  gtk_combo_box_text_insert (GTK_COMBO_BOX_TEXT(combo), 1, "two", "second item");
  gtk_combo_box_text_insert (GTK_COMBO_BOX_TEXT(combo), 2, "three", "third item");

  gtk_container_add (GTK_CONTAINER (box), combo);
  

  gtk_widget_show_all (window);
  gtk_main();

}
