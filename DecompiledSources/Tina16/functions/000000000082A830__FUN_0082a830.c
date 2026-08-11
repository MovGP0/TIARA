/* Ghidra address: 0082a830 */
/* Ghidra symbol: FUN_0082a830 */


void FUN_0082a830(longlong *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x66]) {
    *(char *)(param_1 + 0x66) = param_2;
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

