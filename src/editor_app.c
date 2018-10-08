#include "editor_app.h"


static void create( powergl_util_app  *app ) {
  app->scene = (powergl_rendering_visualscene*)new_editor_scene();
  app->scene->create(app->scene);
}

static void run( powergl_util_app *app ) {
  app->scene->run(app->scene);
}

editor_app* new_editor_app(void) {
  editor_app *app = powergl_resize( NULL, sizeof(editor_app) );
  app->create = create;
  app->run = run;
}
