/* Ghidra address: 00978450 */
/* Ghidra symbol: FUN_00978450 */


undefined8 FUN_00978450(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    FUN_00414ad0(param_2,L"UTF-8");
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x38));
  }
  return param_2;
}

