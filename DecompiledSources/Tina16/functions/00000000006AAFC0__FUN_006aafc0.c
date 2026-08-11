/* Ghidra address: 006aafc0 */
/* Ghidra symbol: FUN_006aafc0 */


void FUN_006aafc0(longlong param_1,longlong param_2,undefined4 param_3)

{
  FUN_006aa900(param_1,param_2,param_3);
  if (((char)param_3 == '\x01') && (param_2 == *(longlong *)(param_1 + 0x178))) {
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  return;
}

