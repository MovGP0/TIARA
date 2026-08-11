/* Ghidra address: 005dc4d0 */
/* Ghidra symbol: FUN_005dc4d0 */


bool FUN_005dc4d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8));
  return lVar1 != 0;
}

