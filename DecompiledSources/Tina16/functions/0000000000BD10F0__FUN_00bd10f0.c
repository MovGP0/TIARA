/* Ghidra address: 00bd10f0 */
/* Ghidra symbol: FUN_00bd10f0 */


undefined8 FUN_00bd10f0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10) + -1;
  if (-1 < iVar2) {
    uVar1 = FUN_004aeac0(*(longlong *)(param_1 + 0x18),iVar2);
  }
  return uVar1;
}

