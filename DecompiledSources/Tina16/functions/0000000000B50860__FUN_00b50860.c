/* Ghidra address: 00b50860 */
/* Ghidra symbol: FUN_00b50860 */


void FUN_00b50860(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)PTR_DAT_02003300;
  *(int *)(param_1 + 0x38) = iVar1;
  uVar2 = FUN_00b1bcb0((double)iVar1);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x20) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x38);
  return;
}

