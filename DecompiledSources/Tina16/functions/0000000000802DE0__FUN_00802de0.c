/* Ghidra address: 00802de0 */
/* Ghidra symbol: FUN_00802de0 */


void FUN_00802de0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_60 [72];
  
  uVar2 = FUN_0065b870(param_1);
  iVar1 = FUN_007f9220(uVar2);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) | 0x100;
    FUN_00657db0(param_1,param_2);
    *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) & 0xfffffeff;
  }
  else {
    uVar2 = FUN_0065b870(param_1);
    uVar2 = thunk_FUN_041804fe(uVar2,local_60);
    uVar3 = FUN_008029f0(param_1);
    thunk_FUN_041b9d9f(uVar2,0,0,uVar3);
    uVar2 = FUN_0065b870(param_1);
    thunk_FUN_0416269d(uVar2,local_60);
  }
  return;
}

