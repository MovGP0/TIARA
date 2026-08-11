/* Ghidra address: 019645b0 */
/* Ghidra symbol: FUN_019645b0 */


void FUN_019645b0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0195f560(param_1);
  if (*(char *)(lVar1 + 0x20) != '\0') {
    uVar2 = FUN_0195f560(param_1);
    FUN_01964540(param_1,uVar2);
  }
  return;
}

