/* Ghidra address: 0097d070 */
/* Ghidra symbol: FUN_0097d070 */


void FUN_0097d070(longlong param_1,longlong param_2,undefined4 param_3)

{
  FUN_004d2dc0(param_1,param_2,param_3);
  if ((char)param_3 == '\x01') {
    if (param_2 == *(longlong *)(param_1 + 0x80)) {
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    if (param_2 == *(longlong *)(param_1 + 0x78)) {
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
  }
  return;
}

