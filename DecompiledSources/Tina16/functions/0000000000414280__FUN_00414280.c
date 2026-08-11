/* Ghidra address: 00414280 */
/* Ghidra symbol: FUN_00414280 */


longlong FUN_00414280(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                     undefined4 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (DAT_01db9058 == (code *)0x0) {
    puVar1 = (undefined8 *)FUN_004095c0(0x10);
    *puVar1 = param_3;
    puVar1[1] = param_4;
  }
  else {
    puVar1 = (undefined8 *)(*DAT_01db9058)(param_3,param_4);
  }
  DAT_020060a9 = 1;
  lVar2 = thunk_FUN_03a60ddc(param_1,param_2,FUN_00414210,puVar1,param_5,param_6);
  if (lVar2 == 0) {
    FUN_004095f0(puVar1);
  }
  return lVar2;
}

