/* Ghidra address: 00d3adb0 */
/* Ghidra symbol: FUN_00d3adb0 */


bool FUN_00d3adb0(longlong param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  
  FUN_0040d200(&local_78,0x50,0);
  local_78 = 0x50;
  local_74 = 0x100;
  bVar3 = false;
  iVar1 = *(int *)(param_1 + 8);
  if (-1 < iVar1) {
    iVar2 = thunk_FUN_041b99e8(*(undefined8 *)(param_1 + 0x18));
    if (iVar1 < iVar2 + -1) {
      thunk_FUN_0410b804(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),0xffffffff,
                         &local_78);
      bVar3 = (local_70 & 0x800) == 0x800;
    }
  }
  return bVar3;
}

