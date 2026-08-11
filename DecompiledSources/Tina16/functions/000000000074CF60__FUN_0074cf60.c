/* Ghidra address: 0074cf60 */
/* Ghidra symbol: FUN_0074cf60 */


void FUN_0074cf60(longlong param_1,longlong param_2,undefined4 param_3)

{
  FUN_00654ca0(param_1,param_2,param_3);
  if ((param_2 == *(longlong *)(param_1 + 0x4d8)) && ((char)param_3 == '\x01')) {
    *(undefined8 *)(param_1 + 0x4d8) = 0;
  }
  return;
}

