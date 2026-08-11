/* Ghidra address: 01b1d750 */
/* Ghidra symbol: FUN_01b1d750 */


void FUN_01b1d750(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_007ffaf0(param_1);
  iVar1 = FUN_00807790(uVar5);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  uVar5 = FUN_007ffaf0(param_1);
  iVar2 = FUN_008077f0(uVar5);
  uVar5 = FUN_007ffaf0(param_1,(longlong)(iVar2 - param_2) % 2 & 0xffffffff);
  iVar3 = FUN_008077d0(uVar5);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  uVar5 = FUN_007ffaf0(param_1);
  iVar4 = FUN_008077b0(uVar5);
  (**(code **)(*param_1 + 400))
            (param_1,iVar1 + (iVar2 - param_2) / 2,iVar3 + (iVar4 - param_3) / 2,param_2,param_3);
  return;
}

