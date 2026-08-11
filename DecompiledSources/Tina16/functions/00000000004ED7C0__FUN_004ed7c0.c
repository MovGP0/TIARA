/* Ghidra address: 004ed7c0 */
/* Ghidra symbol: FUN_004ed7c0 */


undefined8 FUN_004ed7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_004ecc20(param_1,param_3);
  iVar2 = FUN_004ecb70(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    FUN_004ec610(param_2,param_3,0);
  }
  else {
    uVar1 = FUN_004ece80(param_1,param_3,uVar1,3);
    FUN_004ec610(param_2,param_3,uVar1);
  }
  return param_2;
}

