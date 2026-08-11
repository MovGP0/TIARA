/* Ghidra address: 0078a080 */
/* Ghidra symbol: FUN_0078a080 */


void FUN_0078a080(longlong *param_1)

{
  (**(code **)(*param_1 + -0x38))(param_1);
  if ((char)param_1[0xc] == '\0') {
    *(undefined1 *)(param_1 + 0xc) = 1;
    FUN_0078a0c0(param_1);
    (**(code **)(*param_1 + 0x78))(param_1);
  }
  return;
}

