/* Ghidra address: 017b8ca0 */
/* Ghidra symbol: FUN_017b8ca0 */


int FUN_017b8ca0(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  int local_24;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_24 = FUN_01cf0700(param_1,param_2);
  iVar1 = FUN_00c3c230(param_2,*(undefined8 *)(param_1 + 0x40));
  local_24 = local_24 + iVar1;
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (*(byte *)(param_2 + 0x78) & 0x1f)
            & 0x39U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    FUN_01b240b0(local_20,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
    iVar1 = FUN_01d31350(local_20[0]);
    local_24 = local_24 + iVar1;
  }
  FUN_00414480(local_20);
  return local_24;
}

