/* Ghidra address: 00f032e0 */
/* Ghidra symbol: FUN_00f032e0 */


undefined1 FUN_00f032e0(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_10;
  
  local_10 = 0;
  if ((*(ushort *)(param_1 + 0x4f) & 0x400) != 0) {
    FUN_00f02f60(param_1,&local_10);
    iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x38),local_10);
    if (iVar2 != 0) {
      uVar1 = 1;
      goto LAB_00f0332d;
    }
  }
  uVar1 = 0;
LAB_00f0332d:
  FUN_00414480(&local_10);
  return uVar1;
}

