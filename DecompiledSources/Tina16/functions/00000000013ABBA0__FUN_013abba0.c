/* Ghidra address: 013abba0 */
/* Ghidra symbol: FUN_013abba0 */


bool FUN_013abba0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  for (lVar1 = FUN_006dd580(param_2); (lVar1 != 0 && (lVar1 != *(longlong *)(param_1 + 0x38)));
      lVar1 = FUN_006dd3e0(lVar1)) {
  }
  return lVar1 != 0;
}

