/* Ghidra address: 004d6f50 */
/* Ghidra symbol: FUN_004d6f50 */


void FUN_004d6f50(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1 + 0x38;
  }
  (**(code **)(param_1 + 0x50))(*(undefined8 *)(param_1 + 0x58),lVar1,param_1 + 0x48);
  return;
}

