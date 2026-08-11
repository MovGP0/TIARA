/* Ghidra address: 0068f3e0 */
/* Ghidra symbol: FUN_0068f3e0 */


void FUN_0068f3e0(longlong param_1,longlong param_2,undefined4 param_3)

{
  FUN_00654ca0(param_1,param_2,param_3);
  if (((char)param_3 == '\x01') && (param_2 == *(longlong *)(param_1 + 0x498))) {
    *(undefined8 *)(param_1 + 0x498) = 0;
  }
  return;
}

