/* Ghidra address: 0186ae80 */
/* Ghidra symbol: FUN_0186ae80 */


void FUN_0186ae80(void)

{
  DAT_021103a4 = DAT_021103a4 + 1;
  if (DAT_021103a4 == 0) {
    if (DAT_021103c8 != 0) {
      thunk_FUN_041c8c2f(DAT_021103c8);
    }
    FUN_00417740(&PTR_PTR_01faf930,&DAT_0186ad70);
    FUN_00417740(&PTR_PTR_01faf950,&DAT_0186ad70);
    FUN_00414480(&DAT_021104e8);
  }
  return;
}

