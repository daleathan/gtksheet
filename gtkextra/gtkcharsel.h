/* gtkcharselection - character selection dialog for gtk+
 * Copyright 1999-2001  Adrian E. Feiguin <feiguin@ifir.edu.ar>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */


#ifndef __GTK_CHAR_SELECTION_H__
#define __GTK_CHAR_SELECTION_H__


#include <gtk/gtk.h>
#include "gtkpsfont.h"
#include "gtkfontcombo.h"


#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


#define G_TYPE_CHAR_SELECTION			(gtk_char_selection_get_type ())
#define GTK_CHAR_SELECTION(obj)                 (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_CHAR_SELECTION, GtkCharSelection))
#define GTK_CHAR_SELECTION_CLASS(klass)         (G_TYPE_CHECK_CLASS_CAST ((klass), G_TYPE_CHAR_SELECTION, GtkCharSelectionClass))
#define GTK_IS_CHAR_SELECTION(obj)              (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_CHAR_SELECTION))
#define GTK_IS_CHAR_SELECTION_CLASS(klass)      (G_CHECK_CLASS_TYPE ((klass), G_TYPE_CHAR_SELECTION))

typedef struct _GtkCharSelection       GtkCharSelection;
typedef struct _GtkCharSelectionClass  GtkCharSelectionClass;



struct _GtkCharSelection
{
  GtkDialog dialog;

  GtkFontCombo *font_combo;

  GtkGrid *grid;
  GtkToggleButton *button[256];

  gint selection;
};

struct _GtkCharSelectionClass
{
  GtkDialogClass parent_class;
};


GType      gtk_char_selection_get_type       	(void);
GtkWidget* gtk_char_selection_new            	(void);

void 	   gtk_char_selection_set_selection	(GtkCharSelection *charsel, 
						 gint selection);
gint 	   gtk_char_selection_get_selection	(GtkCharSelection *charsel);


#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* __GTK_CHAR_SELECTION_H__ */
