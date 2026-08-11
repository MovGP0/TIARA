/* Ghidra address: 015b56e0 */
/* Ghidra symbol: FUN_015b56e0 */


void FUN_015b56e0(void)

{
  DAT_0210ef1c = DAT_0210ef1c + 1;
  if (DAT_0210ef1c == 0) {
    FUN_00414480(&DAT_01f6ef00);
    FUN_00417840(&PTR_u_Unknown_error_01f6ef08,&DAT_00401390,0x29);
  }
  return;
}

