/* Ghidra address: 00970c40 */
/* Ghidra symbol: FUN_00970c40 */


void FUN_00970c40(longlong param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  
  *param_3 = 0;
  *param_4 = 0;
  cVar1 = FUN_00900500(*(undefined8 *)(param_1 + 0x90));
  if (cVar1 == '\0') {
    *param_2 = 0x41;
    FUN_00414b90(param_3,*(undefined8 *)(param_1 + 0x90));
    FUN_00414520(param_4);
  }
  else {
    *param_2 = 0;
    FUN_00414520(param_3);
    FUN_00414520(param_4);
  }
  return;
}

