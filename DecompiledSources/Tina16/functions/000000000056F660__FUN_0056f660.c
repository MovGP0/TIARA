/* Ghidra address: 0056f660 */
/* Ghidra symbol: FUN_0056f660 */


void FUN_0056f660(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + -8);
  }
  FUN_00573d90(lVar1,lVar2 + -1,*(undefined8 *)(param_1 + 0x38),0,*(undefined4 *)(param_1 + 0x10));
  return;
}

