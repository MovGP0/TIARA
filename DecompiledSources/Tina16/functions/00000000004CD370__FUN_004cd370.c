/* Ghidra address: 004cd370 */
/* Ghidra symbol: FUN_004cd370 */


void FUN_004cd370(longlong param_1,char param_2,char param_3)

{
  short sVar1;
  int iVar2;
  byte bVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_004c8ed0(*(undefined8 *)(param_1 + 0x1e0),1);
  FUN_004c9990(*(undefined8 *)(param_1 + 0x1e0),local_20);
  FUN_00414480(&local_28);
  sVar1 = FUN_004c9210(*(undefined8 *)(param_1 + 0x1e0));
  if (sVar1 == 0x3a) {
    FUN_004c9210(*(undefined8 *)(param_1 + 0x1e0));
    FUN_004c8ed0(*(undefined8 *)(param_1 + 0x1e0),1);
    FUN_00414b50(&local_28,local_20[0]);
    FUN_004c9990(*(undefined8 *)(param_1 + 0x1e0),local_20);
    FUN_004c9210(*(undefined8 *)(param_1 + 0x1e0));
  }
  iVar2 = FUN_004cd2f0(param_1);
  bVar3 = param_2 != '\0';
  if (param_3 != '\0') {
    bVar3 = bVar3 | 4;
  }
  if (-1 < iVar2) {
    bVar3 = bVar3 | 2;
  }
  FUN_004c5890(*(undefined8 *)(param_1 + 0x1d8),bVar3,iVar2);
  FUN_004c8440(*(undefined8 *)(param_1 + 0x1d8),local_20[0]);
  FUN_004c8440(*(undefined8 *)(param_1 + 0x1d8),local_28);
  FUN_00414560(&local_28,2);
  return;
}

