/* Ghidra address: 016dce00 */
/* Ghidra symbol: FUN_016dce00 */


undefined8 FUN_016dce00(longlong param_1,char param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if ((param_2 == '\x06') && (param_1 != 0)) {
    uVar1 = FUN_016da920((1.0 / *(double *)(param_4 + 8)) / 4.0,*(undefined8 *)(param_1 + 0x760));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

