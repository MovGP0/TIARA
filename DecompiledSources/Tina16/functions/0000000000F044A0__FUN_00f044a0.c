/* Ghidra address: 00f044a0 */
/* Ghidra symbol: FUN_00f044a0 */


void FUN_00f044a0(longlong param_1,undefined8 param_2)

{
  ushort *puVar1;
  int iVar2;
  
  if (((*(ushort *)(*(longlong *)(param_1 + 8) + 0x4f) & 0x40) != 0) &&
     (iVar2 = FUN_00416db0(param_2,*(undefined8 *)(param_1 + 0x10)), iVar2 == 0)) {
    return;
  }
  FUN_00414ad0(param_1 + 0x10,param_2);
  puVar1 = (ushort *)(*(longlong *)(param_1 + 8) + 0x4f);
  *puVar1 = *puVar1 | 0x40;
  FUN_004b1830(*(undefined8 *)(param_1 + 8),0);
  return;
}

