/* Ghidra address: 017b8d70 */
/* Ghidra symbol: FUN_017b8d70 */


void FUN_017b8d70(longlong param_1,longlong *param_2)

{
  byte bVar1;
  bool bVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01cf0710(param_1,param_2);
  bVar1 = *(byte *)(*param_2 + 0x78);
  if (bVar1 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    FUN_01b240b0(&local_10,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
    FUN_01d313e0(*param_2,local_10);
  }
  FUN_00c3c390(*param_2,*(undefined8 *)(param_1 + 0x40));
  FUN_00414480(&local_10);
  return;
}

