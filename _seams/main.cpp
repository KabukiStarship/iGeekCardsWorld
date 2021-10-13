#include <_Config.h>
#include "../../unseenia.toolkit/pack_mod.inl"
#if SEAM == IGEEK_CARDSWORD_RELEASE
int main(int arg_count, const char** args) {
  return unseenia::PackMod(args, arg_count).Run();
}
#else
#include "00.cardstack.inl"
#include
int main(int arg_count, const char** args) {
  return _::TTestTree<>(arg_count args, args);
}
#endif
