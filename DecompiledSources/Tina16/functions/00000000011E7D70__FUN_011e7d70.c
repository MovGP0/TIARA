/* Ghidra address: 011e7d70 */
/* Ghidra symbol: FUN_011e7d70 */


void FUN_011e7d70(undefined8 param_1,longlong *param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (param_3 + param_5) / 2;
  iVar2 = (param_4 + param_6) / 2;
  FUN_005fd4d0(param_2[0xf],(longlong)(param_4 + param_6) % 2 & 0xffffffff);
  if (*PTR_DAT_02002480 == '\0') {
    (**(code **)(*param_2 + 200))(param_2,iVar1,iVar2 + 10);
    iVar4 = iVar1 + -10;
    (**(code **)(*param_2 + 0xc0))(param_2,iVar4,iVar2 + 10);
    iVar3 = iVar2 + -10;
    (**(code **)(*param_2 + 0xc0))(param_2,iVar4,iVar3);
    (**(code **)(*param_2 + 0xc0))(param_2,iVar1,iVar3);
    (**(code **)(*param_2 + 0x60))
              (param_2,iVar4,iVar3,iVar1 + 0xb,iVar2 + 0xb,iVar1,iVar2 + 0xb,iVar1,iVar3);
    if (0x14 < param_6 - param_4) {
      (**(code **)(*param_2 + 200))(param_2,param_3,param_4);
      (**(code **)(*param_2 + 0xc0))(param_2,param_3,param_6);
    }
  }
  else {
    DAT_02107690 = param_5;
    DAT_02107694 = param_6;
    DAT_02107688 = param_3;
    DAT_0210768c = param_4;
    FUN_005fdf50(param_2,&DAT_02107688);
    (**(code **)(*param_2 + 0x120))
              (param_2,param_3 + 6,iVar2 + *(int *)PTR_DAT_020012c0 + 5,&LAB_011e7f70);
  }
  return;
}

