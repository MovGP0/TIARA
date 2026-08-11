/* Ghidra address: 00d41100 */
/* Ghidra symbol: FUN_00d41100 */


void FUN_00d41100(longlong *param_1)

{
  if ((char)param_1[0xc] == '\0') {
    *(undefined1 *)(param_1 + 0xc) = 1;
    FUN_0078a0c0(param_1);
    (**(code **)(*param_1 + 0x78))(param_1);
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

