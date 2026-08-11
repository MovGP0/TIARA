/* Ghidra address: 007fdbd0 */
/* Ghidra symbol: FUN_007fdbd0 */


int * FUN_007fdbd0(longlong param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_0065b870(param_1);
  iVar1 = FUN_007f9220(uVar4);
  if (iVar1 == 0) {
    FUN_0065bab0(param_1,param_2);
  }
  else {
    thunk_FUN_0415f13b(param_2,0,0,0,0);
    uVar4 = FUN_0065b870(param_1);
    uVar2 = thunk_FUN_04118143(uVar4,0xfffffff0);
    uVar4 = FUN_0065b870(param_1);
    uVar3 = thunk_FUN_04118143(uVar4,0xffffffec);
    thunk_FUN_04176e9f(param_2,uVar2,-(uint)(*(longlong *)(param_1 + 0x500) != 0),uVar3);
    thunk_FUN_0415f13b(param_2,0,0,(*(int *)(param_1 + 0x98) - param_2[2]) + *param_2,
                       (*(int *)(param_1 + 0x9c) - param_2[3]) + param_2[1]);
  }
  return param_2;
}

