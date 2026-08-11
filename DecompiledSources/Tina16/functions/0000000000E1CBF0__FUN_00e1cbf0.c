/* Ghidra address: 00e1cbf0 */
/* Ghidra symbol: FUN_00e1cbf0 */


void FUN_00e1cbf0(void)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e810 == (code *)0x0) {
      DAT_0202e810 = (code *)FUN_00427c10(DAT_01edc8a0,L"DoneXYREC");
    }
    if (DAT_0202e810 != (code *)0x0) {
      (*DAT_0202e810)(local_res8);
    }
  }
  return;
}

