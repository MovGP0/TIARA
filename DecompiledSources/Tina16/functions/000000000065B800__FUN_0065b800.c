/* Ghidra address: 0065b800 */
/* Ghidra symbol: FUN_0065b800 */


undefined8 FUN_0065b800(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x468) != 0) &&
     (lVar1 = thunk_FUN_041da4fa(), lVar1 == *(longlong *)(param_1 + 0x468))) {
    return 1;
  }
  return 0;
}

