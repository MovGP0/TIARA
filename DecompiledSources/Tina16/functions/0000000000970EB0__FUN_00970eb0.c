/* Ghidra address: 00970eb0 */
/* Ghidra symbol: FUN_00970eb0 */


void FUN_00970eb0(longlong param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  
  *param_3 = 0;
  *param_4 = 0;
  cVar1 = FUN_009006f0(*(undefined8 *)(param_1 + 0x88));
  if ((cVar1 == '\0') && (iVar2 = FUN_00416420(*(undefined8 *)(param_1 + 0x88),0), iVar2 != 0)) {
    *param_2 = 0x45;
    FUN_00414520(param_3);
    FUN_00414520(param_4);
    return;
  }
  *param_2 = 0;
  FUN_00414520(param_3);
  FUN_00414520(param_4);
  return;
}

