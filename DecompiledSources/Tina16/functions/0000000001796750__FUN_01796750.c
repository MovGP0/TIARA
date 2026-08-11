/* Ghidra address: 01796750 */
/* Ghidra symbol: FUN_01796750 */


void FUN_01796750(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 800) != '\0') {
    FUN_017afd00(param_2,1);
  }
  if (*(longlong *)(param_1 + 0x328) == 0) {
    FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0xd10),param_2);
  }
  else {
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x328),param_2);
  }
  return;
}

