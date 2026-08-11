/* Ghidra address: 00d36fb0 */
/* Ghidra symbol: FUN_00d36fb0 */


undefined8 FUN_00d36fb0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_04114b41(param_1,0,L"Edit",0);
  if (((lVar1 == 0) && (lVar1 = thunk_FUN_03a99535(param_1,0xffff), lVar1 != 0)) &&
     (lVar1 = thunk_FUN_04118143(param_1,0xffffffeb), lVar1 != 0)) {
    return 1;
  }
  return 0;
}

