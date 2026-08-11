/* Ghidra address: 016ae1e0 */
/* Ghidra symbol: FUN_016ae1e0 */


void FUN_016ae1e0(longlong param_1,char param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  FUN_016ae250(param_1,*(undefined4 *)(param_1 + 0x8458));
  *(undefined1 *)(param_1 + 0x30) = 1;
  if ((param_2 == '\0') || (*(char *)(param_1 + 0x31) != '\0')) {
    uVar2 = *(undefined4 *)(param_1 + 0x8458);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x8460);
  }
  uVar1 = FUN_004095c0(8);
  *param_3 = uVar1;
  *(undefined4 *)*param_3 = uVar2;
  *(undefined8 *)(param_1 + 0x8470) = *param_3;
  *(undefined1 *)(param_1 + 0x31) = 1;
  return;
}

