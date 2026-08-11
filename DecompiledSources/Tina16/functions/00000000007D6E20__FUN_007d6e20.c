/* Ghidra address: 007d6e20 */
/* Ghidra symbol: FUN_007d6e20 */


bool FUN_007d6e20(longlong param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    bVar3 = false;
  }
  else {
    uVar2 = FUN_007d56e0();
    iVar1 = thunk_FUN_0413f8c7(uVar2,param_2,(param_3 & 0xff) + 1);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}

