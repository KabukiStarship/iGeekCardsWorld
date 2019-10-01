#include <_config.h>
#include "../../unseenia.toolkit/pack_mod.inl"
#if SEAM == UNSEENIA_CARDS_RELEASE
int main(int arg_count, const char** args) {
  return unseenia::PackMod(args, arg_count).Run();
}
#else
int main(int arg_count, const char** args) {
  return _::TTestTree<>(arg_count args, args);
}
#endif
