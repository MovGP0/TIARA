/* Ghidra address: 01c072e0 */
/* Ghidra symbol: FUN_01c072e0 */


void FUN_01c072e0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 local_38 [24];
  
  FUN_0064d660(param_1,param_2,param_3);
  FUN_01bf6240(local_38,param_1 + 0x334,param_2,param_3);
  FUN_01c067b0(param_1,local_38);
  uVar1 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x348),param_2,param_3);
  FUN_01c06820(param_1,uVar1);
  return;
}

