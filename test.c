/* hello-gtk.c */

#include <gtk/gtk.h>

gint QuitProg(GtkWidget *widget, gpointer gdata){

gtk_main_quit();
return (FALSE);

}

int main (int argc, char *argv[]){

GtkWidget *window;
GtkWidget *text_pane;

gtk_init(&argc, &argv); /*required initializing */

window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
gtk_widget_set_usize(window,200,100);
gtk_window_set_title(GTK_WINDOW(window) , "First Program");
gtk_container_set_border_width(GTK_CONTAINER(window),5);

gtk_signal_connect (GTK_OBJECT (window), "delete_event", GTK_SIGNAL_FUNC(QuitProg), NULL);

text_pane = gtk_text_new(NULL, NULL);
gtk_text_set_editable(GTK_TEXT(text_pane) , FALSE);
gtk_container_add(GTK_CONTAINER(window) , text_pane);
gtk_widget_realize(text_pane);
gtk_text_insert(GTK_TEXT(text_pane) , NULL , NULL , NULL , " Hello Linux World \n\n" , -1);

gtk_widget_show(text_pane);
gtk_widget_show (window);

gtk_main ();

}
