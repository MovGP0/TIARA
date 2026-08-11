/* Ghidra address: 00654ca0 */
/* Ghidra symbol: FUN_00654ca0 */


void FUN_00654ca0(longlong param_1,longlong param_2,undefined4 param_3)

{
  FUN_0064c5a0(param_1,param_2,param_3);
  if ((param_2 == *(longlong *)(param_1 + 0x450)) && ((char)param_3 == '\x01')) {
    *(undefined8 *)(param_1 + 0x450) = 0;
  }
  return;
}

