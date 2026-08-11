/* Ghidra address: 00c28a90 */
/* Ghidra symbol: FUN_00c28a90 */


void FUN_00c28a90(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_00c28ad0(param_1);
  iVar2 = (uint)*(ushort *)(param_1 + 0x4f) * (uint)*(ushort *)(param_1 + 0x4d);
  if (iVar2 == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    uVar1 = FUN_004095c0((longlong)iVar2);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  *(int *)(param_1 + 0x38) = iVar2;
  return;
}

