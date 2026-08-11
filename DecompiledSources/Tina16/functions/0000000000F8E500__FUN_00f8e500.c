/* Ghidra address: 00f8e500 */
/* Ghidra symbol: FUN_00f8e500 */


void FUN_00f8e500(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x3473) != '\0') {
    uVar1 = _get_mcu_status(*(undefined8 *)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x3468) = uVar1;
    FUN_00f8d6e0(param_1);
    FUN_00f8d840(param_1);
  }
  return;
}

