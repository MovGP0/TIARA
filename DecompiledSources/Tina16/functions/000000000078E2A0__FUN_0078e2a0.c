/* Ghidra address: 0078e2a0 */
/* Ghidra symbol: FUN_0078e2a0 */


undefined8 FUN_0078e2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_0078d820(param_1,param_3);
  iVar2 = FUN_0078d770(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    FUN_0078d2a0(param_2,param_3,0);
  }
  else {
    uVar3 = FUN_0078da70(param_1,param_3,uVar1,3);
    FUN_0078d2a0(param_2,param_3,uVar3);
  }
  return param_2;
}

