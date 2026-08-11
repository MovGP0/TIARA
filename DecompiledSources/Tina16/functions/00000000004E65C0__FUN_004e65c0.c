/* Ghidra address: 004e65c0 */
/* Ghidra symbol: FUN_004e65c0 */


undefined8 FUN_004e65c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_004e5a10(param_1,param_3);
  iVar2 = FUN_004e5960(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    FUN_004e5400(param_2,param_3,0);
  }
  else {
    uVar3 = FUN_004e5c80(param_1,param_3,uVar1,3);
    FUN_004e5400(param_2,param_3,uVar3);
  }
  return param_2;
}

