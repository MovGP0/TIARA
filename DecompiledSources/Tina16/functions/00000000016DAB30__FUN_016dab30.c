/* Ghidra address: 016dab30 */
/* Ghidra symbol: FUN_016dab30 */


undefined8 FUN_016dab30(longlong param_1,char param_2,double param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if (param_2 == '\x06') {
    if (*(double *)(param_4 + 8) <= param_3) {
      uVar1 = 0x3ff0000000000000;
    }
    else {
      uVar1 = FUN_016da920(*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_1 + 0x760));
    }
    if ((*(char *)(param_1 + 0x32b) != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) {
      FUN_01b10f10(*(undefined8 *)(param_1 + 0x4b8),*(undefined8 *)(param_4 + 8));
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

