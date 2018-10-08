#include "editor_text_object.h"

editor_text_object * new_editor_text_object(void) {
  editor_text_object *obj = powergl_resize(NULL,sizeof(editor_text_object));
  obj->create = create;
  obj->run = run;
}

static create(editor_text_object *obj, editor_text_object *parent){
  powergl_rendering_object *casted_obj = (powergl_rendering_object*)obj;
  powergl_rendering_object *casted_parent = (powergl_rendering_object*)parent;
  powergl_rendering_object_create(casted_obj, casted_parent);
}

static run(editor_text_object *obj){
  powergl_rendering_object *casted_obj = (powergl_rendering_object*)obj;
  powergl_rendering_object_run(casted_obj);
}
