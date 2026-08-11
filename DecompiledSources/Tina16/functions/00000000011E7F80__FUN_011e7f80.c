/* Ghidra address: 011e7f80 */
/* Ghidra symbol: FUN_011e7f80 */


void FUN_011e7f80(undefined8 param_1,longlong *param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (param_3 + param_5) / 2;
  iVar2 = (param_4 + param_6) / 2;
  uVar3 = FUN_005fd4d0(param_2[0xf],(longlong)(param_4 + param_6) % 2 & 0xffffffff);
  if (*PTR_DAT_02002480 == '\0') {
    (**(code **)(*param_2 + 0x60))
              (param_2,iVar1 + -0x24,iVar2 + -0x10,iVar1 + -4,iVar2 + 0x10,iVar1 + -6,iVar2 + 8,
               iVar1 + -6,iVar2 + -8);
    (**(code **)(*param_2 + 0x60))
              (param_2,iVar1 + -0x20,iVar2 + 8,iVar1 + 0x12,iVar2 + -0x2a,iVar1 + -6,iVar2 + 8,
               iVar1 + 10,iVar2);
    (**(code **)(*param_2 + 0x60))
              (param_2,iVar1 + -0x20,iVar2 + 0x2a,iVar1 + 0x12,iVar2 + -8,iVar1 + 10,iVar2,
               iVar1 + -6,iVar2 + -8);
    if ((0x14 < param_6 - param_4) && (4 < *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x768))) {
      iVar4 = iVar1 + -6;
      iVar5 = iVar1 + -4;
      iVar1 = iVar1 + -0x18;
      (**(code **)(*param_2 + 0x60))
                (param_2,iVar1,iVar2 + -0x17,iVar5,iVar2 + -3,iVar4,iVar2 + -8,iVar4,iVar2 + -0x12);
      (**(code **)(*param_2 + 0x60))
                (param_2,iVar1,iVar2 + 3,iVar5,iVar2 + 0x17,iVar4,iVar2 + 0x12,iVar4,iVar2 + 8);
      if (8 < *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x768)) {
        (**(code **)(*param_2 + 0x60))
                  (param_2,iVar1,iVar2 + -0x21,iVar5,iVar2 + -0xd,iVar4,iVar2 + -0x12,iVar4,
                   iVar2 + -0x1c);
        (**(code **)(*param_2 + 0x60))
                  (param_2,iVar1,iVar2 + 0xd,iVar5,iVar2 + 0x21,iVar4,iVar2 + 0x1c,iVar4,
                   iVar2 + 0x12);
      }
    }
  }
  else {
    DAT_0210768c = param_4 + -3;
    DAT_02107690 = param_3 + 0x10;
    DAT_02107694 = param_6 + 2;
    DAT_02107688 = param_3;
    FUN_005fdf50(param_2,&DAT_02107688);
    (**(code **)(*param_2 + 0x120))
              (param_2,param_3 + 9,iVar2 + *(int *)PTR_DAT_020012c0 + 5,&LAB_011e85c0);
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

