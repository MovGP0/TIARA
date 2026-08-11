/* Ghidra address: 00741260 */
/* Ghidra symbol: FUN_00741260 */


void FUN_00741260(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x318);
  uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(*(longlong *)(lVar1 + 0x18) + 0x2c),param_2,param_3);
  FUN_005fd6d0(lVar1,uVar2);
  FUN_0064d660(param_1,param_2,param_3,param_4);
  return;
}

