/* Ghidra address: 0177a5e0 */
/* Ghidra symbol: FUN_0177a5e0 */


undefined8 FUN_0177a5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_017799f0(param_1,param_3);
  iVar2 = FUN_01779940(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    FUN_017793e0(param_2,param_3,0);
  }
  else {
    uVar3 = FUN_01779c90(param_1,param_3,uVar1,3);
    FUN_017793e0(param_2,param_3,uVar3);
  }
  return param_2;
}

