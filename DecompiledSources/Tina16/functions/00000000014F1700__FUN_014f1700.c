/* Ghidra address: 014f1700 */
/* Ghidra symbol: FUN_014f1700 */


void FUN_014f1700(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  FUN_00416cd0(&local_20,3,*(undefined8 *)PTR_DAT_02005010,&DAT_014f2438,L"TINA.INI");
  uVar8 = FUN_005da0f0(&PTR_FUN_005d5a90,1,local_20);
  *(undefined8 *)(param_1 + 0x8d0) = uVar8;
  FUN_0074b490(*(undefined8 *)(param_1 + 0x828),*(undefined1 *)(param_1 + 0x98c));
  FUN_00c5a4c0(*(undefined8 *)(param_1 + 0x838),*PTR_DAT_02005310);
  FUN_0064cf60(param_1,0x461);
  (**(code **)(**(longlong **)(param_1 + 2000) + 0x268))
            (*(longlong **)(param_1 + 2000),*(undefined1 *)(param_1 + 0x11b5));
  (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x268))
            (*(longlong **)(param_1 + 0x7d8),*(undefined4 *)(param_1 + 0x11b6));
  (**(code **)(**(longlong **)(param_1 + 0x7e8) + 0x268))
            (*(longlong **)(param_1 + 0x7e8),*(undefined1 *)(param_1 + 0x11c2));
  *(undefined1 *)(param_1 + 0x8c8) = 0;
  *(undefined1 *)(param_1 + 0x8ca) = 0;
  FUN_014f1410(&local_28,*(undefined8 *)(param_1 + 0x11ba));
  FUN_00416ad0(&local_28,&DAT_014f2468);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7e0),local_28);
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x7e8) + 0x260))(*(longlong **)(param_1 + 0x7e8));
  (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x128))(*(longlong **)(param_1 + 0x7e0),uVar5);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6e0),0,0,L"ERC Matrix");
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6e0),0,1,L"In (I)");
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6e0),0,2,L"Out (O)");
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6e0),0,3,L"Bidirectional (BIDI)");
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6e0),0,4,L"Power (PWR)");
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6e0),0,5,L"Passive (PAS)");
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6e0),0,6,L"3-State (3S)");
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6e0),0,7,L"Open Collector (OC)");
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6e0),0,8,L"Open Emitter (OE)");
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6e0),0,9,L"Unconnected (uc)");
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6e0),1,0,&DAT_014f2614);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6e0),2,0,&DAT_014f2624);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6e0),3,0,L"BIDI");
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6e0),4,0,&DAT_014f264c);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6e0),5,0,&DAT_014f2660);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6e0),6,0,&PTR_DAT_014f2674);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6e0),7,0,&PTR_DAT_014f2688);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6e0),8,0,&PTR_DAT_014f269c);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6e0),9,0,&DAT_014f26b0);
  FUN_014f3fc0(param_1,PTR_DAT_02003e38);
  (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))
            (*(longlong **)(param_1 + 0x6f0),*PTR_DAT_020024c0);
  (**(code **)(**(longlong **)(param_1 + 0x700) + 0x268))
            (*(longlong **)(param_1 + 0x700),*PTR_DAT_02004638);
  (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x268))
            (*(longlong **)(param_1 + 0x6f8),*PTR_DAT_020044c8);
  (**(code **)(**(longlong **)(param_1 + 0x850) + 0x268))
            (*(longlong **)(param_1 + 0x850),*PTR_DAT_020017c0);
  (**(code **)(**(longlong **)(param_1 + 0x860) + 0x268))
            (*(longlong **)(param_1 + 0x860),*PTR_DAT_02001088);
  (**(code **)(**(longlong **)(param_1 + 0x870) + 0x268))
            (*(longlong **)(param_1 + 0x870),*(undefined1 *)(param_1 + 0x119f));
  (**(code **)(**(longlong **)(param_1 + 0x878) + 0x268))
            (*(longlong **)(param_1 + 0x878),*(undefined1 *)(param_1 + 0x11a0));
  (**(code **)(**(longlong **)(param_1 + 0x848) + 0x268))
            (*(longlong **)(param_1 + 0x848),*PTR_DAT_02005258);
  (**(code **)(**(longlong **)(param_1 + 0x880) + 0x268))
            (*(longlong **)(param_1 + 0x880),*PTR_DAT_02003da8);
  cVar3 = FUN_01b23030();
  if (cVar3 != '\0') {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x870),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x878),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x880),0);
  }
  FUN_0074b490(*(undefined8 *)(param_1 + 0x718),*(byte *)(param_1 + 0xc36) - 1);
  FUN_014f4320(param_1,param_2);
  (**(code **)(**(longlong **)(param_1 + 0x720) + 0x268))
            (*(longlong **)(param_1 + 0x720),*(byte *)(param_1 + 0xc37) - 1);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x768) + 0x4f0);
  iVar6 = (**(code **)(*plVar2 + 0x28))(plVar2);
  (**(code **)(*plVar2 + 0x98))(plVar2,iVar6 + -1);
  cVar3 = FUN_01b23030();
  if (cVar3 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x768) + 0x268))
              (*(longlong **)(param_1 + 0x768),*(undefined1 *)(param_1 + 0x1286));
    (**(code **)(**(longlong **)(param_1 + 0x8b0) + 0x268))
              (*(longlong **)(param_1 + 0x8b0),*(byte *)(param_1 + 0x1287) - 1);
    FUN_014f41c0(param_1,param_2);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x768) + 0x128))(*(longlong **)(param_1 + 0x768),0);
    (**(code **)(**(longlong **)(param_1 + 0x8b0) + 0x128))(*(longlong **)(param_1 + 0x8b0),0);
    (**(code **)(**(longlong **)(param_1 + 0x768) + 0x268))(*(longlong **)(param_1 + 0x768),0);
  }
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x748) + 0x4f0);
  iVar6 = (**(code **)(*plVar2 + 0x28))(plVar2);
  (**(code **)(*plVar2 + 0x98))(plVar2,iVar6 + -2);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x748) + 0x4f0);
  iVar6 = (**(code **)(*plVar2 + 0x28))(plVar2);
  (**(code **)(*plVar2 + 0x98))(plVar2,iVar6 + -1);
  (**(code **)(**(longlong **)(param_1 + 0x748) + 0x268))
            (*(longlong **)(param_1 + 0x748),*(byte *)(param_1 + 0xc32) - 1);
  (**(code **)(**(longlong **)(param_1 + 0x898) + 0x268))
            (*(longlong **)(param_1 + 0x898),*(undefined1 *)(param_1 + 0x1289));
  (**(code **)(**(longlong **)(param_1 + 0x8a0) + 0x268))
            (*(longlong **)(param_1 + 0x8a0),*(undefined1 *)(param_1 + 0x128a));
  (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x268))
            (*(longlong **)(param_1 + 0x8c0),*(undefined1 *)(param_1 + 0x129b));
  (**(code **)(**(longlong **)(param_1 + 0x790) + 0x268))
            (*(longlong **)(param_1 + 0x790),*PTR_DAT_020030c0);
  (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))
            (*(longlong **)(param_1 + 0x798),PTR_DAT_020030c0[2]);
  (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x268))
            (*(longlong **)(param_1 + 0x7a0),PTR_DAT_020030c0[0x5d]);
  uVar5 = FUN_015fc1d0(param_1 + 0x1231);
  (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x268))(*(longlong **)(param_1 + 0x7a8),uVar5);
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x260))(*(longlong **)(param_1 + 0x7a8));
  *(undefined1 *)(param_1 + 0x8c9) = uVar4;
  FUN_00e05e10();
  FUN_00e06190();
  FUN_013b8260(param_1 + 0x988,PTR_DAT_020030c0 + 0x70);
  FUN_00417c40(param_1 + 0x948,PTR_DAT_020030c0 + 0x70,&DAT_00e044a8);
  *(undefined4 *)(param_1 + 0x967) = *(undefined4 *)(param_1 + 0x1238);
  *(undefined4 *)(param_1 + 0x8e0) = *(undefined4 *)(PTR_DAT_020030c0 + 8);
  *(undefined *)(param_1 + 0x960) = PTR_DAT_020030c0[5];
  *(undefined *)(param_1 + 0x8e4) = PTR_DAT_020030c0[0xc];
  *(undefined *)(param_1 + 0x8e5) = PTR_DAT_020030c0[0xd];
  *(undefined4 *)(param_1 + 0x910) = *(undefined4 *)(PTR_DAT_020030c0 + 0x38);
  *(undefined *)(param_1 + 0x8e6) = PTR_DAT_020030c0[0xe];
  FUN_00414ad0(param_1 + 0x920,*(undefined8 *)(PTR_DAT_020030c0 + 0x48));
  FUN_00414ad0(param_1 + 0x928,*(undefined8 *)(PTR_DAT_020030c0 + 0x50));
  *(undefined4 *)(param_1 + 0x930) = *(undefined4 *)(PTR_DAT_020035e0 + 0xc);
  *(undefined *)(param_1 + 0x934) = PTR_DAT_020035e0[0x10];
  *(undefined4 *)(param_1 + 0x938) = *(undefined4 *)(PTR_DAT_020035e0 + 0x14);
  *(undefined4 *)(param_1 + 0x93c) = *(undefined4 *)(PTR_DAT_020035e0 + 0x18);
  *(undefined4 *)(param_1 + 0x940) = *(undefined4 *)(PTR_DAT_020030c0 + 0x68);
  *(undefined4 *)(param_1 + 0x944) = *(undefined4 *)(PTR_DAT_020035e0 + 0x1c);
  uVar4 = FUN_015fc230(param_1 + 0x1231);
  *(undefined1 *)(param_1 + 0x937) = uVar4;
  *(undefined4 *)(param_1 + 0x904) = *(undefined4 *)(PTR_DAT_020030c0 + 0x2c);
  *(undefined4 *)(param_1 + 0x908) = *(undefined4 *)(PTR_DAT_020030c0 + 0x30);
  *(undefined4 *)(param_1 + 0x90c) = *(undefined4 *)(PTR_DAT_020030c0 + 0x34);
  *(undefined *)(param_1 + 0x936) = PTR_DAT_020030c0[0x5e];
  lVar9 = FUN_019a4600();
  FUN_00414ad0(param_1 + 0x978,*(undefined8 *)(*(longlong *)(lVar9 + 0x200) + 0x10));
  lVar9 = FUN_019a4600();
  FUN_00414ad0(param_1 + 0x980,*(undefined8 *)(*(longlong *)(lVar9 + 0x200) + 0x20));
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x30))
                    (*(longlong **)(param_1 + 0x8d0),L"Diagram Page Setup",L"ManualScale");
  (**(code **)(**(longlong **)(param_1 + 0x868) + 0x268))(*(longlong **)(param_1 + 0x868),uVar5);
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x30))
                    (*(longlong **)(param_1 + 0x8d0),L"Diagram Page Setup",L"GridViewDesign",0);
  (**(code **)(**(longlong **)(param_1 + 0x858) + 0x268))(*(longlong **)(param_1 + 0x858),uVar5);
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x30))
                    (*(longlong **)(param_1 + 0x8d0),L"Analysis Setup",L"EnableStatistics",0);
  (**(code **)(**(longlong **)(param_1 + 0x840) + 0x268))(*(longlong **)(param_1 + 0x840),uVar5);
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x30))
                    (*(longlong **)(param_1 + 0x8d0),L"Analysis Setup",L"ModelCompilationEnabled",1)
  ;
  (**(code **)(**(longlong **)(param_1 + 0x758) + 0x268))(*(longlong **)(param_1 + 0x758),uVar5);
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x30))
                    (*(longlong **)(param_1 + 0x8d0),L"Analysis Setup",L"MatrixCompilationEnabled",1
                    );
  (**(code **)(**(longlong **)(param_1 + 0x740) + 0x268))(*(longlong **)(param_1 + 0x740),uVar5);
  FUN_014f4440(param_1,param_2);
  uVar7 = FUN_01b11110();
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x20))
                    (*(longlong **)(param_1 + 0x8d0),L"Analysis Setup",L"MaxNumberOfThreads",
                     (uVar7 & 0xff) - 1);
  (**(code **)(**(longlong **)(param_1 + 0x738) + 0x268))(*(longlong **)(param_1 + 0x738),uVar5);
  FUN_014f4200(param_1,param_2);
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x30))
                    (*(longlong **)(param_1 + 0x8d0),L"Analysis Setup",L"CurveFilterEnabled",0);
  (**(code **)(**(longlong **)(param_1 + 0x808) + 0x268))(*(longlong **)(param_1 + 0x808),uVar5);
  uVar1 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  uVar8 = (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x58))
                    (*(longlong **)(param_1 + 0x8d0),L"Analysis Setup",L"CurveFilterTrigger",
                     0x3f50624dd2f1a9fc);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x818),uVar8);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = uVar1;
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x20))
                    (*(longlong **)(param_1 + 0x8d0),L"Analysis Setup",L"CurveFilterMaxSkip",100);
  FUN_00c5a4c0(*(undefined8 *)(param_1 + 0x810),uVar5);
  FUN_00414560(&local_28,2);
  return;
}

