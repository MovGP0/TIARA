/* Ghidra address: 0196b670 */
/* Ghidra symbol: FUN_0196b670 */


void FUN_0196b670(longlong param_1,longlong param_2,undefined4 param_3)

{
  FUN_004d2dc0(param_1,param_2,param_3);
  if (((char)param_3 == '\x01') && (param_2 == *(longlong *)(param_1 + 0x198))) {
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  return;
}

