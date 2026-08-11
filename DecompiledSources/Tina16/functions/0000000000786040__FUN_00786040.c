/* Ghidra address: 00786040 */
/* Ghidra symbol: FUN_00786040 */


void FUN_00786040(longlong param_1,undefined1 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0xa9) != '\0') {
    cVar1 = FUN_0065be20(*(longlong *)(param_1 + 0x10));
    if (cVar1 != '\0') {
      uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x10));
      thunk_FUN_041b2403(uVar2,0xb,param_2,0);
    }
  }
  return;
}

