/* Ghidra address: 00b0cea0 */
/* Ghidra symbol: FUN_00b0cea0 */


undefined8 FUN_00b0cea0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00416420(param_2,0);
  if (iVar1 == 0) {
    FUN_004144d0(param_1);
  }
  else {
    uVar2 = FUN_00415f70(param_2);
    iVar1 = thunk_FUN_041c7398(param_3,0,uVar2,0xffffffff,0,0,0,0);
    FUN_00415d10(param_1,iVar1 + -1,0);
    if (1 < iVar1) {
      uVar3 = FUN_00414df0(param_1);
      thunk_FUN_041c7398(param_3,0,uVar2,0xffffffff,uVar3,iVar1 + -1,0,0);
    }
  }
  return param_1;
}

