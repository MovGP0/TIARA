/* Ghidra address: 00a71ed0 */
/* Ghidra symbol: FUN_00a71ed0 */


void FUN_00a71ed0(longlong *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 char param_6,char param_7,char param_8,undefined4 param_9,byte param_10)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 local_48 [24];
  
  if (param_7 != '\0') {
    uVar10 = FUN_005ffa40(param_1);
    iVar7 = thunk_FUN_03e5bd07(uVar10,0xc);
    if (iVar7 == 1) {
      uVar10 = FUN_005ffa40(param_1);
      iVar7 = thunk_FUN_03e5bd07(uVar10,0xe);
      if (iVar7 == 1) {
        bVar4 = true;
        goto LAB_00a71f35;
      }
    }
  }
  bVar4 = false;
LAB_00a71f35:
  param_4 = param_4 + -1;
  param_5 = param_5 + -1;
  uVar2 = *(undefined4 *)(*(longlong *)(param_1[0xf] + 0x18) + 0x2c);
  uVar5 = FUN_005fd660();
  lVar3 = param_1[0x10];
  uVar1 = *(undefined1 *)(*(longlong *)(lVar3 + 0x18) + 0x38);
  uVar9 = *(undefined4 *)(*(longlong *)(lVar3 + 0x18) + 0x28);
  if (bVar4) {
    FUN_005fdab0(lVar3,0);
  }
  else if (param_8 == '\0') {
    if (((param_10 & 2) != 0) && (cVar6 = FUN_00781870(), cVar6 != '\0')) {
      uVar10 = FUN_00781840();
      param_9 = FUN_007793c0(uVar10,param_9);
    }
    uVar8 = FUN_005fbf20(param_9);
    FUN_005fdab0(param_1[0x10],uVar8);
  }
  else {
    if (((param_10 & 2) == 0) || (cVar6 = FUN_00781870(), cVar6 == '\0')) {
      uVar8 = 0xff00000f;
    }
    else {
      uVar10 = FUN_00781840();
      uVar8 = FUN_007793c0(uVar10,0xff00000f);
    }
    uVar8 = FUN_005fbf20(uVar8);
    FUN_005fdab0(param_1[0x10],uVar8);
  }
  FUN_005fdcb0(param_1[0x10],0);
  FUN_004238d0(local_48,param_2,param_3,param_4,param_5);
  (**(code **)(*param_1 + 0xa8))(param_1,local_48);
  FUN_005fdab0(param_1[0x10],uVar9);
  FUN_005fdcb0(param_1[0x10],uVar1);
  FUN_005fd670(param_1[0xf],6);
  if (bVar4) {
    FUN_005fd6d0(param_1[0xf],1);
    FUN_005fd4e0(param_1[0xf],0);
  }
  else {
    FUN_005fd6d0(param_1[0xf],2);
    if (param_6 == '\0') {
      if (((param_10 & 2) == 0) || (cVar6 = FUN_00781870(), cVar6 == '\0')) {
        uVar9 = 0xff000010;
      }
      else {
        uVar10 = FUN_00781840();
        uVar9 = FUN_007793c0(uVar10,0xff000010);
      }
      uVar9 = FUN_005fbf20(uVar9);
      FUN_005fd4e0(param_1[0xf],uVar9);
    }
    else {
      if (((param_10 & 2) == 0) || (cVar6 = FUN_00781870(), cVar6 == '\0')) {
        uVar9 = 0xff000014;
      }
      else {
        uVar10 = FUN_00781840();
        uVar9 = FUN_007793c0(uVar10,0xff000014);
      }
      uVar9 = FUN_005fbf20(uVar9);
      FUN_005fd4e0(param_1[0xf],uVar9);
    }
  }
  (**(code **)(*param_1 + 200))(param_1,param_2,param_5);
  (**(code **)(*param_1 + 0xc0))(param_1,param_2,param_3);
  (**(code **)(*param_1 + 0xc0))(param_1,param_4,param_3);
  if (bVar4) {
    FUN_005fd4e0(param_1[0xf],0xc0c0c0);
  }
  else if (param_6 == '\0') {
    if (((param_10 & 2) == 0) || (cVar6 = FUN_00781870(), cVar6 == '\0')) {
      uVar9 = 0xff000014;
    }
    else {
      uVar10 = FUN_00781840();
      uVar9 = FUN_007793c0(uVar10,0xff000014);
    }
    uVar9 = FUN_005fbf20(uVar9);
    FUN_005fd4e0(param_1[0xf],uVar9);
  }
  else {
    if (((param_10 & 2) == 0) || (cVar6 = FUN_00781870(), cVar6 == '\0')) {
      uVar9 = 0xff000010;
    }
    else {
      uVar10 = FUN_00781840();
      uVar9 = FUN_007793c0(uVar10,0xff000010);
    }
    uVar9 = FUN_005fbf20(uVar9);
    FUN_005fd4e0(param_1[0xf],uVar9);
  }
  (**(code **)(*param_1 + 0xc0))(param_1,param_4,param_5);
  (**(code **)(*param_1 + 0xc0))(param_1,param_2,param_5);
  FUN_005fd670(param_1[0xf],uVar5);
  FUN_005fd6d0(param_1[0xf],uVar2);
  return;
}

