/* Ghidra address: 0138a340 */
/* Ghidra symbol: FUN_0138a340 */


void FUN_0138a340(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 *local_160;
  undefined8 local_158;
  undefined8 local_150 [3];
  undefined1 local_132;
  undefined1 local_131;
  undefined8 local_130;
  undefined1 local_121;
  undefined1 local_120 [264];
  
  local_150[0] = 0;
  local_158 = 0;
  local_160 = (undefined1 *)0x0;
  FUN_00417600(local_120,&DAT_00401390,0x21);
  (**(code **)(*param_1 + 0x2e8))(param_1,L"bmBode");
  *(undefined4 *)((longlong)param_1 + 0x9cc) = 0x18;
  *(undefined1 *)((longlong)param_1 + 0xe44) = 1;
  *(undefined1 *)(param_1 + 0xff) = 1;
  (**(code **)(*param_1 + 0x450))(param_1);
  FUN_010f5a80(param_1,param_2);
  if (*(char *)((longlong)param_1 + 0x7f9) == '\0') {
    lVar7 = FUN_01378e80(&PTR_FUN_01377a50,1,(int)param_1[0xfd],param_1[0xfe],
                         *(undefined1 *)((longlong)param_1 + 0x7fa));
    param_1[0x1d1] = lVar7;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x7f9) != '\x01') goto LAB_0138ae52;
    lVar7 = FUN_01378e80(&PTR_FUN_01376880,1,(int)param_1[0xfd],param_1[0xfe],
                         *(undefined1 *)((longlong)param_1 + 0x7fa));
    param_1[0x1d1] = lVar7;
    uVar8 = FUN_004113f0(lVar7,&PTR_FUN_01376880);
    FUN_01379580(uVar8,&local_121);
  }
  (**(code **)(*(longlong *)param_1[0x1d1] + 0x48))((longlong *)param_1[0x1d1],&local_121);
  if (*(char *)((longlong)param_1 + 0x7fa) == '\x04') {
    FUN_0064de00(param_1,L"Signal Analyzer");
  }
  else if (*(char *)((longlong)param_1 + 0x7fa) == '\x0f') {
    FUN_0064de00(param_1,L"Spectrum Analyzer");
  }
  else {
    FUN_0064de00(param_1,L"Network Analyzer");
  }
  FUN_0064dd90(param_1,&local_158);
  FUN_004169a0(&local_160,param_1[0x1d1] + 0x23);
  FUN_00416cd0(local_150,3,local_158,&DAT_0138af98,local_160);
  FUN_0064de00(param_1,local_150[0]);
  *(undefined1 *)(param_1 + 0x1c9) = 1;
  *(undefined1 *)(param_1 + 0x1d2) = 0;
  (**(code **)(*(longlong *)param_1[0x1d1] + 0xa0))
            ((longlong *)param_1[0x1d1],(longlong)param_1 + 0xe91,1);
  if (*(char *)((longlong)param_1 + 0xe91) == '\x02') {
    FUN_0064de00(param_1[0x1c3],0);
    FUN_0064de00(param_1[0x1c2],PTR_u_Source_01f38da0);
  }
  else {
    FUN_0064de00(param_1[0x1c3],(&PTR_DAT_01f38d90)[*(char *)((longlong)param_1 + 0xe91)]);
    uVar8 = (**(code **)(*(longlong *)param_1[0x1d1] + 0xa0))
                      ((longlong *)param_1[0x1d1],(longlong)param_1 + 0xe91,0);
    FUN_00b90440(param_1[0x1c2],uVar8);
  }
  FUN_0064de00(param_1[0x1a9],(&PTR_DAT_01f38d80)[(char)param_1[0x1d2]]);
  *(undefined1 *)((longlong)param_1 + 0xe49) = 1;
  uVar8 = (**(code **)(*(longlong *)param_1[0x1d1] + 0x140))((longlong *)param_1[0x1d1]);
  (**(code **)(*(longlong *)param_1[0x17e] + 0x2f0))((longlong *)param_1[0x17e],uVar8);
  uVar4 = (**(code **)(*(longlong *)param_1[0x1d1] + 0x148))((longlong *)param_1[0x1d1]);
  (**(code **)(*(longlong *)param_1[0x17e] + 0x268))((longlong *)param_1[0x17e],uVar4);
  uVar8 = (**(code **)(*(longlong *)param_1[0x1d1] + 0x158))((longlong *)param_1[0x1d1]);
  (**(code **)(*(longlong *)param_1[0x1c5] + 0x2f0))((longlong *)param_1[0x1c5],uVar8);
  uVar4 = (**(code **)(*(longlong *)param_1[0x1d1] + 0x160))((longlong *)param_1[0x1d1]);
  (**(code **)(*(longlong *)param_1[0x1c5] + 0x268))((longlong *)param_1[0x1c5],uVar4);
  (**(code **)(**(longlong **)(param_1[0x174] + 0x4f0) + 0x90))
            (*(longlong **)(param_1[0x174] + 0x4f0));
  FUN_01387140(param_1);
  plVar2 = (longlong *)param_1[0x174];
  uVar4 = (**(code **)(*(longlong *)plVar2[0x9e] + 0xc0))((longlong *)plVar2[0x9e],param_1[0x1cf]);
  (**(code **)(*plVar2 + 0x268))(plVar2,uVar4);
  FUN_00b90440(param_1[0x18a],*(undefined8 *)(param_1[0x1cf] + 0x40));
  FUN_00b90440(param_1[0x189],*(undefined8 *)(param_1[0x1cf] + 0x48));
  plVar2 = (longlong *)param_1[0x18e];
  FUN_0064de00(plVar2,*(undefined8 *)(param_1[0x1cf] + 8));
  FUN_0082a6c0(plVar2,0);
  (**(code **)(*plVar2 + 0x128))(plVar2,1);
  (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x90))
            (*(longlong **)(param_1[0xfb] + 0x4f0));
  uVar8 = (*(code *)**(undefined8 **)param_1[0x1d1])((undefined8 *)param_1[0x1d1]);
  (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x10))
            (*(longlong **)(param_1[0xfb] + 0x4f0),uVar8);
  uVar3 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x28))
                    (*(longlong **)(param_1[0xfb] + 0x4f0));
  *(undefined1 *)((longlong)param_1 + 0xe81) = uVar3;
  lVar7 = FUN_01106eb0(&PTR_FUN_011051a8,1);
  param_1[0x10d] = lVar7;
  *(longlong *)(param_1[0x10d] + 0x98) = param_1[0x110];
  (**(code **)(*(longlong *)param_1[0x1d1] + 0x78))
            ((longlong *)param_1[0x1d1],(longlong)param_1 + 0xe42);
  *(undefined1 *)((longlong)param_1 + 0xe47) = 1;
  uVar8 = (**(code **)(*(longlong *)param_1[0x1d1] + 0xb0))((longlong *)param_1[0x1d1]);
  (**(code **)(*(longlong *)param_1[0x1b1] + 0x2f0))((longlong *)param_1[0x1b1],uVar8);
  uVar4 = (**(code **)(*(longlong *)param_1[0x1d1] + 0xb8))((longlong *)param_1[0x1d1]);
  (**(code **)(*(longlong *)param_1[0x1b1] + 0x268))((longlong *)param_1[0x1b1],uVar4);
  (**(code **)(*(longlong *)param_1[0x1d1] + 0xe0))((longlong *)param_1[0x1d1],0);
  (**(code **)(*(longlong *)param_1[0x1d1] + 0x110))
            ((longlong *)param_1[0x1d1],param_1 + 0x1ca,param_1 + 0x1cb);
  (**(code **)(*(longlong *)param_1[0x1d1] + 0x128))
            ((longlong *)param_1[0x1d1],param_1 + 0x1ce,(longlong)param_1 + 0xe74);
  if (*(longlong *)(param_1[0x118] + 0x408) != 0) {
    if ((*(char *)((longlong)param_1 + 0x7fa) == '\x04') ||
       (*(char *)((longlong)param_1 + 0x7fa) == '\x0f')) {
      FUN_0153b3a0(param_1 + 0x1ca,param_1 + 0x1cb,param_1 + 0x1ce,(longlong)param_1 + 0xe74,0);
    }
    else {
      FUN_0153b4d0(param_1 + 0x1ca,param_1 + 0x1cb,param_1 + 0x1ce,(longlong)param_1 + 0xe74,
                   &local_131);
    }
  }
  (**(code **)(*(longlong *)param_1[0x1d1] + 0x108))
            ((longlong *)param_1[0x1d1],param_1 + 0x1ca,param_1 + 0x1cb);
  (**(code **)(*(longlong *)param_1[0x1d1] + 0x118))
            ((longlong *)param_1[0x1d1],param_1[0x1ca],param_1[0x1cb]);
  *(undefined1 *)((longlong)param_1 + 0xe4a) = 1;
  FUN_00b90440(param_1[0x185],param_1[0x1ca]);
  FUN_00b90440(param_1[0x186],param_1[0x1cb]);
  param_1[0x1cc] = (longlong)(((double)param_1[0x1ca] + (double)param_1[0x1cb]) / 2.0);
  param_1[0x1cd] = (longlong)((double)param_1[0x1cb] - (double)param_1[0x1ca]);
  *(undefined1 *)((longlong)param_1 + 0xe74) = 0;
  (**(code **)(*(longlong *)param_1[0x1d1] + 0x130))
            ((longlong *)param_1[0x1d1],param_1 + 0x1ce,(longlong)param_1 + 0xe74,1);
  (**(code **)(*(longlong *)param_1[0x1d1] + 0x120))
            ((longlong *)param_1[0x1d1],(int)param_1[0x1ce],
             *(undefined1 *)((longlong)param_1 + 0xe74));
  FUN_00f04fa0(param_1[0x187],(int)param_1[0x1ce]);
  FUN_0064dbe0(param_1[0x187],1);
  FUN_010e2390(param_1,param_1);
  uVar4 = (**(code **)(*(longlong *)param_1[0xfb] + 0x260))((longlong *)param_1[0xfb]);
  (**(code **)(*(longlong *)param_1[0x1d1] + 0x58))((longlong *)param_1[0x1d1],uVar4);
  (**(code **)(*(longlong *)param_1[0x1d1] + 0x88))
            ((longlong *)param_1[0x1d1],*(undefined1 *)(param_1[0x10e] + 0x2a));
  (**(code **)(*(longlong *)param_1[0x1d1] + 0x80))
            ((longlong *)param_1[0x1d1],param_1[0x10e] + 0x2a,&local_130,(char)param_1[0x1d2],1);
  FUN_00b90440(param_1[0x197],local_130);
  (**(code **)(*(longlong *)param_1[0x1d1] + 0x138))((longlong *)param_1[0x1d1],1);
  (**(code **)(*(longlong *)param_1[0x1d1] + 0xa8))((longlong *)param_1[0x1d1],0);
  lVar7 = param_1[0x136];
  iVar5 = (**(code **)(*(longlong *)param_1[0x1d1] + 0x148))((longlong *)param_1[0x1d1]);
  if (-1 < iVar5) {
    iVar6 = (**(code **)(**(longlong **)(param_1[0x1d1] + 0x118) + 0x28))
                      (*(longlong **)(param_1[0x1d1] + 0x118));
    if (iVar5 < iVar6) {
      uVar8 = (**(code **)(**(longlong **)(param_1[0x1d1] + 0x118) + 0x30))
                        (*(longlong **)(param_1[0x1d1] + 0x118),iVar5);
      *(undefined8 *)(lVar7 + 0x110) = uVar8;
    }
  }
  if (*(char *)((longlong)param_1 + 0x7fa) == '\b') {
    iVar5 = (**(code **)(*(longlong *)param_1[0x1d1] + 0x148))((longlong *)param_1[0x1d1]);
    if (iVar5 != 0) {
      iVar5 = (**(code **)(*(longlong *)param_1[0x1d1] + 0x148))((longlong *)param_1[0x1d1]);
      if (iVar5 != 1) goto LAB_0138ad56;
    }
    FUN_00415020(*(longlong *)(lVar7 + 0x110) + 8,param_1[0x1cf] + 0x11,0x28);
  }
