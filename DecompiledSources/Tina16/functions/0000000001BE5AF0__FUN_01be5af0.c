/* Ghidra address: 01be5af0 */
/* Ghidra symbol: FUN_01be5af0 */


void FUN_01be5af0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  FUN_01c03e80(param_1);
  cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  if (cVar1 == '\0') {
    lVar2 = FUN_01be2d90(param_1);
    if (lVar2 != 0) {
      lVar2 = FUN_01be2d90(param_1);
      if (*(longlong *)(lVar2 + 0x30) == 0) {
        lVar2 = FUN_01be2d90(param_1);
        (**(code **)(**(longlong **)(lVar2 + 0x80) + 600))(*(longlong **)(lVar2 + 0x80),0);
      }
    }
  }
  return;
}

