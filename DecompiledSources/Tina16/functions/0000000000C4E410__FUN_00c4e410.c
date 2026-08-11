/* Ghidra address: 00c4e410 */
/* Ghidra symbol: FUN_00c4e410 */


void FUN_00c4e410(void)

{
  DAT_02019c80 = DAT_02019c80 + 1;
  if (DAT_02019c80 == 0) {
    FUN_00c4e2f0();
    FUN_00410f20(DAT_02019ca0);
    FUN_00417840(&PTR_u_pcbviewer_tina_01ea4368,&DAT_00401390,1);
  }
  return;
}

