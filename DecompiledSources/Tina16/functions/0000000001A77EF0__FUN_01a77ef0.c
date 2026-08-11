/* Ghidra address: 01a77ef0 */
/* Ghidra symbol: FUN_01a77ef0 */


void FUN_01a77ef0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x788) == 0) {
    if (*(longlong *)(param_1 + 0x798) != 0) {
      FUN_0064e140(param_1,0xfff5);
      FUN_01aceb90(*(undefined8 *)(param_1 + 0x798),1);
      FUN_0064e140(param_1,0);
    }
  }
  else {
    FUN_0064e140(param_1,0xfff5);
    FUN_013d2b30(*(undefined8 *)(param_1 + 0x788),1);
    FUN_0064e140(param_1,0);
  }
  if ((*PTR_DAT_020052b8 != '\0') && (*PTR_DAT_02002c78 != '\0')) {
    *PTR_DAT_02002c78 = 0;
    FUN_013a5570(*(undefined8 *)PTR_DAT_020032b8);
  }
  return;
}

