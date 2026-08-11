/* Ghidra address: 0072b6b0 */
/* Ghidra symbol: FUN_0072b6b0 */


void FUN_0072b6b0(longlong param_1,char param_2)

{
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    if (param_2 == '\0') {
      *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) & 0xfffffeff;
    }
    else {
      *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) | 0x100;
    }
    (**(code **)(param_1 + 0x1b8))(*(undefined8 *)(param_1 + 0x1c0),param_1);
  }
  return;
}

