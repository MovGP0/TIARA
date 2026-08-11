/* Ghidra address: 00a52700 */
/* Ghidra symbol: FUN_00a52700 */


longlong FUN_00a52700(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  *(undefined8 *)(local_res8 + 8) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(local_res8 + 0x10) = *(undefined8 *)(param_3 + 0x10);
  *(undefined1 *)(local_res8 + 0x20) = *(undefined1 *)(param_3 + 0x20);
  FUN_00414ad0(local_res8 + 0x28,*(undefined8 *)(param_3 + 0x28));
  *(undefined1 *)(local_res8 + 0x30) = *(undefined1 *)(param_3 + 0x30);
  FUN_00414ad0(local_res8 + 0x38,*(undefined8 *)(param_3 + 0x38));
  FUN_00414ad0(local_res8 + 0x40,*(undefined8 *)(param_3 + 0x40));
  FUN_00414ad0(local_res8 + 0x48,*(undefined8 *)(param_3 + 0x48));
  FUN_00414ad0(local_res8 + 0x50,*(undefined8 *)(param_3 + 0x50));
  FUN_00414ad0(local_res8 + 0x58,*(undefined8 *)(param_3 + 0x58));
  *(undefined8 *)(local_res8 + 0x60) = *(undefined8 *)(param_3 + 0x60);
  *(undefined4 *)(local_res8 + 0x68) = *(undefined4 *)(param_3 + 0x68);
  *(undefined1 *)(local_res8 + 0x6c) = *(undefined1 *)(param_3 + 0x6c);
  *(undefined4 *)(local_res8 + 0x70) = *(undefined4 *)(param_3 + 0x70);
  FUN_00418240(local_res8 + 0x78,param_3 + 0x78,&DAT_004013d8,0x43);
  puVar5 = (undefined8 *)(param_3 + 0x6c0);
  puVar6 = (undefined8 *)(local_res8 + 0x6c0);
  for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
  *(undefined1 *)((longlong)puVar6 + 2) = *(undefined1 *)((longlong)puVar5 + 2);
  *(undefined4 *)(local_res8 + 0x750) = *(undefined4 *)(param_3 + 0x750);
  if (*(longlong *)(param_3 + 0x748) != 0) {
    uVar2 = FUN_00410e60(&DAT_00a4d720,1);
    *(undefined8 *)(local_res8 + 0x748) = uVar2;
    FUN_00a4ddc0(uVar2,*(undefined8 *)(param_3 + 0x748));
  }
  if (*(longlong *)(param_3 + 0x18) != 0) {
    plVar3 = (longlong *)FUN_00a4dfc0(&PTR_FUN_00a4d8c8,1);
    *(longlong **)(local_res8 + 0x18) = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(param_3 + 0x18));
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

