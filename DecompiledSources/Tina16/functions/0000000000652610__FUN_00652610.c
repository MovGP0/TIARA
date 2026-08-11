/* Ghidra address: 00652610 */
/* Ghidra symbol: FUN_00652610 */


void FUN_00652610(longlong *param_1,char param_2)

{
  if ((bool)param_2 != ((*(uint *)(param_1 + 0x14) & 0x100000) != 0)) {
    if (param_2 == '\0') {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffefffff;
    }
    else {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x100000;
    }
    (**(code **)(*param_1 + 0x108))(param_1);
  }
  return;
}

