/* Ghidra address: 0180c060 */
/* Ghidra symbol: FUN_0180c060 */


void FUN_0180c060(void)

{
  DAT_02110268 = DAT_02110268 + 1;
  if (DAT_02110268 == 0) {
    if (DAT_01fa7f20 != 0) {
      FUN_00410f20(DAT_01fa7f20);
    }
    DAT_01fa7f20 = 0;
    FUN_00417840(&PTR_u_TfrxDesignerForm_01fa82e8,&DAT_0180b460,0x11);
  }
  return;
}

