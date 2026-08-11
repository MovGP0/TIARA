/* Ghidra address: 017cf490 */
/* Ghidra symbol: FUN_017cf490 */


void FUN_017cf490(longlong param_1,double param_2,double param_3,double param_4,double param_5)

{
  if (((*(char *)(param_1 + 0x150) != '\0') || (*(double *)(param_1 + 200) != param_2)) ||
     (*(double *)(param_1 + 0xc0) != param_3)) {
    FUN_01cc4620(*(undefined8 *)(param_1 + 0x128),param_2);
    FUN_01cc46b0(*(undefined8 *)(param_1 + 0x128),0,param_3);
    *(undefined1 *)(param_1 + 0x150) = 0;
  }
  if ((param_2 != param_4) || (param_3 != param_5)) {
    FUN_01cc4620(*(undefined8 *)(param_1 + 0x128),param_4);
    FUN_01cc46b0(*(undefined8 *)(param_1 + 0x128),0,param_5);
  }
  return;
}

