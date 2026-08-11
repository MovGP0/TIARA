/* Ghidra address: 00f01ef0 */
/* Ghidra symbol: FUN_00f01ef0 */


void FUN_00f01ef0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_38 [16];
  
  iVar2 = FUN_0064d0b0(param_1);
  uVar3 = FUN_0064d0b0(param_1);
  uVar4 = FUN_0064d120(param_1);
  thunk_FUN_0415f13b(local_38,iVar2 - *(int *)(param_1 + 0x518),0,uVar3,uVar4);
  uVar1 = FUN_00498310(param_2,param_3);
  iVar2 = thunk_FUN_03f16006(local_38,uVar1);
  if ((bool)*(char *)(param_1 + 0x533) != (iVar2 != 0)) {
    *(bool *)(param_1 + 0x533) = iVar2 != 0;
    uVar1 = FUN_0065b870();
    thunk_FUN_03a2fc9d(uVar1,local_38,0);
  }
  return;
}

