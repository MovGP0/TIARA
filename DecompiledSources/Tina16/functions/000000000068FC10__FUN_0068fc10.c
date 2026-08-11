/* Ghidra address: 0068fc10 */
/* Ghidra symbol: FUN_0068fc10 */


void FUN_0068fc10(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    cVar1 = FUN_0065be20(*(longlong *)(param_1 + 0x40));
    if (cVar1 != '\0') {
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0xa9) == '\0') {
        uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x40));
        thunk_FUN_03ab0e43(uVar2,0);
      }
      else {
        uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x40));
        thunk_FUN_03ab0e43(uVar2,5);
      }
    }
  }
  return;
}

