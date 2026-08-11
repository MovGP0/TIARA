/* Ghidra address: 00cd55d0 */
/* Ghidra symbol: FUN_00cd55d0 */


undefined8 FUN_00cd55d0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    cVar1 = FUN_00cd71e0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_00cd3fc8);
    if (cVar1 == '\0') {
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
  }
  return *(undefined8 *)(param_1 + 0x18);
}

