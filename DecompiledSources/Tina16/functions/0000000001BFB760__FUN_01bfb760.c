/* Ghidra address: 01bfb760 */
/* Ghidra symbol: FUN_01bfb760 */


void FUN_01bfb760(undefined8 param_1,undefined1 param_2)

{
  if (*(longlong *)PTR_DAT_02004030 != 0) {
    *(undefined1 *)(*(longlong *)PTR_DAT_02004030 + 0xf8) = param_2;
  }
  return;
}

