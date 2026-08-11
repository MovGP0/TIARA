/* Ghidra address: 0189c660 */
/* Ghidra symbol: FUN_0189c660 */


void FUN_0189c660(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 0x508) == 1) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x260))(*(longlong **)(param_1 + 0x740))
    ;
    if (cVar2 == '\0') {
      FUN_0196b9e0(*(undefined8 *)(param_1 + 2000),1);
    }
    else {
      FUN_0196b9e0(*(undefined8 *)(param_1 + 2000),0);
    }
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x710),&local_28);
    FUN_0043ea00(local_20,local_28);
    if (local_20[0] == 0) {
      uVar4 = FUN_0189bbd0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 2000) + 0x238));
      FUN_0180d940(&local_30,uVar4);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x710),local_30);
    }
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x718),&local_40);
    FUN_0043ea00(&local_38,local_40);
    if (local_38 == 0) {
      uVar4 = FUN_0189bbd0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 2000) + 0x228));
      FUN_0180d940(&local_48,uVar4);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x718),local_48);
    }
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x710),&local_50);
    uVar4 = FUN_0180d800(local_50);
    uVar4 = FUN_0189bc30(param_1,uVar4);
    (**(code **)(**(longlong **)(param_1 + 2000) + 0x270))(*(longlong **)(param_1 + 2000),uVar4);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x718),&local_58);
    uVar4 = FUN_0180d800(local_58);
    uVar4 = FUN_0189bc30(param_1,uVar4);
    (**(code **)(**(longlong **)(param_1 + 2000) + 0x268))(*(longlong **)(param_1 + 2000),uVar4);
    uVar4 = FUN_0188d920();
    uVar4 = FUN_0188d190(uVar4);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x720),&local_60);
    uVar3 = FUN_0188b960(uVar4,local_60);
    (**(code **)(**(longlong **)(param_1 + 2000) + 0x278))(*(longlong **)(param_1 + 2000),uVar3);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x798),&local_70);
    FUN_0043ea00(&local_68,local_70);
    if (local_68 == 0) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x798),&DAT_0189cce4);
    }
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7a8),&local_80);
    FUN_0043ea00(&local_78,local_80);
    if (local_78 == 0) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x7a8),&DAT_0189cce4);
    }
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7a0),&local_90);
    FUN_0043ea00(&local_88,local_90);
    if (local_88 == 0) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x7a0),&DAT_0189cce4);
    }
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7b0),&local_a0);
    FUN_0043ea00(&local_98,local_a0);
    if (local_98 == 0) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x7b0),&DAT_0189cce4);
    }
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x798),&local_a8);
    uVar4 = FUN_0180d800(local_a8);
    uVar4 = FUN_0189bc30(param_1,uVar4);
    *(undefined8 *)(*(longlong *)(param_1 + 2000) + 0x1a8) = uVar4;
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7a8),&local_b0);
    uVar4 = FUN_0180d800(local_b0);
    uVar4 = FUN_0189bc30(param_1,uVar4);
    *(undefined8 *)(*(longlong *)(param_1 + 2000) + 0x1c8) = uVar4;
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7a0),&local_b8);
    uVar4 = FUN_0180d800(local_b8);
    uVar4 = FUN_0189bc30(param_1,uVar4);
    *(undefined8 *)(*(longlong *)(param_1 + 2000) + 0x1e0) = uVar4;
    plVar1 = *(longlong **)(param_1 + 2000);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7b0),&local_c0);
    uVar4 = FUN_0180d800(local_c0);
    lVar5 = FUN_0189bc30(param_1,uVar4);
    plVar1[0x2f] = lVar5;
    (**(code **)(*plVar1 + 0x198))(plVar1,0,0);
  }
  FUN_00414560(&local_c0,5);
  FUN_00414480(&local_98);
  FUN_00414480(&local_90);
  FUN_00414480(&local_88);
  FUN_00414480(&local_80);
  FUN_00414480(&local_78);
  FUN_00414480(&local_70);
  FUN_00414480(&local_68);
  FUN_00414560(&local_60,3);
  FUN_00414480(&local_48);
  FUN_00414480(&local_40);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

