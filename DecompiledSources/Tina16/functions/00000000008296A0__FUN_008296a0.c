/* Ghidra address: 008296a0 */
/* Ghidra symbol: FUN_008296a0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008296a0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  _DAT_01e17890 = _DAT_01e17890 + -1;
  FUN_0065f1b0(param_1,param_2 & 0xfffffffc);
  FUN_00410f20(*(undefined8 *)(param_1 + 800));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

