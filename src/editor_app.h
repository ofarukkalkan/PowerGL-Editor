#include <powergl/util/app/app.h>

#include "editor_scene.h"

typedef struct {

  // visual scene
  powergl_rendering_visualscene *scene;

  // virtual functions
  powergl_run_app_func *run;
  powergl_create_app_func *create;

} editor_app;

editor_app* new_editor_app(void);
