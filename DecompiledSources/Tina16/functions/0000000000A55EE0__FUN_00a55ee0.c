/* Ghidra address: 00a55ee0 */
/* Ghidra symbol: FUN_00a55ee0 */


undefined4 FUN_00a55ee0(longlong param_1,ulonglong param_2)

{
  param_2 = param_2 & 0xff;
  if (param_2 < 0x19) {
    if (param_2 != 0x18) {
      if (param_2 < 0x13) {
        if ((param_2 != 0x12) && ((param_2 != 0xd && (param_2 != 0xf)))) {
LAB_00a55f59:
          return **(undefined4 **)(param_1 + 0x260);
        }
      }
      else if ((param_2 != 0x14) && (param_2 != 0x16)) goto LAB_00a55f59;
    }
  }
  else if ((((param_2 != 0x1a) && (param_2 != 0x1c)) && (1 < param_2 - 0x27)) &&
          (param_2 - 0x27 != 8)) goto LAB_00a55f59;
  return *(undefined4 *)(*(longlong *)(param_1 + 0x260) + 4);
}

