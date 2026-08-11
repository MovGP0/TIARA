/* Ghidra address: 01a91fb0 */
/* Ghidra symbol: FUN_01a91fb0 */


undefined8 FUN_01a91fb0(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_30 [2];
  
  uVar1 = FUN_01a91580(param_1,param_2);
  iVar2 = FUN_01a914d0(param_1,param_2,uVar1);
  if (iVar2 < 0) {
    FUN_01a91030(local_30,param_2,0);
  }
  else {
    uVar1 = FUN_01a917c0(param_1,param_2,uVar1,3);
    FUN_01a91030(local_30,param_2,uVar1);
  }
  return local_30[0];
}

