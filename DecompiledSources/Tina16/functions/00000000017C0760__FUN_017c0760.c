/* Ghidra address: 017c0760 */
/* Ghidra symbol: FUN_017c0760 */


int FUN_017c0760(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  iVar2 = FUN_01cf0700(param_1,param_2);
  iVar3 = FUN_017c2b70(param_1);
  lVar5 = param_1 + 0x2d8;
  FUN_004169a0(&local_20,lVar5);
  iVar4 = FUN_01d31350(local_20);
  iVar4 = iVar2 + iVar3 * 4 + iVar4;
  local_34 = iVar4 + 0x11;
  bVar1 = *(byte *)(param_2 + 0x78);
  if (bVar1 < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)lVar5 >> 8),1) << (bVar1 & 0x1f) & 0x31U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    local_34 = iVar4 + 0x13;
  }
  if (bVar1 < 8 && (1 << (bVar1 & 0x1f) & 0x3dU) != 0) {
    FUN_01b240b0(&local_28,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
    iVar2 = FUN_01d31350(local_28);
    local_34 = local_34 + iVar2;
  }
  if (*(char *)(param_2 + 0x78) == '\0') {
    FUN_004168e0(&local_30,*(undefined8 *)(param_1 + 0x400));
    iVar2 = FUN_01d31290(local_30);
    local_34 = local_34 + iVar2;
  }
  iVar2 = 0;
  while ((iVar2 < 0x14 && (*(short *)(param_1 + 0x26 + (longlong)iVar2 * 2) != -1))) {
    iVar2 = iVar2 + 1;
  }
  FUN_00414520(&local_30);
  FUN_00414560(&local_28,2);
  return local_34 + iVar2 * 2 + 2;
}

