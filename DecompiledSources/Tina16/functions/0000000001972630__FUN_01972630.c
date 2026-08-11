/* Ghidra address: 01972630 */
/* Ghidra symbol: FUN_01972630 */


void FUN_01972630(longlong param_1,longlong param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_50 = auStack_98;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_28 = 0;
  local_38 = (longlong *)0x0;
  puVar2 = auStack_98;
  local_40 = param_2;
  if ((*(char *)(*(longlong *)(param_1 + 0x240) + 0x10) != '\0') &&
     (puVar2 = auStack_98, DAT_02110710 != 0)) {
    local_38 = (longlong *)(**(code **)(DAT_02110710 + -0x30))(DAT_02110710);
    (**(code **)(*local_38 + 0x78))(local_38,0xff,0);
    local_38[0x11] = param_1;
    FUN_0197baf0(local_38,1);
    FUN_0197bb10(local_38);
    local_40 = local_38[0x12];
    puVar2 = local_50;
  }
  local_50 = puVar2;
  local_30 = (longlong *)0x0;
  if ((*(longlong *)(*(longlong *)(param_1 + 0x240) + 0x48) != 0) && (DAT_02110718 != 0)) {
    local_30 = (longlong *)(**(code **)(DAT_02110718 + -0x30))(DAT_02110718);
    (**(code **)(*local_30 + 0x78))(local_30,0xff,0);
    FUN_0197bcf0(local_30);
    local_40 = local_30[0xf];
  }
  lVar1 = *(longlong *)(param_1 + 0x240);
  FUN_00414b50(&local_28,*(undefined8 *)(lVar1 + 0x48));
  FUN_00414ad0(lVar1 + 0x80,local_28);
  if (local_30 == (longlong *)0x0) {
    FUN_01972580(auStack_98,&local_58,local_28);
    FUN_00414ad0(*(longlong *)(param_1 + 0x240) + 0x48,local_58);
  }
  local_20 = *(undefined8 *)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x210) = 0;
  local_78 = param_5;
  FUN_019502b0(param_1,local_40,param_3,param_4);
  *(undefined8 *)(param_1 + 0x210) = local_20;
  FUN_00414ad0(*(longlong *)(param_1 + 0x240) + 0x48,local_28);
  if (local_30 != (longlong *)0x0) {
    if (local_38 == (longlong *)0x0) {
      FUN_0041d830(&local_68,*(undefined8 *)(*(longlong *)(param_1 + 0x240) + 0x48));
      (**(code **)(*local_30 + 0x90))(local_30,param_2,local_68);
    }
    else {
      FUN_0041d830(&local_60,*(undefined8 *)(*(longlong *)(param_1 + 0x240) + 0x48));
      (**(code **)(*local_30 + 0x90))(local_30,local_38[0x12],local_60);
    }
    FUN_00410f20(local_30);
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x90))(local_38,param_2);
    FUN_00410f20(local_38);
  }
  FUN_00414590(&local_68,2);
  FUN_00414480(&local_58);
  FUN_00414480(&local_28);
  return;
}

