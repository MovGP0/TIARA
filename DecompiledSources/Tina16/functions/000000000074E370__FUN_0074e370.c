/* Ghidra address: 0074e370 */
/* Ghidra symbol: FUN_0074e370 */


void FUN_0074e370(longlong param_1,longlong param_2,undefined4 param_3)

{
  FUN_004d2dc0(param_1,param_2,param_3);
  if ((param_2 == *(longlong *)(param_1 + 0xb8)) && ((char)param_3 == '\x01')) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  if ((param_2 == *(longlong *)(param_1 + 0xb0)) && ((char)param_3 == '\x01')) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  return;
}

