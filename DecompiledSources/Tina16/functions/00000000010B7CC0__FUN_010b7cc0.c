/* Ghidra address: 010b7cc0 */
/* Ghidra symbol: FUN_010b7cc0 */


int FUN_010b7cc0(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  bool bVar6;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  iVar1 = FUN_01cf0700(param_1,param_2);
  lVar5 = (longlong)param_1 + 0x82;
  FUN_004169a0(local_20,lVar5);
  iVar2 = FUN_01d31350(local_20[0]);
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)lVar5 >> 8),1) << (*(byte *)(param_2 + 0x78) & 0x1f) &
            0x39U) != 0;
  }
  else {
    bVar6 = false;
  }
  if ((bVar6) && (*(char *)(param_2 + 0x7b) != '\0')) {
    uVar3 = (**(code **)(*param_1 + 0x58))(param_1,0);
    uVar4 = (**(code **)(*param_1 + 0x60))(param_1,0);
    local_34 = FUN_010b7420(param_1 + 5,param_1[0x33],uVar3,uVar4);
  }
  else {
    local_34 = FUN_010b7400(param_1[7]);
  }
  local_34 = iVar1 + iVar2 + 0x19 + local_34;
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (*(byte *)(param_2 + 0x78) & 0x1f)
            & 0x39U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    FUN_01b240b0(&local_28,param_1[0x31],param_1[0x32]);
    iVar1 = FUN_01d31350(local_28);
    local_34 = local_34 + iVar1 + 2;
  }
  if (*(char *)(param_2 + 0x78) == '\0') {
    FUN_004168e0(&local_30,param_1[0x34]);
    iVar1 = FUN_01d31290(local_30);
    local_34 = local_34 + iVar1;
  }
  FUN_00414520(&local_30);
  FUN_00414560(&local_28,2);
  return local_34;
}

