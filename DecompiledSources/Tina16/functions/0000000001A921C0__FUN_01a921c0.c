/* Ghidra address: 01a921c0 */
/* Ghidra symbol: FUN_01a921c0 */


void FUN_01a921c0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_01a91580(param_1,param_2);
  uVar2 = FUN_01a914d0(param_1,param_2,uVar1);
  if ((int)uVar2 < 0) {
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
      FUN_01a914a0(param_1);
      uVar2 = FUN_01a914d0(param_1,param_2,uVar1);
    }
    FUN_01a91700(param_1,uVar1,~uVar2,param_2,param_3);
  }
  else {
    FUN_01a91770(param_1,uVar2,param_3);
  }
  return;
}

