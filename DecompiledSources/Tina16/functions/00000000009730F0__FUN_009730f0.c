/* Ghidra address: 009730f0 */
/* Ghidra symbol: FUN_009730f0 */


void FUN_009730f0(longlong param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  
  *param_3 = 0;
  *param_4 = 0;
  cVar1 = FUN_008ff6c0(*(undefined8 *)(param_1 + 0x90));
  if (cVar1 == '\0') {
    *param_2 = 0x79;
    FUN_00414b90(param_3,*(undefined8 *)(param_1 + 0x90));
    FUN_00414520(param_4);
    return;
  }
  iVar2 = FUN_00416420(*(undefined8 *)(param_1 + 0x98),0);
  if (iVar2 != 0) {
    cVar1 = FUN_008fff40(*(undefined8 *)(param_1 + 0x98));
    if (cVar1 == '\0') {
      *param_2 = 0x7b;
      FUN_00414b90(param_3,*(undefined8 *)(param_1 + 0x98));
      FUN_00414520(param_4);
      return;
    }
    iVar2 = FUN_00416420(*(undefined8 *)(param_1 + 0xa0),0);
    if ((iVar2 != 0) || (iVar2 = FUN_00416420(*(undefined8 *)(param_1 + 0xa8),0), iVar2 != 0)) {
      *param_2 = 0x89;
      FUN_00414520(param_3);
      FUN_00414520(param_4);
      return;
    }
  }
  cVar1 = FUN_00900140(*(undefined8 *)(param_1 + 0xa8));
  if (cVar1 == '\0') {
    *param_2 = 0x4a;
    FUN_00414b90(param_3,*(undefined8 *)(param_1 + 0xa8));
    FUN_00414520(param_4);
  }
  else {
    cVar1 = FUN_00900490(*(undefined8 *)(param_1 + 0xa0));
    if (cVar1 == '\0') {
      *param_2 = 0x49;
      FUN_00414b90(param_3,*(undefined8 *)(param_1 + 0xa0));
      FUN_00414520(param_4);
    }
    else {
      *param_2 = 0;
      FUN_00414520(param_3);
      FUN_00414520(param_4);
    }
  }
  return;
}

