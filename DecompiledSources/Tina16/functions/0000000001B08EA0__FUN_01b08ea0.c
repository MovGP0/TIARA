/* Ghidra address: 01b08ea0 */
/* Ghidra symbol: FUN_01b08ea0 */


void FUN_01b08ea0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 local_res18 [2];
  undefined1 auStack_158 [40];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined *local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  ulonglong local_60;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_90 = auStack_158;
  local_128 = 0;
  local_130 = 0;
  local_118 = 0;
  local_120 = 0;
  local_e8 = 0;
  local_110 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_70 = 0;
  local_20[0] = 0;
  local_30 = 0;
  local_28 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414480(local_20);
  local_78 = FUN_00448ed0();
  FUN_0044a350(local_20,local_78,PTR_DAT_02004830);
  FUN_00416ba0(&local_98,L"Date/Time: ",local_20[0]);
  uVar5 = FUN_0040f200(param_2,local_98);
  FUN_0040f590(uVar5);
  FUN_00414480(local_20);
  FUN_00409900();
  FUN_0040f590(param_2);
  FUN_00409900();
  FUN_00414b50(&local_70,*(undefined8 *)(param_1 + 0x689));
  FUN_00416ba0(&local_a0,L"Circuit File: ",local_70);
  uVar5 = FUN_0040f200(param_2,local_a0);
  FUN_0040f590(uVar5);
  FUN_00409900();
  FUN_00414b50(&local_70,local_res18[0]);
  FUN_00416ba0(&local_a8,L"Statistics File: ",local_70);
  uVar5 = FUN_0040f200(param_2,local_a8);
  FUN_0040f590(uVar5);
  FUN_00409900();
  FUN_0040f590(param_2);
  FUN_00409900();
  FUN_00414480(&local_30);
  local_80 = FUN_00448e70();
  FUN_0044a2b0(&local_30,local_80,PTR_DAT_02004830);
  FUN_00414480(&local_28);
  local_88 = FUN_00448ea0();
  FUN_0044a300(&local_28,local_88,PTR_DAT_02004830);
  local_e0 = *(undefined8 *)PTR_DAT_02004728;
  local_d8 = 0x11;
  local_d0 = local_30;
  local_c8 = 0x11;
  local_c0 = local_28;
  local_b8 = 0x11;
  FUN_00442f70(&local_b0,L"Version: %s Date: %s Time: %s",&local_e0,2);
  uVar5 = FUN_0040f200(param_2,local_b0);
  FUN_0040f590(uVar5);
  FUN_00414480(&local_28);
  FUN_00414480(&local_30);
  FUN_00409900();
  FUN_0040d200(local_68,0x38,0);
  local_68[0] = 0x38;
  thunk_FUN_03bff373(local_68);
  local_108 = PTR_DAT_02004508 + 0x3e;
  local_100 = 6;
  FUN_0043f780(&local_110,local_60 / 0x100000);
  local_f8 = local_110;
  local_f0 = 0x11;
  FUN_00442f70(&local_e8,L"CPU Info: %s Physical memory: %s MB",&local_108,1);
  uVar5 = FUN_0040f200(param_2,local_e8);
  FUN_0040f590(uVar5);
  FUN_00409900();
  FUN_0040f590(param_2);
  FUN_00409900();
  cVar2 = *(char *)(param_1 + 0xe0);
  if (cVar2 == '\x02') {
    uVar5 = FUN_0040f200(param_2,L"Matrix solver = KLU");
    FUN_0040f590(uVar5);
    FUN_00409900();
  }
  else if (cVar2 == '\x01') {
    uVar5 = FUN_0040f200(param_2,L"Matrix solver = SMP");
    FUN_0040f590(uVar5);
    FUN_00409900();
  }
  else if (cVar2 == '\0') {
    uVar5 = FUN_0040f200(param_2,L"Matrix solver = HTSolver");
    FUN_0040f590(uVar5);
    FUN_00409900();
  }
  cVar2 = *(char *)(param_1 + 0xed6);
  if (cVar2 == '\0') {
    uVar5 = FUN_0040f200(param_2,L"Nonlinear solver = Newton-Raphson");
    FUN_0040f590(uVar5);
    FUN_00409900();
  }
  else if (cVar2 == '\x01') {
    uVar5 = FUN_0040f200(param_2,
                         L"Nonlinear solver = Newton-Raphson with simplified pwl semiconductor models"
                        );
    FUN_0040f590(uVar5);
    FUN_00409900();
  }
  else if (cVar2 == '\x02') {
    uVar5 = FUN_0040f200(param_2,L"Nonlinear solver = PWL solver");
    FUN_0040f590(uVar5);
    FUN_00409900();
  }
  if (*(char *)(param_1 + 0x98) == '\x06') {
    if (*(char *)(*(longlong *)(param_1 + 0x110) + 0xf5) == '\0') {
      uVar5 = FUN_0040f200(param_2,L"Model compilation disabled ");
      FUN_0040f590(uVar5);
      FUN_00409900();
      uVar5 = FUN_0040f200(param_2,L"Matrix compilation disabled ");
      FUN_0040f590(uVar5);
      FUN_00409900();
    }
    else {
      uVar5 = FUN_0040f200(param_2,L"Model compilation enabled ");
      FUN_0040f590(uVar5);
      FUN_00409900();
      if (*(char *)(*(longlong *)(param_1 + 0x110) + 0xf4) == '\0') {
        uVar5 = FUN_0040f200(param_2,L"Matrix compilation disabled ");
        FUN_0040f590(uVar5);
        FUN_00409900();
      }
      else {
        uVar5 = FUN_0040f200(param_2,L"Matrix compilation enabled ");
        FUN_0040f590(uVar5);
        FUN_00409900();
      }
    }
    if (*(char *)(*(longlong *)(param_1 + 0x110) + 0x121) == '\0') {
      uVar5 = FUN_0040f200(param_2,L"SSE2 disabled ");
      FUN_0040f590(uVar5);
      FUN_00409900();
    }
    else {
      uVar5 = FUN_0040f200(param_2,L"SSE2 Enabled ");
      FUN_0040f590(uVar5);
      FUN_00409900();
    }
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x110) + 0xf0);
    if (iVar1 == 0) {
      uVar5 = FUN_0040f200(param_2,L"Number of threads = Max ");
      FUN_0040f590(uVar5);
      FUN_00409900();
    }
    else {
      uVar3 = FUN_01b11110();
      if ((int)(uVar3 & 0xff) < iVar1) {
        uVar5 = FUN_0040f200(param_2,L"Number of threads = Dynamic ");
        FUN_0040f590(uVar5);
        FUN_00409900();
      }
      else {
        FUN_0043f750(&local_120,*(undefined4 *)(*(longlong *)(param_1 + 0x110) + 0xf0));
        FUN_00416ba0(&local_118,L"Number of threads = ",local_120);
        uVar5 = FUN_0040f200(param_2,local_118);
        FUN_0040f590(uVar5);
        FUN_00409900();
      }
    }
  }
  uVar4 = FUN_015fc1d0(param_1 + 0xe81);
  FUN_015fc150(&local_130,uVar4);
  FUN_00416ba0(&local_128,L"VHDL Mixed mode ",local_130);
  uVar5 = FUN_0040f200(param_2,local_128);
  FUN_0040d060(uVar5);
  FUN_00409900();
  cVar2 = FUN_01b07dd0(param_1);
  if (cVar2 == '\0') {
    uVar5 = FUN_0040f200(param_2,L" (Analog circuit.)");
    FUN_0040f590(uVar5);
    FUN_00409900();
  }
  else {
    uVar5 = FUN_0040f200(param_2,L" (Mixed mode circuit.)");
    FUN_0040f590(uVar5);
    FUN_00409900();
  }
  if (*(char *)(param_1 + 0x98) == '\x06') {
    if (*(char *)(param_1 + 0x33b) == '\0') {
      uVar5 = FUN_0040f200(param_2,L"Save all analysis results disabled ");
      FUN_0040f590(uVar5);
      FUN_00409900();
    }
    else {
      uVar5 = FUN_0040f200(param_2,L"Save all analysis results enabled ");
      FUN_0040f590(uVar5);
      FUN_00409900();
    }
  }
  uVar5 = FUN_0040f200(param_2,L"Memory Manager = BorlandMM ");
  FUN_0040f590(uVar5);
  FUN_00409900();
  FUN_00414560(&local_130,5);
  FUN_00414480(&local_e8);
  FUN_00414560(&local_b0,4);
  FUN_00414480(&local_70);
  FUN_00414560(&local_30,3);
  FUN_00414480(local_res18);
  return;
}

