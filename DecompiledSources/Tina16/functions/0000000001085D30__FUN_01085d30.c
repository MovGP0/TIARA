/* Ghidra address: 01085d30 */
/* Ghidra symbol: FUN_01085d30 */


undefined8 FUN_01085d30(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x4c36) == '\0') {
    uVar1 = _get_mcu_IP(*(undefined8 *)(param_1 + 0xb20));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

