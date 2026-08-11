/* Ghidra address: 014b51a0 */
/* Ghidra symbol: FUN_014b51a0 */


void FUN_014b51a0(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  if (*(char *)(param_1 + 0x896) == '\0') {
    if (((*(longlong *)PTR_DAT_02004e40 != 0) &&
        (*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2788) != 0)) &&
       (*(char *)(*(longlong *)(param_1 + 0x860) + 0x5e0) != '\0')) {
      FUN_0199e310(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x2788),0,1,0);
    }
    *param_3 = 1;
  }
  else {
    *param_3 = 1;
  }
  *(undefined1 *)(param_1 + 0x894) = 1;
  return;
}

