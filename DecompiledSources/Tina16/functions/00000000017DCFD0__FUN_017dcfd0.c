/* Ghidra address: 017dcfd0 */
/* Ghidra symbol: FUN_017dcfd0 */


void FUN_017dcfd0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_017dd0a0(param_1,param_2);
  }
  if (*(char *)(param_1 + 0x18) == '\x02') {
    FUN_017dd280(param_1,param_2,param_3);
  }
  if (*(char *)(param_1 + 0x18) == '\x04') {
    FUN_017dd6b0(param_1,param_2);
  }
  return;
}

