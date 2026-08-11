/* Ghidra address: 007032a0 */
/* Ghidra symbol: FUN_007032a0 */


void FUN_007032a0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_0065aec0(param_1,param_2,param_3);
  uVar1 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x494),param_2,param_3);
  FUN_00703460(param_1,uVar1);
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FUN_00703400(param_1);
  }
  return;
}

