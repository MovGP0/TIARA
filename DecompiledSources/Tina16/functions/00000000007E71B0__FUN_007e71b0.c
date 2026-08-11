/* Ghidra address: 007e71b0 */
/* Ghidra symbol: FUN_007e71b0 */


void FUN_007e71b0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    cVar1 = FUN_007e67c0(param_1);
    if (param_3 == 0) {
      thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x88),0xb015,0,0);
    }
    if (cVar1 != '\0') {
      thunk_FUN_0401553e(*(undefined8 *)(param_1 + 0x88));
    }
  }
  FUN_007e6a10(param_1,param_2,param_3,param_4);
  return;
}

