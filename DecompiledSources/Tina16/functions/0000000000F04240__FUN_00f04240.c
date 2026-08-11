/* Ghidra address: 00f04240 */
/* Ghidra symbol: FUN_00f04240 */


undefined1 FUN_00f04240(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_10;
  
  local_10 = 0;
  if ((*(ushort *)(*(longlong *)(param_1 + 8) + 0x4f) & 0x40) != 0) {
    FUN_00f04010(param_1,&local_10);
    iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x10),local_10);
    if (iVar2 != 0) {
      uVar1 = 1;
      goto LAB_00f04291;
    }
  }
  uVar1 = 0;
LAB_00f04291:
  FUN_00414480(&local_10);
  return uVar1;
}

