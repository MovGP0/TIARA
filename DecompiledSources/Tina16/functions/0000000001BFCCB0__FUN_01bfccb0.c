/* Ghidra address: 01bfccb0 */
/* Ghidra symbol: FUN_01bfccb0 */


void FUN_01bfccb0(longlong *param_1,char param_2)

{
  if ((char)param_1[0xb] != param_2) {
    *(char *)(param_1 + 0xb) = param_2;
    *(undefined1 *)(param_1 + 4) = 2;
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return;
}

