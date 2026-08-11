/* Ghidra address: 01be7770 */
/* Ghidra symbol: FUN_01be7770 */


undefined4 FUN_01be7770(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_01be6fa0(param_1);
  if (*(longlong *)(param_1 + 0x648) != 0) {
    iVar2 = FUN_00611650(*(longlong *)(param_1 + 0x648));
    if (0 < iVar2) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

