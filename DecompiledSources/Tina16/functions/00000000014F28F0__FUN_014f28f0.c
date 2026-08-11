/* Ghidra address: 014f28f0 */
/* Ghidra symbol: FUN_014f28f0 */


void FUN_014f28f0(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_2c8 [40];
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined1 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined1 *local_230;
  undefined2 local_226;
  undefined1 local_224 [256];
  byte local_124 [256];
  int local_24;
  double local_20;
  
  local_230 = auStack_2c8;
  local_2a0 = 0;
  local_298 = 0;
  local_280 = 0;
  local_288 = 0;
  local_290 = 0;
  local_278 = 0;
  local_250 = 0;
  local_258 = 0;
  local_270 = 0;
  local_240 = 0;
  local_248 = 0;
  local_238 = 0;
  *(undefined1 *)(param_1 + 0x98c) = *(undefined1 *)(*(longlong *)(param_1 + 0x828) + 0x4a8);
  uVar1 = FUN_00c5a450(*(undefined8 *)(param_1 + 0x838));
  *PTR_DAT_02005310 = uVar1;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 2000) + 0x260))(*(longlong **)(param_1 + 2000));
  *(undefined1 *)(param_1 + 0x11b5) = uVar1;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))(*(longlong **)(param_1 + 0x7d8));
  *(undefined4 *)(param_1 + 0x11b6) = uVar3;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x7e8) + 0x260))(*(longlong **)(param_1 + 0x7e8));
  *(undefined1 *)(param_1 + 0x11c2) = uVar1;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x7e0),&local_238);
  FUN_00416910(local_124,local_238,0xff);
  if (local_124[local_124[0]] == 0x25) {
    FUN_00415260(local_124,0xff,local_124[0],1);
  }
  FUN_004154b0(&local_240,local_124,0);
  FUN_00416880(&local_248,local_240);
  local_20 = (double)FUN_00410100(local_248,&local_24);
  if (local_24 == 0) {
    if (0.0 <= local_20) {
      *(double *)(param_1 + 0x11ba) = local_20;
      FUN_014f4080(param_1,PTR_DAT_02003e38);
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                        (*(longlong **)(param_1 + 0x6f0));
      *PTR_DAT_020024c0 = uVar1;
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))
                        (*(longlong **)(param_1 + 0x700));
      *PTR_DAT_02004638 = uVar1;
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x260))
                        (*(longlong **)(param_1 + 0x6f8));
      *PTR_DAT_020044c8 = uVar1;
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x850) + 0x260))
                        (*(longlong **)(param_1 + 0x850));
      *PTR_DAT_020017c0 = uVar1;
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x860) + 0x260))
                        (*(longlong **)(param_1 + 0x860));
      *PTR_DAT_02001088 = uVar1;
      FUN_01d44460(PTR_DAT_02003e38,*(undefined8 *)(param_1 + 0x8d0));
      FUN_00f06730(L"SaveAllAnalResults",*PTR_DAT_020017c0);
      FUN_00f06730(L"DisableTRTooManyPointsWarning",*PTR_DAT_02001088);
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x870) + 0x260))
                        (*(longlong **)(param_1 + 0x870));
      *(undefined1 *)(param_1 + 0x119f) = uVar1;
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x260))
                        (*(longlong **)(param_1 + 0x878));
      *(undefined1 *)(param_1 + 0x11a0) = uVar1;
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x848) + 0x260))
                        (*(longlong **)(param_1 + 0x848));
      *PTR_DAT_02005258 = uVar1;
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x880) + 0x260))
                        (*(longlong **)(param_1 + 0x880));
      *PTR_DAT_02003da8 = uVar1;
      FUN_00f06730(L"EnableInstantDrawing",*PTR_DAT_02005258);
      FUN_00f06730(L"EnableAutoConverge",*PTR_DAT_02003da8);
      *(char *)(param_1 + 0xc36) = *(char *)(*(longlong *)(param_1 + 0x718) + 0x4a8) + '\x01';
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                        (*(longlong **)(param_1 + 0x720));
      *(char *)(param_1 + 0xc37) = cVar2 + '\x01';
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x768) + 0x260))
                        (*(longlong **)(param_1 + 0x768));
      *(undefined1 *)(param_1 + 0x1286) = uVar1;
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x8b0) + 0x260))
                        (*(longlong **)(param_1 + 0x8b0));
      *(char *)(param_1 + 0x1287) = cVar2 + '\x01';
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))
                        (*(longlong **)(param_1 + 0x748));
      *(char *)(param_1 + 0xc32) = cVar2 + '\x01';
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x898) + 0x260))
                        (*(longlong **)(param_1 + 0x898));
      *(undefined1 *)(param_1 + 0x1289) = uVar1;
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x8a0) + 0x260))
                        (*(longlong **)(param_1 + 0x8a0));
      *(undefined1 *)(param_1 + 0x128a) = uVar1;
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x260))
                        (*(longlong **)(param_1 + 0x8c0));
      *(undefined1 *)(param_1 + 0x129b) = uVar1;
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x790) + 0x260))
                        (*(longlong **)(param_1 + 0x790));
      *PTR_DAT_020030c0 = uVar1;
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0x260))
                        (*(longlong **)(param_1 + 0x798));
      PTR_DAT_020030c0[2] = uVar1;
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x260))
                        (*(longlong **)(param_1 + 0x7a0));
      PTR_DAT_020030c0[0x5d] = uVar1;
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x260))
                        (*(longlong **)(param_1 + 0x7a8));
      FUN_015fc210(param_1 + 0x988,uVar3);
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x260))
                        (*(longlong **)(param_1 + 0x7a8));
      if (*(char *)(param_1 + 0x8c9) != cVar2) {
        uVar4 = FUN_019a4600();
        FUN_019af700(uVar4);
        if (*(longlong *)PTR_DAT_020023c0 != 0) {
          *(undefined1 *)(*(longlong *)PTR_DAT_020023c0 + 0x1c49) = 1;
        }
      }
      *(undefined4 *)(param_1 + 0x1238) = *(undefined4 *)(param_1 + 0x967);
      *(undefined4 *)(PTR_DAT_020030c0 + 0x58) = *(undefined4 *)(param_1 + 0x930);
      PTR_DAT_020030c0[0x5c] = *(undefined1 *)(param_1 + 0x934);
      *(undefined4 *)(PTR_DAT_020030c0 + 0x60) = *(undefined4 *)(param_1 + 0x938);
      *(undefined4 *)(PTR_DAT_020030c0 + 100) = *(undefined4 *)(param_1 + 0x93c);
      *(undefined4 *)(PTR_DAT_020030c0 + 0x68) = *(undefined4 *)(param_1 + 0x940);
      *(undefined4 *)(PTR_DAT_020030c0 + 0x6c) = *(undefined4 *)(param_1 + 0x944);
      FUN_015fc260(param_1 + 0x988,*(undefined1 *)(param_1 + 0x937));
      *(undefined4 *)(PTR_DAT_020030c0 + 8) = *(undefined4 *)(param_1 + 0x8e0);
      PTR_DAT_020030c0[5] = *(undefined1 *)(param_1 + 0x960);
      PTR_DAT_020030c0[0xc] = *(undefined1 *)(param_1 + 0x8e4);
      PTR_DAT_020030c0[0xd] = *(undefined1 *)(param_1 + 0x8e5);
      *(undefined4 *)(PTR_DAT_020030c0 + 0x38) = *(undefined4 *)(param_1 + 0x910);
      PTR_DAT_020030c0[0xe] = *(undefined1 *)(param_1 + 0x8e6);
      FUN_00414ad0(PTR_DAT_020030c0 + 0x48,*(undefined8 *)(param_1 + 0x920));
      FUN_00414ad0(PTR_DAT_020030c0 + 0x50,*(undefined8 *)(param_1 + 0x928));
      FUN_014f14b0(L"XMCMathCordicMode",*(undefined4 *)(PTR_DAT_020030c0 + 0x38));
      FUN_00417c40(PTR_DAT_020030c0 + 0x70,param_1 + 0x948,&DAT_00e044a8);
      FUN_014f12b0(&local_2a0,PTR_DAT_020030c0 + 0x70);
      FUN_00414ad0(param_1 + 0x1293,local_2a0);
      *(undefined4 *)(PTR_DAT_020030c0 + 0x2c) = *(undefined4 *)(param_1 + 0x904);
      *(undefined4 *)(PTR_DAT_020030c0 + 0x30) = *(undefined4 *)(param_1 + 0x908);
      *(undefined4 *)(PTR_DAT_020030c0 + 0x34) = *(undefined4 *)(param_1 + 0x90c);
      uVar1 = *(undefined1 *)(param_1 + 0x936);
      PTR_DAT_020030c0[0x5e] = uVar1;
      PTR_DAT_020034d0[9] = uVar1;
      lVar5 = FUN_019a4600();
      FUN_00414ad0(*(longlong *)(lVar5 + 0x200) + 0x10,*(undefined8 *)(param_1 + 0x978));
      lVar5 = FUN_019a4600();
      FUN_00414ad0(*(longlong *)(lVar5 + 0x200) + 0x20,*(undefined8 *)(param_1 + 0x980));
      FUN_00e06090();
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x868) + 0x260))
                        (*(longlong **)(param_1 + 0x868));
      (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x38))
                (*(longlong **)(param_1 + 0x8d0),L"Diagram Page Setup",L"ManualScale",uVar3);
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x858) + 0x260))
                        (*(longlong **)(param_1 + 0x858));
      (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x38))
                (*(longlong **)(param_1 + 0x8d0),L"Diagram Page Setup",L"GridViewDesign",uVar3);
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x840) + 0x260))
                        (*(longlong **)(param_1 + 0x840));
      (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x38))
                (*(longlong **)(param_1 + 0x8d0),L"Analysis Setup",L"EnableStatistics",uVar3);
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x848) + 0x260))
                        (*(longlong **)(param_1 + 0x848));
      (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x38))
                (*(longlong **)(param_1 + 0x8d0),L"Analysis Setup",L"EnableInstantDrawing",uVar3);
      uVar3 = FUN_00f06890(L"DetailedStatisticsEnabled",0);
      (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x38))
                (*(longlong **)(param_1 + 0x8d0),L"Analysis Setup",L"DetailedStatisticsEnabled",
                 uVar3);
      uVar3 = FUN_00f06890(L"DetailedMixedStatisticsEnabled",0);
      (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x38))
                (*(longlong **)(param_1 + 0x8d0),L"Analysis Setup",L"DetailedMixedStatisticsEnabled"
                 ,uVar3);
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))
                        (*(longlong **)(param_1 + 0x758));
      (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x38))
                (*(longlong **)(param_1 + 0x8d0),L"Analysis Setup",L"ModelCompilationEnabled",uVar3)
      ;
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x260))
                        (*(longlong **)(param_1 + 0x740));
      (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x38))
                (*(longlong **)(param_1 + 0x8d0),L"Analysis Setup",L"MatrixCompilationEnabled",uVar3
                );
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x260))
                        (*(longlong **)(param_1 + 0x738));
      (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x28))
                (*(longlong **)(param_1 + 0x8d0),L"Analysis Setup",L"MaxNumberOfThreads",uVar3);
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x808) + 0x260))
                        (*(longlong **)(param_1 + 0x808));
      (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x38))
                (*(longlong **)(param_1 + 0x8d0),L"Analysis Setup",L"CurveFilterEnabled",uVar3);
      local_226 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
      *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
      uVar4 = FUN_00b90090(*(undefined8 *)(param_1 + 0x818));
      (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x80))
                (*(longlong **)(param_1 + 0x8d0),L"Analysis Setup",L"CurveFilterTrigger",uVar4);
      *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = local_226;
      uVar3 = FUN_00c5a450(*(undefined8 *)(param_1 + 0x810));
      (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x28))
                (*(longlong **)(param_1 + 0x8d0),L"Analysis Setup",L"CurveFilterMaxSkip",uVar3);
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x840) + 0x260))
                        (*(longlong **)(param_1 + 0x840));
      FUN_007e2f80(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x1318),uVar3);
    }
    else {
      uVar4 = FUN_00b89270();
      FUN_00b8e520(uVar4,&local_288,0x133);
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x7c8),&local_290);
      local_268 = local_290;
      local_260 = 0x11;
      FUN_00442f70(&local_280,local_288,&local_268,0);
      FUN_00416910(local_224,local_280,0xff);
      FUN_004169a0(&local_298,local_224);
      FUN_014f3b80(param_1,local_298);
    }
  }
  else {
    uVar4 = FUN_00b89270();
    FUN_00b8e520(uVar4,&local_258,0x133);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7c8),&local_270);
    local_268 = local_270;
    local_260 = 0x11;
    FUN_00442f70(&local_250,local_258,&local_268,0);
    FUN_00416910(local_224,local_250,0xff);
    FUN_004169a0(&local_278,local_224);
    FUN_014f3b80(param_1,local_278);
  }
  FUN_00414560(&local_2a0,2);
  FUN_00414480(&local_290);
  FUN_00414560(&local_288,3);
  FUN_00414480(&local_270);
  FUN_00414560(&local_258,3);
  FUN_004144d0(&local_240);
  FUN_00414480(&local_238);
  return;
}

