/* Ghidra address: 014ce6e0 */
/* Ghidra symbol: FUN_014ce6e0 */


void FUN_014ce6e0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_014ce7a0(param_1,L"T2JS_STOP",0,0);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x60));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

