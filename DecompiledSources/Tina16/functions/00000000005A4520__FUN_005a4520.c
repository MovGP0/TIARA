/* Ghidra address: 005a4520 */
/* Ghidra symbol: FUN_005a4520 */


undefined8 FUN_005a4520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_005a3aa0(param_1,param_3);
  iVar2 = FUN_005a39f0(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    FUN_005a3520(param_2,param_3,0);
  }
  else {
    uVar3 = FUN_005a3cf0(param_1,param_3,uVar1,3);
    FUN_005a3520(param_2,param_3,uVar3);
  }
  return param_2;
}

