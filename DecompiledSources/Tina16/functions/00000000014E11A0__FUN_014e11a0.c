/* Ghidra address: 014e11a0 */
/* Ghidra symbol: FUN_014e11a0 */


longlong *
FUN_014e11a0(longlong *param_1,short *param_2,undefined8 param_3,longlong param_4,undefined8 param_5
            ,byte *param_6,undefined8 param_7)

{
  undefined2 uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong local_40 [2];
  
  uVar7 = 0;
  iVar2 = FUN_00414f50(param_6,&DAT_014e1768,(ulonglong)*param_6 + 1);
  if (iVar2 == 0) {
    uVar7 = 0x79;
  }
  iVar2 = FUN_00414f50(param_6,&DAT_014e176c,(ulonglong)*param_6 + 1);
  if (iVar2 == 0) {
    uVar7 = 0x7a;
  }
  iVar2 = FUN_00414f50(param_6,&DAT_014e1775,(ulonglong)*param_6 + 1);
  if (iVar2 == 0) {
    uVar7 = 0x7b;
  }
  iVar2 = FUN_00414f50(param_6,&DAT_014e177d,(ulonglong)*param_6 + 1);
  if (iVar2 == 0) {
    uVar7 = 0x7c;
  }
  iVar2 = FUN_00414f50(param_6,&DAT_014e1788,(ulonglong)*param_6 + 1);
  if (iVar2 == 0) {
    uVar7 = 0x2be;
  }
  iVar2 = FUN_00414f50(param_6,&DAT_014e178e,(ulonglong)*param_6 + 1);
  if (iVar2 == 0) {
    uVar7 = 0x2bf;
  }
  iVar2 = FUN_00414f50(param_6,&DAT_014e1797,(ulonglong)*param_6 + 1);
  if (iVar2 == 0) {
    uVar7 = 0x2c0;
  }
  iVar2 = FUN_00414f50(param_6,&DAT_014e179c,(ulonglong)*param_6 + 1);
  if (iVar2 == 0) {
    uVar7 = 0x2c1;
  }
  iVar2 = FUN_00414f50(param_6,&DAT_014e17a4,(ulonglong)*param_6 + 1);
  if (iVar2 == 0) {
    uVar7 = 0x2c2;
  }
  iVar2 = FUN_00414f50(param_6,&DAT_014e17b1,(ulonglong)*param_6 + 1);
  if (iVar2 == 0) {
    uVar7 = 0x2c3;
  }
  iVar2 = FUN_00414f50(param_6,&DAT_014e17be,(ulonglong)*param_6 + 1);
  if (iVar2 == 0) {
    uVar7 = 0x2c4;
  }
  iVar2 = FUN_00414f50(param_6,&DAT_014e17cb,(ulonglong)*param_6 + 1);
  if (iVar2 == 0) {
    uVar7 = 0x2c5;
  }
  iVar2 = FUN_00414f50(param_6,&LAB_014e17d8,(ulonglong)*param_6 + 1);
  if (iVar2 == 0) {
    uVar7 = 0x3e81;
  }
  plVar3 = (longlong *)FUN_014db750(uVar7);
  FUN_017bf050(plVar3,0,param_2);
  *(bool *)((longlong)plVar3 + 0x531) = *param_2 == 0x58;
  iVar2 = *(int *)(param_4 + 0x10);
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar4 = FUN_01d347d0(param_4,iVar6);
      FUN_014dbb80(plVar3,iVar6,uVar4,param_7);
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  uVar1 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
  lVar5 = FUN_00409570(uVar1);
  plVar3[0x18] = lVar5;
  FUN_01d38290(plVar3,1);
  if (uVar7 < 0x2c3) {
    if (uVar7 == 0x2c2) {
      FUN_01d01990(plVar3,*(undefined4 *)(param_4 + 0x10));
      (**(code **)(*plVar3 + 0x2d0))(plVar3,0,local_40);
      FUN_00409a70(PTR_DAT_02002100,*(undefined8 *)(*(longlong *)(local_40[0] + 0x26) + 9),
                   *(undefined2 *)(*(longlong *)(local_40[0] + 0x26) + 0x23));
    }
    else if (uVar7 == 0x2be) {
      (**(code **)(*plVar3 + 0x2d0))(plVar3,0,local_40);
      FUN_00409a70(PTR_DAT_02005508,*(undefined8 *)(*(longlong *)(local_40[0] + 0x26) + 9),
                   *(undefined2 *)(*(longlong *)(local_40[0] + 0x26) + 0x23));
    }
    else if (uVar7 == 0x2bf) {
      (**(code **)(*plVar3 + 0x2d0))(plVar3,0,local_40);
      FUN_00409a70(PTR_DAT_02004848,*(undefined8 *)(*(longlong *)(local_40[0] + 0x26) + 9),
                   *(undefined2 *)(*(longlong *)(local_40[0] + 0x26) + 0x23));
    }
    else if (uVar7 == 0x2c0) {
      (**(code **)(*plVar3 + 0x2d0))(plVar3,0,local_40);
      FUN_00409a70(PTR_DAT_020039d8,*(undefined8 *)(*(longlong *)(local_40[0] + 0x26) + 9),
                   *(undefined2 *)(*(longlong *)(local_40[0] + 0x26) + 0x23));
    }
    else if (uVar7 == 0x2c1) {
      (**(code **)(*plVar3 + 0x2d0))(plVar3,0,local_40);
      FUN_00409a70(PTR_DAT_02002d90,*(undefined8 *)(*(longlong *)(local_40[0] + 0x26) + 9),
                   *(undefined2 *)(*(longlong *)(local_40[0] + 0x26) + 0x23));
    }
  }
  else if (uVar7 == 0x2c3) {
    FUN_01d01990(plVar3,*(undefined4 *)(param_4 + 0x10));
    (**(code **)(*plVar3 + 0x2d0))(plVar3,0,local_40);
    FUN_00409a70(PTR_DAT_02005350,*(undefined8 *)(*(longlong *)(local_40[0] + 0x26) + 9),
                 *(undefined2 *)(*(longlong *)(local_40[0] + 0x26) + 0x23));
  }
  else if (uVar7 == 0x2c4) {
    FUN_01d01990(plVar3,*(undefined4 *)(param_4 + 0x10));
    (**(code **)(*plVar3 + 0x2d0))(plVar3,0,local_40);
    FUN_00409a70(PTR_DAT_02004078,*(undefined8 *)(*(longlong *)(local_40[0] + 0x26) + 9),
                 *(undefined2 *)(*(longlong *)(local_40[0] + 0x26) + 0x23));
  }
  else if (uVar7 == 0x2c5) {
    FUN_01d01990(plVar3,*(undefined4 *)(param_4 + 0x10));
    (**(code **)(*plVar3 + 0x2d0))(plVar3,0,local_40);
    FUN_00409a70(PTR_DAT_02005350,*(undefined8 *)(*(longlong *)(local_40[0] + 0x26) + 9),
                 *(undefined2 *)(*(longlong *)(local_40[0] + 0x26) + 0x23));
  }
  else if (uVar7 == 0x3e81) {
    (**(code **)(*plVar3 + 0x2d0))(plVar3,0,local_40);
    FUN_00409a70(PTR_DAT_020024b8 + 8,*(undefined8 *)(*(longlong *)(local_40[0] + 0x26) + 9),
                 *(undefined2 *)(*(longlong *)(local_40[0] + 0x26) + 0x23));
  }
  FUN_014e0a90(plVar3,param_5);
  (**(code **)(*param_1 + 0x20))(param_1,plVar3);
  return plVar3;
}

