#include <powergl/rendering/object.h>

typedef struct {
  // parent
  powergl_rendering_object *parent;

  // sub objects
  powergl_rendering_object **children;
  size_t n_child;

  // geometry
  powergl_rendering_geometry **geometry;
  size_t n_geometry;
  
  // camera
  powergl_rendering_camera *camera;

  // light
  powergl_rendering_light *light;

  // transform
  GLfloat matrix[4][4];
  char matrix_flag;

  GLfloat mvp[4][4];

  GLfloat lookat[3][3];
  GLfloat translate[3];
  GLfloat rotation[4];
  char rotation_flag;
  GLfloat scale[3];
  GLfloat skew[3];


  // info
  const char *id;
  const char *name;

  // virtual functions
  powergl_run_object_func *run;
  powergl_create_object_func *create;

} editor_text_object;

editor_text_object * new_editor_text_object(void);
