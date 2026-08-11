/* Ghidra address: 01cc72c0 */
/* Ghidra symbol: FUN_01cc72c0 */


void FUN_01cc72c0(undefined8 *param_1,longlong param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  int local_68;
  int local_60;
  undefined1 local_58;
  undefined1 *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_40 = auStack_88;
  param_1[0xb] = param_2;
  local_20 = *(longlong *)(param_1[1] + 8);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  local_28 = (**(code **)*param_1)(param_1);
  if (param_3 == '\0') {
    cVar1 = FUN_004113d0(*(undefined8 *)(local_20 + 0x438),&PTR_FUN_0047c498);
    if (cVar1 == '\0') goto LAB_01cc73a8;
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_01cb8940);
    if ((cVar1 == '\0') || (*(char *)(param_2 + 8) != '\0')) goto LAB_01cc73a8;
    cVar1 = '\x01';
  }
  else {
LAB_01cc73a8:
    cVar1 = '\0';
  }
  *(char *)(local_20 + 0x4474) = cVar1;
  if (cVar1 != '\0') {
    local_68 = 0xffffffff;
    local_60 = *(int *)((longlong)param_1 + 0x2c) / 8 + -1;
    local_58 = 0;
    uVar2 = FUN_01cc77d0(local_20,*(undefined8 *)(local_20 + 0x438),*(undefined8 *)(param_2 + 0x160)
                         ,*(undefined4 *)(param_2 + 0x2c));
    param_1[0xe] = uVar2;
    local_68 = *(int *)(param_1 + 6) / 8;
    local_60 = *(int *)((longlong)param_1 + 0x2c) / 8 + -1;
    local_58 = 1;
    uVar2 = FUN_01cc77d0(local_20,*(undefined8 *)(local_20 + 0x438),*(undefined8 *)(param_2 + 0x160)
                         ,*(undefined4 *)(param_2 + 0x2c));
    param_1[0xf] = uVar2;
  }
  local_30 = *(longlong **)(local_20 + 0x438);
  local_38 = *(undefined8 *)(param_2 + 0x160);
  (**(code **)(*local_30 + 0x50))(local_30,local_38,0);
  if (param_3 != '\0') {
    cVar1 = FUN_004113d0(*(undefined8 *)(local_20 + 0x438),&PTR_FUN_0047c498);
    if (cVar1 != '\0') {
      (**(code **)(*(longlong *)param_1[2] + 0x10))((longlong *)param_1[2],local_28);
      FUN_004b6dc0(param_1[2],0);
      FUN_004b8ba0(param_1[2],*(undefined8 *)(local_20 + 0x438),local_28);
      FUN_004b6dc0(param_1[2],0);
      param_1[3] = param_1[2];
      goto LAB_01cc7599;
    }
  }
  param_1[3] = *(undefined8 *)(local_20 + 0x438);
LAB_01cc7599:
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[7] = 0xd4b249ad2594c37d;
  param_1[8] = 0xd4b249ad2594c37d;
  return;
}

