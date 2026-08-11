/* Ghidra address: 01c060c0 */
/* Ghidra symbol: FUN_01c060c0 */


void FUN_01c060c0(longlong *param_1,char param_2)

{
  if (param_2 != *(char *)((longlong)param_1 + 0x35c)) {
    *(char *)((longlong)param_1 + 0x35c) = param_2;
    if (param_2 == '\0') {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x40;
    }
    else {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffffffbf;
    }
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

