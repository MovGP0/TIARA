/* Ghidra address: 0067ff00 */
/* Ghidra symbol: FUN_0067ff00 */


void FUN_0067ff00(longlong param_1,longlong param_2,undefined4 param_3)

{
  FUN_0064c5a0(param_1,param_2,param_3);
  if (((char)param_3 == '\x01') && (param_2 == *(longlong *)(param_1 + 0x318))) {
    *(undefined8 *)(param_1 + 0x318) = 0;
  }
  return;
}

