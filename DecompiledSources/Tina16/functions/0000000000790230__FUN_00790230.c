/* Ghidra address: 00790230 */
/* Ghidra symbol: FUN_00790230 */


undefined8 FUN_00790230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_0078f680(param_1,param_3);
  iVar2 = FUN_0078f5d0(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    FUN_0078f070(param_2,param_3,0);
  }
  else {
    uVar3 = FUN_0078f8f0(param_1,param_3,uVar1,3);
    FUN_0078f070(param_2,param_3,uVar3);
  }
  return param_2;
}

