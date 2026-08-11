/* Ghidra address: 00fa49c0 */
/* Ghidra symbol: FUN_00fa49c0 */


void FUN_00fa49c0(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_48;
  int local_3c;
  double local_38;
  int local_2c;
  double local_28;
  undefined8 local_20 [2];
  
  local_50 = auStack_98;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_20[0] = 0;
  local_2c = *(int *)(param_1 + 0x850);
  local_3c = 0x10000;
  puVar1 = auStack_98;
  if (*(int *)(param_1 + 0x870) == 8) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))(*(longlong **)(param_1 + 0x7c0))
    ;
    puVar1 = local_50;
    if (cVar2 == '\0') {
      local_3c = 0x100;
    }
  }
  local_50 = puVar1;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x260))(*(longlong **)(param_1 + 0x760));
  if (iVar3 == 8) {
    *(undefined4 *)(param_1 + 0x888) = 0;
    *(undefined1 *)(param_1 + 0x890) = 0;
    *(undefined8 *)(param_1 + 0x858) = *(undefined8 *)(param_1 + 0x860);
    (**(code **)(**(longlong **)(param_1 + 0x720) + 0x268))(*(longlong **)(param_1 + 0x720),1);
  }
  else {
    *(undefined1 *)(param_1 + 0x890) = 1;
    *(undefined4 *)(param_1 + 0x888) = 1;
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x260))(*(longlong **)(param_1 + 0x760))
    ;
    *(undefined4 *)(param_1 + 0x88c) = uVar4;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x260))(*(longlong **)(param_1 + 0x760))
    ;
    *(undefined8 *)(param_1 + 0x858) = *(undefined8 *)(param_1 + 0x898 + (longlong)iVar3 * 8);
  }
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x260))(*(longlong **)(param_1 + 0x760));
  *(undefined4 *)(param_1 + 0xba8) = uVar4;
  FUN_00414480(local_20);
  local_48 = *(undefined8 *)(param_1 + 0x858);
  FUN_00448450(local_20,local_48,PTR_DAT_02004830);
  FUN_00416ba0(&local_58,local_20[0],&DAT_00fa4d28);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x750),local_58);
  FUN_00414480(local_20);
  FUN_00fa3f80(param_1,param_2);
  local_28 = *(double *)(param_1 + 0x858) / 4.0;
  local_38 = (double)(local_3c * local_2c) / local_28;
  local_78 = (undefined *)CONCAT71(local_78._1_7_,1);
  FUN_00b8fd60(&local_68,local_38,*PTR_DAT_02005310,0);
  local_78 = &DAT_00fa4d60;
  FUN_00416cd0(&local_60,3,L"Time max: ",local_68);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x740),local_60);
  *(undefined1 *)(param_1 + 0x874) = 1;
  FUN_00fa3f80(param_1,param_2);
  *(undefined1 *)(param_1 + 0x874) = 0;
  FUN_00414560(&local_68,3);
  FUN_00414480(local_20);
  return;
}

