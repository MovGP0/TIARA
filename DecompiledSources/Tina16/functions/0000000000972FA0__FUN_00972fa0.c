/* Ghidra address: 00972fa0 */
/* Ghidra symbol: FUN_00972fa0 */


void FUN_00972fa0(longlong param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  
  *param_3 = 0;
  *param_4 = 0;
  cVar1 = FUN_008ff6c0(*(undefined8 *)(param_1 + 0x88));
  if (cVar1 == '\0') {
    *param_2 = 0x80;
    FUN_00414b90(param_3,*(undefined8 *)(param_1 + 0x88));
    FUN_00414520(param_4);
  }
  else {
    cVar1 = FUN_00900140(*(undefined8 *)(param_1 + 0x98));
    if (cVar1 == '\0') {
      *param_2 = 0x4a;
      FUN_00414b90(param_3,*(undefined8 *)(param_1 + 0x98));
      FUN_00414520(param_4);
    }
    else {
      cVar1 = FUN_00900490(*(undefined8 *)(param_1 + 0x90));
      if (cVar1 == '\0') {
        *param_2 = 0x49;
        FUN_00414b90(param_3,*(undefined8 *)(param_1 + 0x90));
        FUN_00414520(param_4);
      }
      else {
        *param_2 = 0;
        FUN_00414520(param_3);
        FUN_00414520(param_4);
      }
    }
  }
  return;
}

