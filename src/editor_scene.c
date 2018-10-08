#include "editor_scene.h"


static void create(editor_scene *scene){

}

static void run(editor_scene *scene){

}

editor_scene* new_editor_scene(void){
  editor_scene *scene = powergl_resize( NULL, sizeof(editor_scene) );
  scene->create = create;
  scene->run = run;
}
