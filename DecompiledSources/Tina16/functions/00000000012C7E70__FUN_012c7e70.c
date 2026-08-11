/* Ghidra address: 012c7e70 */
/* Ghidra symbol: FUN_012c7e70 */


void FUN_012c7e70(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  undefined8 local_res10 [3];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = (wchar_t *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_20 = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar1 = FUN_00440a20(local_res10[0],1);
  if (cVar1 != '\0') {
    plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*plVar5 + 0xd8))(plVar5,local_res10[0]);
    (**(code **)(*plVar5 + 0x38))(plVar5,&local_60);
    iVar3 = FUN_004170c0(L"<?xml",local_60,1);
    if (iVar3 == 0) {
      FUN_012c3e50(local_res10[0]);
    }
    FUN_00410f20(plVar5);
    FUN_00bac3d0(&local_20);
    cVar1 = (**(code **)(*local_20 + 0x170))(local_20,local_res10[0]);
    if ((cVar1 != '\0') && ((**(code **)(*local_20 + 0x100))(local_20,&local_68), local_68 != 0)) {
      FUN_00414ad0(param_1 + 0x980,local_res10[0]);
      FUN_00441920(&local_78,*(undefined8 *)(param_1 + 0x980));
      FUN_004414c0(&local_70,local_78,0);
      FUN_00414ad0(param_1 + 0x988,local_70);
      local_90 = *(undefined8 *)(param_1 + 0x988);
      local_88 = 0x11;
      FUN_00442f70(&local_80,*(undefined8 *)(param_1 + 0x978),&local_90,0);
      FUN_0064de00(param_1,local_80);
      (**(code **)(*local_20 + 0x100))(local_20,&local_30);
      (**(code **)(*local_30 + 0x100))(local_30,&local_98,L"rootfolder");
      FUN_0064de00(*(undefined8 *)(param_1 + 0x708),local_98);
      (**(code **)(*local_30 + 0x100))(local_30,&local_58,L"resultfolder");
      if (local_58 == 0) {
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x708),&local_a0);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x730),local_a0);
      }
      else {
        FUN_0064de00(*(undefined8 *)(param_1 + 0x730),local_58);
      }
      (**(code **)(*local_30 + 0x100))(local_30,&local_a8,L"testmode");
      if (local_a8 == L"measurement") {
        bVar10 = true;
      }
      else if (local_a8 == (wchar_t *)0x0) {
        bVar10 = false;
      }
      else {
        iVar3 = FUN_0043e420(local_a8,L"measurement");
        bVar10 = iVar3 == 0;
      }
      if (bVar10) {
        *(undefined1 *)(param_1 + 0x993) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x993) = 0;
      }
      (**(code **)(*local_30 + 0x100))(local_30,&local_b0,L"showreport");
      uVar4 = FUN_0043fed0(local_b0,1);
      (**(code **)(**(longlong **)(param_1 + 0x778) + 0x268))(*(longlong **)(param_1 + 0x778),uVar4)
      ;
      (**(code **)(*local_30 + 0x100))(local_30,&local_b8,L"filtergood");
      uVar4 = FUN_0043fed0(local_b8,1);
      (**(code **)(**(longlong **)(param_1 + 0x780) + 0x268))(*(longlong **)(param_1 + 0x780),uVar4)
      ;
      if (*(char *)(param_1 + 0x993) == '\x01') {
        (**(code **)(**(longlong **)(param_1 + 0x788) + 0x268))(*(longlong **)(param_1 + 0x788),0);
        (**(code **)(*local_30 + 0x100))(local_30,&local_c0,L"saveasimage");
        uVar4 = FUN_0043fed0(local_c0,0);
        (**(code **)(**(longlong **)(param_1 + 0x790) + 0x268))
                  (*(longlong **)(param_1 + 0x790),uVar4);
        (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))(*(longlong **)(param_1 + 0x798),0);
        *(undefined1 *)(param_1 + 0x992) = 0;
      }
      else {
        (**(code **)(*local_30 + 0x100))(local_30,&local_c8,L"savetest");
        uVar4 = FUN_0043fed0(local_c8,0);
        (**(code **)(**(longlong **)(param_1 + 0x788) + 0x268))
                  (*(longlong **)(param_1 + 0x788),uVar4);
        (**(code **)(*local_30 + 0x100))(local_30,&local_d0,L"saveasimage");
        uVar4 = FUN_0043fed0(local_d0,0);
        (**(code **)(**(longlong **)(param_1 + 0x790) + 0x268))
                  (*(longlong **)(param_1 + 0x790),uVar4);
        (**(code **)(*local_30 + 0x100))(local_30,&local_d8,L"saveastext");
        uVar4 = FUN_0043fed0(local_d8,0);
        (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))
                  (*(longlong **)(param_1 + 0x798),uVar4);
        (**(code **)(*local_30 + 0x100))(local_30,&local_e0,L"multithread");
        uVar2 = FUN_0043fed0(local_e0,0);
        *(undefined1 *)(param_1 + 0x992) = uVar2;
      }
      (**(code **)(*local_30 + 0x100))(local_30,&local_e8,L"maxthread");
      uVar4 = FUN_0043fc50(local_e8,1);
      *(undefined4 *)(param_1 + 0x994) = uVar4;
      (**(code **)(*local_30 + 0x100))(local_30,&local_f0,L"timeout");
      uVar4 = FUN_0043fc50(local_f0,0);
      *(undefined4 *)(param_1 + 0x998) = uVar4;
      (**(code **)(*local_30 + 0xe8))(local_30,&local_28,L"/testbench/testcase");
      (**(code **)(*local_28 + 0x68))(local_28);
      (**(code **)(*local_28 + 0x70))(local_28,&local_f8);
      FUN_0041b890(&local_38,local_f8,&DAT_012c8a98);
      FUN_00414480(&local_48);
      uVar6 = 0;
      FUN_006df690(*(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x550));
      while (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x100))(local_38,&local_40,L"folder");
        iVar3 = FUN_00416db0(local_48,local_40);
        if (iVar3 != 0) {
          uVar6 = FUN_012c28a0(0x10);
          uVar6 = FUN_006dee70(*(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x550),0,local_40,
                               uVar6);
          FUN_00414b50(&local_48,local_40);
        }
        (**(code **)(*local_38 + 0x100))(local_38,&local_50,L"circuit");
        uVar7 = FUN_006dee40(*(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x550),uVar6,local_50)
        ;
        uVar8 = FUN_012c2940(local_38);
        FUN_006dc990(uVar7,uVar8);
        lVar9 = FUN_006dd580(uVar6);
        if (lVar9 == 0) {
          FUN_006de140(uVar6);
        }
        (**(code **)(*local_28 + 0x70))(local_28,&local_100);
        FUN_0041b890(&local_38,local_100,&DAT_012c8a98);
      }
      FUN_006e23c0(*(undefined8 *)(param_1 + 0x748));
      lVar9 = *(longlong *)(param_1 + 0x748);
      uVar6 = FUN_006df4b0(*(undefined8 *)(lVar9 + 0x550));
      FUN_006e24b0(lVar9,uVar6);
      FUN_006df710(*(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x550));
    }
  }
  FUN_00417840(&local_100,&DAT_00b9f8e0,2);
  FUN_00414560(&local_f0,10);
  FUN_00414480(&local_a0);
  FUN_00414480(&local_98);
  FUN_00414560(&local_80,3);
  FUN_0041b800(&local_68);
  FUN_00414560(&local_60,5);
  FUN_00417840(&local_38,&LAB_00b9fca0,2);
  FUN_0041b800(&local_28);
  FUN_0041b800(&local_20);
  FUN_00414480(local_res10);
  return;
}

