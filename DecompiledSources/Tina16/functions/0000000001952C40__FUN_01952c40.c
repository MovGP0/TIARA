/* Ghidra address: 01952c40 */
/* Ghidra symbol: FUN_01952c40 */


undefined8 * FUN_01952c40(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_1c;
  undefined8 local_18;
  longlong local_10;
  
  local_30 = auStack_78;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  uVar3 = FUN_0045ae90();
  local_58 = CONCAT71(local_58._1_7_,1);
  local_18 = FUN_004ba470(&PTR_FUN_0047d288,1,0,uVar3);
  local_10 = FUN_01810fa0(&DAT_018103d8,1,local_18);
  uVar3 = (**(code **)(*param_1 + 0x118))(param_1);
  *(undefined8 *)(local_10 + 0x18) = uVar3;
  *(byte *)((longlong)param_1 + 0xd1) = *(byte *)((longlong)param_1 + 0xd1) | 8;
  if (param_3 != 0) {
    *(byte *)(param_3 + 0xd1) = *(byte *)(param_3 + 0xd1) | 8;
  }
  FUN_01814370(local_10,param_1,param_3);
  *(byte *)((longlong)param_1 + 0xd1) = *(byte *)((longlong)param_1 + 0xd1) & 0xf7;
  if (param_3 != 0) {
    *(byte *)(param_3 + 0xd1) = *(byte *)(param_3 + 0xd1) & 0xf7;
  }
  FUN_00410f20(local_10);
  FUN_004ba980(local_18,param_2);
  local_1c = FUN_004170c0(&DAT_01952f78,*param_2,1);
  if (local_1c == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00416e20(param_2,1,local_1c);
    iVar2 = FUN_00414cb0(*param_2);
    FUN_00416e20(param_2,iVar2 + -1,2);
  }
  if (param_3 != 0) {
    FUN_019525a0(param_1,&local_38,param_3);
    local_58 = local_38;
    FUN_00416cd0(param_2,3,*param_2,&DAT_01952f78);
  }
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_01933ed0);
  if (cVar1 != '\0') {
    FUN_00448430(&local_40,param_1[0x13]);
    local_58 = local_40;
    local_50 = &DAT_01952fa0;
    FUN_00416cd0(param_2,4,*param_2,L" l=\"");
    FUN_00448430(&local_48,param_1[0x14]);
    local_58 = local_48;
    local_50 = &DAT_01952fa0;
    FUN_00416cd0(param_2,4,*param_2,L" t=\"");
  }
  FUN_00410f20(local_18);
  FUN_00414560(&local_48,3);
  return param_2;
}

