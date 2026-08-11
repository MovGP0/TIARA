/* Ghidra address: 0055efe0 */
/* Ghidra symbol: FUN_0055efe0 */


undefined8 FUN_0055efe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_0055e560(param_1,param_3);
  iVar2 = FUN_0055e4b0(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    FUN_0055dfe0(param_2,param_3,0);
  }
  else {
    uVar3 = FUN_0055e7b0(param_1,param_3,uVar1,3);
    FUN_0055dfe0(param_2,param_3,uVar3);
  }
  return param_2;
}

