/* Ghidra address: 00c59440 */
/* Ghidra symbol: FUN_00c59440 */


void FUN_00c59440(longlong param_1,longlong param_2,undefined4 param_3)

{
  FUN_00654ca0(param_1,param_2,param_3);
  if (((char)param_3 == '\x01') && (param_2 == *(longlong *)(param_1 + 0x4a8))) {
    *(undefined8 *)(param_1 + 0x4a8) = 0;
  }
  return;
}

