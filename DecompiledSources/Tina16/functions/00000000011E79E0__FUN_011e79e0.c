/* Ghidra address: 011e79e0 */
/* Ghidra symbol: FUN_011e79e0 */


void FUN_011e79e0(undefined8 param_1,longlong *param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = (param_3 + param_5) / 2;
  iVar2 = (param_4 + param_6) / 2;
  uVar3 = FUN_005fd4d0(param_2[0xf],(longlong)(param_4 + param_6) % 2 & 0xffffffff);
  if (*PTR_DAT_02002480 == '\0') {
    iVar7 = iVar1 + -7;
    iVar4 = iVar1 + -10;
    iVar5 = iVar2 + 10;
    iVar6 = iVar2 + -10;
    (**(code **)(*param_2 + 0x60))
              (param_2,iVar1 + -0x39,iVar2 + -0x19,iVar7,iVar2 + 0x19,iVar4,iVar5,iVar4,iVar6);
    (**(code **)(*param_2 + 0x60))
              (param_2,iVar1 + -0x23,iVar2 + -0x28,iVar1 + 0xf,iVar5,iVar4,iVar5,iVar1 + 10,iVar2);
    (**(code **)(*param_2 + 0x60))
              (param_2,iVar1 + -0x23,iVar6,iVar1 + 0xf,iVar2 + 0x28,iVar1 + 10,iVar2,iVar4,iVar6);
    if (0x14 < param_6 - param_4) {
      (**(code **)(*param_2 + 0x60))
                (param_2,iVar1 + -0x25,iVar2 + -0x1f,iVar7,iVar2 + -1,iVar4,iVar6,iVar4,
                 iVar2 + -0x16);
      (**(code **)(*param_2 + 0x60))
                (param_2,iVar1 + -0x25,iVar2 + 1,iVar7,iVar2 + 0x1f,iVar4,iVar2 + 0x16,iVar4,iVar5);
    }
  }
  else {
    DAT_02107690 = param_5;
    DAT_02107694 = param_6;
    DAT_02107688 = param_3;
    DAT_0210768c = param_4;
    FUN_005fdf50(param_2,&DAT_02107688);
    (**(code **)(*param_2 + 0x120))
              (param_2,param_3 + 0xb,iVar2 + *(int *)PTR_DAT_020012c0 + 5,&LAB_011e7d60);
    FUN_005fd4e0(param_2[0xf],0);
    (**(code **)(*param_2 + 200))(param_2,param_3 + 3,iVar2 + -5);
    (**(code **)(*param_2 + 0xc0))(param_2,param_3 + 8,iVar2 + -3);
    (**(code **)(*param_2 + 0xc0))(param_2,param_3 + 2,iVar2 + -1);
    (**(code **)(*param_2 + 200))(param_2,param_3 + 3,iVar2 + 2);
    (**(code **)(*param_2 + 0xc0))(param_2,param_3 + 8,iVar2 + 2);
  }
  FUN_005fd4e0(param_2[0xf],uVar3);
  return;
}

