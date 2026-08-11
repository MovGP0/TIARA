/* Ghidra address: 00f204b0 */
/* Ghidra symbol: FUN_00f204b0 */


void FUN_00f204b0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  bool bVar2;
  undefined8 local_10;
  
  local_10 = 0;
  bVar1 = *(byte *)(*param_2 + 0x78);
  if (bVar1 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    FUN_01d31630(*param_2,*(undefined8 *)(param_1 + 8));
  }
  else {
    FUN_00415dd0(&local_10,*(undefined8 *)(param_1 + 8),0);
    FUN_01d315a0(*param_2,local_10);
  }
  FUN_01d311c0(*param_2,param_1 + 0x10,1);
  FUN_01d311c0(*param_2,param_1 + 0x11,1);
  FUN_01d311c0(*param_2,param_1 + 0x12,1);
  FUN_01d320f0(*param_2,*(undefined8 *)(param_1 + 0x18));
  FUN_01d320f0(*param_2,*(undefined8 *)(param_1 + 0x20));
  FUN_01d311c0(*param_2,param_1 + 0x28,1);
  FUN_004144d0(&local_10);
  return;
}

