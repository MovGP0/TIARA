/* Ghidra address: 01d04b50 */
/* Ghidra symbol: FUN_01d04b50 */


void FUN_01d04b50(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2d8))(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*(longlong *)param_1[0x33] + 0x70))((longlong *)param_1[0x33],param_2);
  }
  return;
}

