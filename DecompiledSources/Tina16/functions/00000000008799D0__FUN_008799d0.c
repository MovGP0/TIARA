/* Ghidra address: 008799d0 */
/* Ghidra symbol: FUN_008799d0 */


void FUN_008799d0(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_01e1df98;
  DAT_02012828 = DAT_02012828 + 1;
  if (DAT_02012828 == 0) {
    DAT_01e1df98 = 0;
    FUN_00410f20(uVar1);
    FUN_0041b800(&DAT_01e1dfa0);
    FUN_0041b800(&DAT_01e1dfa8);
    FUN_0041b800(&DAT_01e1dfb0);
    FUN_0041b800(&DAT_01e1dfb8);
    FUN_0041b800(&DAT_01e1dfc0);
    FUN_0041b800(&DAT_01e1dfc8);
    FUN_0041b800(&DAT_01e1dfd0);
  }
  return;
}

