/* Ghidra address: 00971190 */
/* Ghidra symbol: FUN_00971190 */


void FUN_00971190(longlong param_1,undefined1 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  *param_3 = 0;
  *param_4 = 0;
  iVar2 = FUN_00416420(*(undefined8 *)(param_1 + 0x88),0);
  if (iVar2 != 0) {
    iVar2 = FUN_00417170(&DAT_009712a8,*(undefined8 *)(param_1 + 0x88),1);
    if (0 < iVar2) {
      *param_2 = 0x39;
      FUN_00414b90(param_3,&DAT_009712a8);
      FUN_00414b90(param_4,&LAB_009712b4);
      return;
    }
    uVar3 = 0;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x88) + -4) >> 1;
    }
    if (*(short *)(*(longlong *)(param_1 + 0x88) + -2 + (longlong)(int)uVar3 * 2) == DAT_01e32a60) {
      *param_2 = 0x3d;
      FUN_00414b90(param_3,&LAB_009712b4);
      FUN_00414520(param_4);
      return;
    }
    cVar1 = FUN_008ff570(*(undefined8 *)(param_1 + 0x88));
    if (cVar1 == '\0') {
      *param_2 = 0x41;
      FUN_00414b90(param_3,*(undefined8 *)(param_1 + 0x88));
      FUN_00414520(param_4);
      return;
    }
  }
  *param_2 = 0;
  FUN_00414520(param_3);
  FUN_00414520(param_4);
  return;
}

