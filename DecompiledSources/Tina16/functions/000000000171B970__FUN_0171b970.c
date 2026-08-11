/* Ghidra address: 0171b970 */
/* Ghidra symbol: FUN_0171b970 */


void FUN_0171b970(void)

{
  DAT_0210ff80 = DAT_0210ff80 + 1;
  if (DAT_0210ff80 == 0) {
    FUN_00410f20(DAT_0210ff78);
    FUN_00417840(&PTR_u__MCU__01f98490,&DAT_00401390,4);
    FUN_00417840(&PTR_u_Number_of_MCUs_01f984b0,&DAT_00401390,4);
    FUN_00417840(&PTR_u_MCUs_01f984d0,&DAT_00401390,4);
  }
  return;
}

