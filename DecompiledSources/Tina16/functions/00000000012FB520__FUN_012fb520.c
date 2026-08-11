/* Ghidra address: 012fb520 */
/* Ghidra symbol: FUN_012fb520 */


void FUN_012fb520(longlong param_1,undefined8 param_2)

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
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30 [3];
  
  local_190 = 0;
  local_188 = 0;
  local_178 = 0;
  local_180 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = (wchar_t *)0x0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_90 = 0;
  local_30[0] = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_013022b0(param_1,L"RunTestbench/DoLoadTestBench: File exists?");
  cVar1 = FUN_00440a20(local_res10[0],1);
  if (cVar1 == '\0') {
    FUN_013022b0(param_1,L"RunTestbench/DoLoadTestBench: File exists: no");
  }
  else {
    FUN_013022b0(param_1,L"RunTestbench/DoLoadTestBench: File exists: yes");
    plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*plVar5 + 0xd8))(plVar5,local_res10[0]);
    (**(code **)(*plVar5 + 0x38))(plVar5,&local_90);
    iVar3 = FUN_004170c0(L"<?xml",local_90,1);
    if (iVar3 == 0) {
      FUN_012f2c80(local_res10[0]);
    }
    if (plVar5 != (longlong *)0x0) {
      FUN_00410f20(plVar5);
    }
    FUN_013022b0(param_1,L"DoLoadTestbench: File exists");
    FUN_00bac3d0(local_30);
    cVar1 = (**(code **)(*local_30[0] + 0x170))(local_30[0],local_res10[0]);
    if ((cVar1 != '\0') &&
       ((**(code **)(*local_30[0] + 0x100))(local_30[0],&local_98), local_98 != 0)) {
      FUN_00414ad0(param_1 + 0xaa8,local_res10[0]);
      FUN_00441920(&local_a8,*(undefined8 *)(param_1 + 0xaa8));
      FUN_004414c0(&local_a0,local_a8,0);
      FUN_00414ad0(param_1 + 0xab0,local_a0);
      local_c0 = *(undefined8 *)(param_1 + 0xab0);
      local_b8 = 0x11;
      FUN_00442f70(&local_b0,*(undefined8 *)(param_1 + 0xaa0),&local_c0,0);
      FUN_0064de00(param_1,local_b0);
      (**(code **)(*local_30[0] + 0x100))(local_30[0],&local_40);
      (**(code **)(*local_40 + 0x100))(local_40,&local_c8,L"rootFolder");
      FUN_0064de00(*(undefined8 *)(param_1 + 0x7a0),local_c8);
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x7a0),&local_d0);
      FUN_00441640(&local_d8,local_res10[0]);
      iVar3 = FUN_00416db0(local_d0,local_d8);
      bVar10 = iVar3 == 0;
      if (!bVar10) {
        FUN_00441640(&local_e0,local_res10[0]);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x7a0),local_e0);
      }
      (**(code **)(*local_40 + 0x100))(local_40,&local_70,L"resultFolder");
      if (local_70 == 0) {
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x7a0),&local_f0);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x7c0),local_f0);
      }
      else if (bVar10) {
        FUN_0064de00(*(undefined8 *)(param_1 + 0x7c0),local_70);
      }
      else {
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x7a0),&local_e8);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x7c0),local_e8);
      }
      (**(code **)(*local_40 + 0x100))(local_40,&local_f8,L"dataFileName");
      FUN_0064de00(*(undefined8 *)(param_1 + 0x7d8),local_f8);
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x7d8),&local_80);
      while (iVar3 = FUN_004170c0(&DAT_012fc668,local_80,1), 0 < iVar3) {
        uVar4 = FUN_004170c0(&DAT_012fc668,local_80,1);
        FUN_00416e20(&local_80,1,uVar4);
      }
      if (!bVar10) {
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x7a0),&local_100);
        FUN_00416ad0(&local_100,local_80);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x7d8),local_100);
      }
      (**(code **)(*local_40 + 0x100))(local_40,&local_108,L"testMode");
      if (local_108 == L"measurement") {
        bVar10 = true;
      }
      else if (local_108 == (wchar_t *)0x0) {
        bVar10 = false;
      }
      else {
        iVar3 = FUN_0043e420(local_108,L"measurement");
        bVar10 = iVar3 == 0;
      }
      if (bVar10) {
        *(undefined1 *)(param_1 + 0xabd) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0xabd) = 0;
      }
      (**(code **)(*local_40 + 0x100))(local_40,&local_110,L"showReport");
      uVar4 = FUN_0043fed0(local_110,1);
      (**(code **)(**(longlong **)(param_1 + 0x730) + 0x268))(*(longlong **)(param_1 + 0x730),uVar4)
      ;
      (**(code **)(*local_40 + 0x100))(local_40,&local_118,L"filterGood");
      uVar4 = FUN_0043fed0(local_118,1);
      (**(code **)(**(longlong **)(param_1 + 0x738) + 0x268))(*(longlong **)(param_1 + 0x738),uVar4)
      ;
      (**(code **)(*local_40 + 0x100))(local_40,&local_120,L"saveTest");
      uVar4 = FUN_0043fed0(local_120,1);
      (**(code **)(**(longlong **)(param_1 + 0x740) + 0x268))(*(longlong **)(param_1 + 0x740),uVar4)
      ;
      (**(code **)(*local_40 + 0x100))(local_40,&local_128,L"manufacturer");
      if (local_128 == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0x268))(*(longlong **)(param_1 + 0x9f0),0);
      }
      else {
        (**(code **)(*local_40 + 0x100))(local_40,&local_130,L"manufacturer");
        uVar4 = FUN_0043fc00(local_130);
        (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0x268))
                  (*(longlong **)(param_1 + 0x9f0),uVar4);
      }
      if (*(char *)(param_1 + 0xabd) == '\0') {
        (**(code **)(*local_40 + 0x100))(local_40,&local_138,L"saveAsImage");
        uVar4 = FUN_0043fed0(local_138,0);
        (**(code **)(**(longlong **)(param_1 + 0x748) + 0x268))
                  (*(longlong **)(param_1 + 0x748),uVar4);
        *(undefined1 *)(param_1 + 0xaba) = 0;
      }
      else {
        (**(code **)(*local_40 + 0x100))(local_40,&local_140,L"saveAsImage");
        uVar4 = FUN_0043fed0(local_140,0);
        (**(code **)(**(longlong **)(param_1 + 0x748) + 0x268))
                  (*(longlong **)(param_1 + 0x748),uVar4);
        (**(code **)(*local_40 + 0x100))(local_40,&local_148,L"multiThread");
        uVar2 = FUN_0043fed0(local_148,0);
        *(undefined1 *)(param_1 + 0xaba) = uVar2;
      }
      (**(code **)(*local_40 + 0x100))(local_40,&local_150,L"maxThread");
      uVar4 = FUN_0043fc50(local_150,1);
      *(undefined4 *)(param_1 + 0xac0) = uVar4;
      (**(code **)(*local_40 + 0x100))(local_40,&local_158,L"timeout");
      uVar4 = FUN_0043fc50(local_158,0);
      *(undefined4 *)(param_1 + 0xac4) = uVar4;
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0xa98) + 0x20))
                        (*(longlong **)(param_1 + 0xa98),L"ModelTest Settings",L"Opt_Timeout",0);
      *(undefined4 *)(param_1 + 0xac4) = uVar4;
      FUN_013022b0(param_1,L"Load before testcases");
      (**(code **)(*local_40 + 0xe8))(local_40,&local_38,L"/testbench/testcase");
      (**(code **)(*local_38 + 0x68))(local_38);
      (**(code **)(*local_38 + 0x70))(local_38,&local_160);
      FUN_0041b890(&local_48,local_160,&DAT_012fc888);
      FUN_00414480(&local_60);
      uVar6 = 0;
      FUN_006df690(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550));
      while (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x100))(local_48,&local_58,L"folder");
        iVar3 = FUN_00416db0(local_60,local_58);
        if (iVar3 != 0) {
          uVar6 = FUN_012f2410(0x10);
          uVar6 = FUN_006dee70(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),0,local_58,
                               uVar6);
          FUN_00414b50(&local_60,local_58);
        }
        (**(code **)(*local_48 + 0x100))(local_48,&local_68,L"circuit");
        uVar7 = FUN_006dee40(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),uVar6,local_68)
        ;
        uVar8 = FUN_012f2450(local_48);
        FUN_006dc990(uVar7,uVar8);
        lVar9 = FUN_006dd580(uVar6);
        if (lVar9 == 0) {
          FUN_006de140(uVar6);
        }
        (**(code **)(*local_38 + 0x70))(local_38,&local_168);
        FUN_0041b890(&local_48,local_168,&DAT_012fc888);
      }
      FUN_006e23c0(*(undefined8 *)(param_1 + 0x700));
      lVar9 = *(longlong *)(param_1 + 0x700);
      uVar6 = FUN_006df4b0(*(undefined8 *)(lVar9 + 0x550));
      FUN_006e24b0(lVar9,uVar6);
      FUN_006df710(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550));
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x7d8),&local_170);
      if (local_170 != 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x7d8);
        FUN_0064dd90(uVar6,&local_180);
        FUN_013020a0(param_1,&local_178,local_180);
        FUN_0064de00(uVar6,local_178);
      }
      *(undefined1 *)(param_1 + 0xabc) = 1;
      FUN_01303240(param_1,0,0,0);
      *(undefined1 *)(param_1 + 0xabc) = 0;
      uVar6 = 0;
      (**(code **)(*local_40 + 0x100))(local_40,&local_88,L"version");
      if (local_88 != 0) {
        uVar6 = FUN_00448650(local_88,PTR_DAT_02004830);
      }
      (**(code **)(*local_40 + 0xe8))(local_40,&local_38,L"/testbench/testcase");
      (**(code **)(*local_38 + 0x68))(local_38);
      (**(code **)(*local_38 + 0x70))(local_38,&local_188);
      FUN_0041b890(&local_48,local_188,&DAT_012fc888);
      while (local_48 != (longlong *)0x0) {
        FUN_012ff010(param_1,local_48,uVar6);
        (**(code **)(*local_38 + 0x70))(local_38,&local_190);
        FUN_0041b890(&local_48,local_190,&DAT_012fc888);
      }
      local_48 = (longlong *)0x0;
    }
  }
  FUN_01303df0(param_1);
  FUN_00417840(&local_190,&DAT_00b9f8e0,2);
  FUN_00414480(&local_180);
  FUN_00414480(&local_178);
  FUN_00414480(&local_170);
  FUN_00417840(&local_168,&DAT_00b9f8e0,2);
  FUN_00414560(&local_158,0xb);
  FUN_00414480(&local_100);
  FUN_00414480(&local_f8);
  FUN_00414560(&local_f0,2);
  FUN_00414560(&local_e0,2);
  FUN_00414480(&local_d0);
  FUN_00414480(&local_c8);
  FUN_00414560(&local_b0,3);
  FUN_0041b800(&local_98);
  FUN_00414560(&local_90,8);
  FUN_00417840(&local_50,&LAB_00b9fca0,3);
  FUN_0041b800(&local_38);
  FUN_0041b800(local_30);
  FUN_00414480(local_res10);
  return;
}

