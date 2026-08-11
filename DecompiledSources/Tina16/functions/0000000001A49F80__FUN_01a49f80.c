/* Ghidra address: 01a49f80 */
/* Ghidra symbol: FUN_01a49f80 */


undefined8 FUN_01a49f80(longlong param_1,undefined8 param_2)

{
  if ((*(char *)(param_1 + 0x293c) == '\0') || (*(longlong *)(param_1 + 0x2b30) != 0)) {
    FUN_00414ad0(param_2,L"import_from_picture.txt");
  }
  else {
    FUN_00414ad0(param_2,L"import_from_picture_w.txt");
  }
  return param_2;
}

