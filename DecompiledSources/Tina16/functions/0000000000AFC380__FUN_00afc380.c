/* Ghidra address: 00afc380 */
/* Ghidra symbol: FUN_00afc380 */


undefined1 FUN_00afc380(longlong *param_1,longlong param_2,char param_3,char param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  int *local_78;
  undefined1 *local_60;
  int local_4c;
  longlong *local_48;
  undefined8 local_40;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_21;
  undefined8 local_20 [2];
  
  local_60 = auStack_98;
  local_40 = 0;
  local_20[0] = 0;
  local_21 = 0;
  puVar1 = auStack_98;
  if (param_2 == 0) goto LAB_00afc5f7;
  local_48 = (longlong *)param_1[0x116];
  if (param_3 == '\0') {
    FUN_00414480(local_20);
    FUN_0043e600(local_20,param_2);
    FUN_00414b50(&local_40,local_20[0]);
    FUN_00414480(local_20);
  }
  else {
    local_60 = auStack_98;
    FUN_00414b50(&local_40,param_2);
  }
  if (param_4 == '\0') {
    local_28 = FUN_00a9be60(local_48,(int)param_1[0x11d],local_40,param_3);
  }
  else {
    local_28 = FUN_00a9bee0(local_48,(int)param_1[0x11d],local_40,param_3);
  }
  puVar1 = local_60;
  if (local_28 < 0) goto LAB_00afc5f7;
  local_21 = 1;
  *(int *)((longlong)local_48 + 0x9c) = local_28;
  local_4c = 0;
  if (param_2 != 0) {
    local_4c = *(int *)(param_2 + -4);
  }
  *(int *)(local_48 + 0x14) = local_28 + local_4c;
  if (param_4 == '\0') {
    FUN_00afe5a0(param_1,local_28 + local_4c);
  }
  else {
    FUN_00afe5a0(param_1,*(undefined4 *)((longlong)local_48 + 0x9c));
  }
  local_78 = &local_30;
  cVar2 = (**(code **)(*local_48 + 0x20))
                    (local_48,*(undefined8 *)(param_1[0xe8] + 0x490),local_28,&local_2c);
  puVar1 = local_60;
  if (cVar2 == '\0') goto LAB_00afc5f7;
  local_34 = FUN_00af6070(param_1);
  if (local_30 < local_34) {
LAB_00afc561:
    iVar3 = FUN_0064d120(param_1);
    FUN_00af6080(param_1,local_30 - iVar3 / 2);
  }
  else {
    iVar3 = FUN_0064d120(param_1);
    if (local_34 + iVar3 + -0x14 < local_30) goto LAB_00afc561;
  }
  local_34 = FUN_00af60f0(param_1);
  if (local_2c < local_34) {
LAB_00afc5b8:
    iVar3 = FUN_0064d0b0(param_1);
    FUN_00af6100(param_1,local_2c - iVar3 / 2);
  }
  else {
    iVar3 = FUN_0064d0b0(param_1);
    if (local_34 + iVar3 + -0x32 < local_2c) goto LAB_00afc5b8;
  }
  (**(code **)(*param_1 + 0x180))(param_1);
  puVar1 = local_60;
LAB_00afc5f7:
  local_60 = puVar1;
  FUN_00414480(&local_40);
  FUN_00414480(local_20);
  return local_21;
}

