#include <powergl/util/window/window.h>
#include "editor_app.h"

int main (void) {
  powergl_util_app *app = (powergl_util_app*)new_editor_app();
  powergl_util_window *wnd = powergl_util_window_new(app);
  powergl_util_window_create(wnd);
  powergl_util_window_run(wnd);
  return 0;
}
