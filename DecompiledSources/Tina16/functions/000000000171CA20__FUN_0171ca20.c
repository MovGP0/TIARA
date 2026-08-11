/* Ghidra address: 0171ca20 */
/* Ghidra symbol: FUN_0171ca20 */


undefined8 FUN_0171ca20(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_0171bfb0(param_1,param_3);
  iVar2 = FUN_0171bf00(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    FUN_0171ba30(param_2,param_3,0);
  }
  else {
    uVar3 = FUN_0171c200(param_1,param_3,uVar1,3);
    FUN_0171ba30(param_2,param_3,uVar3);
  }
  return param_2;
}

