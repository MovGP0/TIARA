/* Ghidra address: 018b9850 */
/* Ghidra symbol: FUN_018b9850 */


void FUN_018b9850(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong local_60;
  int local_54;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_90 = auStack_e8;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_70 = 0;
  local_78 = 0;
  local_40 = FUN_01810fa0(&DAT_018103d8,1,0);
  local_48 = FUN_018038a0(&PTR_FUN_01801848,1);
  local_30 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_38 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_50 = FUN_018b9720(auStack_e8,param_2,0);
  *(undefined8 *)(local_50 + 0x110) = param_2;
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x88),local_50);
  iVar4 = *(int *)(local_38 + 0x10) + -1;
  local_54 = 1;
  if (0 < iVar4) {
    do {
      local_60 = FUN_004aeac0(local_38,local_54);
      plVar3 = (longlong *)FUN_004aeac0(local_30,local_54);
      lVar1 = local_60;
      local_68 = plVar3;
      if ((local_60 == 0) && ((*(byte *)(plVar3 + 0x1a) & 2) == 0)) {
        (**(code **)(*plVar3 + 0x1a8))(plVar3);
      }
      else {
        plVar3[0x22] = local_60;
        *(longlong **)(local_60 + 0x110) = plVar3;
        cVar2 = FUN_004113d0(local_60,&PTR_FUN_0192c3a0);
        if (cVar2 == '\0') {
          FUN_00416780(&local_98,**(undefined2 **)(local_60 + 0x100));
          FUN_0043e1a0(&local_70,local_98);
        }
        else {
          FUN_00414b50(&local_70,&DAT_018b9c4c);
        }
        FUN_0043f750(&local_b0,*(int *)(*(longlong *)(param_1 + 0x88) + 0x10) + -1);
        local_c8 = &LAB_018b9c74;
        local_c0 = *(undefined8 *)(local_60 + 0x10);
        FUN_00416cd0(&local_a8,4,L"Page",local_b0);
        local_c8 = (undefined1 *)local_60;
        FUN_018b7700(*(undefined8 *)(param_1 + 0x58),&local_a0,local_70,local_a8);
        FUN_00414b50(&local_70,local_a0);
        cVar2 = FUN_004113d0(local_60,&PTR_FUN_01925478);
        if (cVar2 != '\0') {
          FUN_0195a600(lVar1,0);
          FUN_00414480(lVar1 + 0x1a8);
        }
        FUN_01814710(local_40,&local_78,local_60,0);
        FUN_00414ad0(lVar1 + 0x100,local_78);
        FUN_00414ad0(lVar1 + 0xf8,local_70);
        FUN_00414ad0(plVar3 + 0x1f,local_70);
      }
      local_54 = local_54 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  FUN_00410f20(local_40);
  FUN_00410f20(local_48);
  FUN_00414560(&local_b0,4);
  FUN_00414560(&local_78,2);
  return;
}

