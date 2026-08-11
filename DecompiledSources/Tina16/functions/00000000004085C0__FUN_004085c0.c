/* Ghidra address: 004085c0 */
/* Ghidra symbol: FUN_004085c0 */


void FUN_004085c0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = FUN_00414ce0(PTR_s_Unknown_01db90c0);
    FUN_00408590(PTR_s_Unknown_01db90c0,param_2,uVar1);
  }
  else {
    FUN_00408590(*(undefined1 **)(param_1 + -0x88) + 1,param_2,**(undefined1 **)(param_1 + -0x88));
  }
  return;
}

