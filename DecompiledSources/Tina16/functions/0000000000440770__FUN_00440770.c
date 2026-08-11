/* Ghidra address: 00440770 */
/* Ghidra symbol: FUN_00440770 */


undefined8 FUN_00440770(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 local_268 [600];
  
  lVar1 = thunk_FUN_041460a9(param_1,local_268);
  if ((lVar1 != -1) && (thunk_FUN_03b19720(lVar1), param_3 != 0)) {
    FUN_00409a70(local_268,param_3,0x24);
    return 0xffffffff;
  }
  return 0;
}