LAB_0138ad56:
  cVar1 = *(char *)(*(longlong *)(lVar7 + 0x110) + 0x31);
  if ((cVar1 == '\x04') || (cVar1 == '\x05')) {
    local_132 = 1;
    uVar8 = (**(code **)(*(longlong *)param_1[0x1d1] + 0xa0))
                      ((longlong *)param_1[0x1d1],&local_132,0);
    *(undefined8 *)(lVar7 + 0x118) = uVar8;
    *(undefined1 *)(lVar7 + 0x120) = 1;
  }
  else {
    local_132 = 0;
    uVar8 = (**(code **)(*(longlong *)param_1[0x1d1] + 0xa0))
                      ((longlong *)param_1[0x1d1],&local_132,0);
    *(undefined8 *)(lVar7 + 0x118) = uVar8;
    *(undefined1 *)(lVar7 + 0x120) = 0;
  }
  FUN_01389820(param_1);
  (**(code **)(*(longlong *)param_1[0x136] + 0x18))((longlong *)param_1[0x136],(char)param_1[0x132])
  ;
  FUN_01389900(param_1);
  if (*(char *)((longlong)param_1 + 0x7fa) == '\b') {
    FUN_0064cf60(param_1,0x1d4d);
  }
  else {
    FUN_0064cf60(param_1,0x9c5);
  }
  FUN_0064de00(param_1[0x12a],0);
  FUN_0064cbf0(param_1[0x12a],0);
LAB_0138ae52:
  FUN_00414480(&local_160);
  FUN_00414560(&local_158,2);
  FUN_00417840(local_120,&DAT_00401390,0x21);
  return;
}

