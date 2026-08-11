/* Ghidra address: 00971310 */
/* Ghidra symbol: FUN_00971310 */


void FUN_00971310(longlong param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  
  *param_3 = 0;
  *param_4 = 0;
  cVar1 = FUN_009005e0(*(undefined8 *)(param_1 + 0x90));
  if (cVar1 == '\0') {
    *param_2 = 0x48;
    FUN_00414b90(param_3,*(undefined8 *)(param_1 + 0x90));
    FUN_00414520(param_4);
  }
  else {
    iVar2 = FUN_00417170(&DAT_009713ec,*(undefined8 *)(param_1 + 0x88),1);
    if (iVar2 < 1) {
      cVar1 = FUN_008ff570(*(undefined8 *)(param_1 + 0x88));
      if (cVar1 == '\0') {
        *param_2 = 0x41;
        FUN_00414b90(param_3,*(undefined8 *)(param_1 + 0x88));
        FUN_00414520(param_4);
      }
      else {
        *param_2 = 0;
        FUN_00414520(param_3);
        FUN_00414520(param_4);
      }
    }
    else {
      *param_2 = 0x48;
      FUN_00414b90(param_3,&DAT_009713ec);
      FUN_00414520(param_4);
    }
  }
  return;
}

