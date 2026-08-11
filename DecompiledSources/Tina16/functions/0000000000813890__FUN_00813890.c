/* Ghidra address: 00813890 */
/* Ghidra symbol: FUN_00813890 */


void FUN_00813890(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_0065be20(*(undefined8 *)(param_1 + 0x10));
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x68);
    if (lVar1 != 0) {
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0xa9) == '\0') {
        uVar3 = FUN_0065b870(lVar1);
        thunk_FUN_03ab0e43(uVar3,0);
      }
      else {
        uVar3 = FUN_0065b870(lVar1);
        thunk_FUN_03ab0e43(uVar3,5);
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x48);
    if (lVar1 != 0) {
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0xa9) == '\0') {
        uVar3 = FUN_0065b870(lVar1);
        thunk_FUN_03ab0e43(uVar3,0);
      }
      else {
        uVar3 = FUN_0065b870(lVar1);
        thunk_FUN_03ab0e43(uVar3,5);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}

