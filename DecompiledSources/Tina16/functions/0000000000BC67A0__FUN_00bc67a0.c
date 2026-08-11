/* Ghidra address: 00bc67a0 */
/* Ghidra symbol: FUN_00bc67a0 */


void FUN_00bc67a0(longlong param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  if (param_4 == '\0') {
    *(undefined2 *)(param_1 + 0x5e) = 0x12;
  }
  else {
    *(undefined2 *)(param_1 + 0x5e) = 0x20;
  }
  FUN_00bc5ea0(*(undefined8 *)(param_1 + 0x90),*(undefined2 *)(param_1 + 0x5e),
               *(undefined8 *)(param_1 + 0x50),7);
  if (*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x160) != *(longlong *)(param_1 + 0x90) + 0x15c)
  {
    *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 6) = param_2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 10) = param_3;
  }
  return;
}

