/* Ghidra address: 00f8d0e0 */
/* Ghidra symbol: FUN_00f8d0e0 */


void FUN_00f8d0e0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  *(char *)(param_1 + 0x3452) = param_2;
  if (param_2 != '\0') {
    uVar1 = _get_mcu_status(*(undefined8 *)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x3468) = uVar1;
    FUN_00f8d6e0(param_1);
    if (*(char *)(param_1 + 0x3472) != '\0') {
      FUN_00f8d8a0(param_1);
    }
  }
  return;
}

