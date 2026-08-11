/* Ghidra address: 005e1200 */
/* Ghidra symbol: FUN_005e1200 */


undefined8 FUN_005e1200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_005e0660(param_1,param_3);
  iVar2 = FUN_005e05b0(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    FUN_005e0050(param_2,param_3,0);
  }
  else {
    uVar1 = FUN_005e08c0(param_1,param_3,uVar1,3);
    FUN_005e0050(param_2,param_3,uVar1);
  }
  return param_2;
}

