/* Ghidra address: 0078b210 */
/* Ghidra symbol: FUN_0078b210 */


undefined8 FUN_0078b210(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_0078a7b0(param_1,param_3);
  iVar2 = FUN_0078a700(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    FUN_0078a230(param_2,param_3,0);
  }
  else {
    uVar3 = FUN_0078aa00(param_1,param_3,uVar1,3);
    FUN_0078a230(param_2,param_3,uVar3);
  }
  return param_2;
}

