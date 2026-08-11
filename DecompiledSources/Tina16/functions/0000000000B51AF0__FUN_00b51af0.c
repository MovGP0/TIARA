/* Ghidra address: 00b51af0 */
/* Ghidra symbol: FUN_00b51af0 */


void FUN_00b51af0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)PTR_DAT_02005520;
  *(int *)(param_1 + 0x38) = iVar1;
  uVar2 = FUN_00b1bbd0((double)iVar1);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x20) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x38);
  return;
}

