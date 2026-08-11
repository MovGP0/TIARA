/* Ghidra address: 00688430 */
/* Ghidra symbol: FUN_00688430 */


void FUN_00688430(longlong param_1,undefined1 param_2)

{
  char cVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 0x4a8) = param_2;
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    lVar2 = FUN_007f9b70(param_1,1);
    if (lVar2 != 0) {
      FUN_0064fca0(lVar2,0xb007,0,*(undefined8 *)(lVar2 + 0x4c0));
    }
  }
  return;
}

