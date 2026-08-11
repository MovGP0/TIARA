/* Ghidra address: 009709f0 */
/* Ghidra symbol: FUN_009709f0 */


void FUN_009709f0(longlong param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  
  *param_3 = 0;
  *param_4 = 0;
  cVar1 = FUN_008ff6c0(*(undefined8 *)(param_1 + 0x88));
  if (cVar1 == '\0') {
    *param_2 = 0x46;
    FUN_00414b90(param_3,*(undefined8 *)(param_1 + 0x88));
    FUN_00414520(param_4);
  }
  else {
    *param_2 = 0;
    FUN_00414520(param_3);
    FUN_00414520(param_4);
  }
  return;
}

