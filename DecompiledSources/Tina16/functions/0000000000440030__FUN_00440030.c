/* Ghidra address: 00440030 */
/* Ghidra symbol: FUN_00440030 */


undefined8 FUN_00440030(undefined8 param_1,char param_2,char param_3)

{
  if (param_3 == '\0') {
    FUN_00414ad0(param_1,(&PTR_DAT_01dc02f8)[param_2 != '\0']);
  }
  else {
    FUN_0043fdb0();
    if (param_2 == '\0') {
      FUN_00414ad0(param_1,*DAT_0200c5e0);
    }
    else {
      FUN_00414ad0(param_1,*DAT_0200c5d8);
    }
  }
  return param_1;
}

