/* Ghidra address: 019b3a60 */
/* Ghidra symbol: FUN_019b3a60 */


undefined8 FUN_019b3a60(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_30 [2];
  
  uVar1 = FUN_019b3030(param_1,param_2);
  iVar2 = FUN_019b2f80(param_1,param_2,uVar1);
  if (iVar2 < 0) {
    FUN_019b2ae0(local_30,param_2,0);
  }
  else {
    uVar1 = FUN_019b3270(param_1,param_2,uVar1,3);
    FUN_019b2ae0(local_30,param_2,uVar1);
  }
  return local_30[0];
}

