/* Ghidra address: 006fdf30 */
/* Ghidra symbol: FUN_006fdf30 */


void FUN_006fdf30(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00416740(*(undefined8 *)(param_1 + 0x4b8));
  uVar2 = FUN_00442580(*(undefined8 *)(param_2 + 0x10),uVar2,*(int *)(param_2 + 8) + -1);
  iVar1 = FUN_00414d00(uVar2);
  *(longlong *)(param_2 + 0x18) = (longlong)iVar1;
  return;
}

