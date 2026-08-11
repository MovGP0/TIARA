/* Ghidra address: 0065eb70 */
/* Ghidra symbol: FUN_0065eb70 */


void FUN_0065eb70(longlong *param_1,char param_2)

{
  if (((*(uint *)(param_1 + 0x14) & 0x40000) != 0) != (bool)param_2) {
    if (param_2 == '\0') {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffbffff;
    }
    else {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x40000;
    }
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

