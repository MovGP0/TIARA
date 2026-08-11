/* Ghidra address: 01a61410 */
/* Ghidra symbol: FUN_01a61410 */


void FUN_01a61410(longlong param_1,undefined8 param_2,ushort param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined4 local_3c;
  undefined8 local_38;
  short local_2c;
  short local_2a;
  undefined8 local_28;
  undefined4 local_1c;
  
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_60 = 0;
  local_38 = 0;
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    if (0x30 < param_3) {
      FUN_01d30f00(param_2,&local_2a,2);
      *(int *)(param_1 + 0x40) = (int)local_2a;
    }
    FUN_01d30f00(param_2,param_1 + 0x80,1);
    FUN_01d30f00(param_2,&local_3c,4);
    uVar2 = FUN_00b95af0(local_3c);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    FUN_01d30f00(param_2,param_1 + 0x50,8);
    FUN_01d30f00(param_2,param_1 + 0x58,8);
    if (0x10 < param_3) {
      FUN_01d30f00(param_2,param_1 + 0x60,8);
      FUN_01d30f00(param_2,param_1 + 0x68,8);
      FUN_01d30f00(param_2,&local_2a,2);
      *(short *)(param_1 + 0x70) = local_2a;
    }
    FUN_01d30f00(param_2,&local_2c,2);
    if (*(char *)(param_1 + 0x80) == '\0') {
      lVar3 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),(longlong)local_2c);
      *(longlong *)(param_1 + 0x88) = lVar3;
      if (lVar3 == 0) {
        *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    FUN_01d31c60(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x80));
    if (param_3 < 0x50) {
      FUN_01d32040(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0xa0));
    }
    else {
      FUN_01d32430(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0xa0));
    }
    if (param_3 < 0x51) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0xa0);
      iVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
      if (0 < iVar1) {
        FUN_0043e130(local_50,L"\\d(#Interpreter)");
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0xa0);
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_60,0);
        FUN_0043e130(&local_58,local_60);
        iVar1 = FUN_004170c0(local_50[0],local_58,1);
        if (0 < iVar1) {
          *(undefined1 *)(param_1 + 0x98) = 1;
          plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0xa0);
          (**(code **)(*plVar4 + 0x98))(plVar4,0);
        }
        FUN_0043e130(&local_68,L"\\d(#globalparams)");
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0xa0);
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_78,0);
        FUN_0043e130(&local_70,local_78);
        iVar1 = FUN_004170c0(local_68,local_70,1);
        if (0 < iVar1) {
          *(undefined1 *)(param_1 + 0x98) = 2;
          plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0xa0);
          (**(code **)(*plVar4 + 0x98))(plVar4,0);
        }
      }
    }
    uVar2 = FUN_01a61070(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0xa0));
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0xa0);
    (**(code **)(*plVar4 + 0x10))(plVar4,uVar2);
    FUN_00410f20(uVar2);
    if (0x50 < param_3) {
      FUN_01d30f00(param_2,param_1 + 0x98,1);
    }
    *(bool *)(*(longlong *)(param_1 + 0x90) + 0xb9) = *(char *)(param_1 + 0x98) == '\x03';
    FUN_01d312f0(param_2,&local_38);
    FUN_00414ad0(*(longlong *)(param_1 + 0x90) + 0x90,local_38);
    FUN_01d31720(param_2,&local_1c);
    *(undefined1 *)(param_1 + 0x99) = (undefined1)local_1c;
    if (0x10 < param_3) {
      FUN_01d31720(param_2,&local_1c);
    }
    *(undefined4 *)(param_1 + 0x9c) = local_1c;
    FUN_01d31720(param_2,&local_1c);
    *(undefined1 *)(param_1 + 0xa0) = (undefined1)local_1c;
    FUN_01d31720(param_2,&local_1c);
    *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x98) = (undefined1)local_1c;
    FUN_01d30f00(param_2,&local_28,8);
    FUN_01d12290(*(undefined8 *)(param_1 + 0x90),local_28);
    FUN_01d30f00(param_2,&local_28,8);
    FUN_01d122b0(*(undefined8 *)(param_1 + 0x90),local_28);
    FUN_01d30f00(param_2,&local_28,8);
    FUN_01d122d0(*(undefined8 *)(param_1 + 0x90),local_28);
    FUN_01d30f00(param_2,&local_28,8);
    FUN_01d122f0(*(undefined8 *)(param_1 + 0x90),local_28);
    FUN_01d30f00(param_2,&local_28,8);
    FUN_01d12310(*(undefined8 *)(param_1 + 0x90),local_28);
    FUN_01d30f00(param_2,&local_28,8);
    FUN_01d12330(*(undefined8 *)(param_1 + 0x90),local_28);
    FUN_01d30f00(param_2,&local_2a,2);
    FUN_01d12350(*(undefined8 *)(param_1 + 0x90),(longlong)local_2a);
    if (0x20 < param_3) {
      FUN_01d31720(param_2,&local_1c);
      *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0xbc) = local_1c;
      FUN_01d31720(param_2,&local_1c);
      *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0xc0) = local_1c;
    }
    FUN_01d30f00(param_2,&local_2c,2);
    if (*(char *)(param_1 + 0x80) == '\0') {
      plVar4 = (longlong *)FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),(longlong)local_2c);
      *(longlong **)(param_1 + 0xa8) = plVar4;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x100))(plVar4,param_1);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    FUN_01d30f00(param_2,param_1 + 0xb0,8);
    FUN_01d30f00(param_2,param_1 + 0xb8,8);
    if (0x6f < param_3) {
      FUN_01d316c0(param_2,param_1 + 0x78);
    }
    if (*(char *)(param_1 + 0x80) == '\0') {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0xe0);
      (**(code **)(*plVar4 + 0x80))(plVar4,L"Text",param_1);
    }
  }
  FUN_00414560(&local_78,6);
  FUN_00414480(&local_38);
  return;
}

