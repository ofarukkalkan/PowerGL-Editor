#include <powergl/rendering/visualscene.h>

typedef struct {

  // objects
  powergl_rendering_object **objects;
  size_t n_object;

  // default camera object
  powergl_rendering_object *main_camera;

  // default light object 
  powergl_rendering_object *main_light;

  // pipeline
  powergl_rendering_pipeline pipeline;

  powergl_run_visualscene_func *run;
  powergl_create_visualscene_func *create;

} editor_scene;

editor_scene* new_editor_scene(void);
