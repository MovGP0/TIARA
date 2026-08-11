/* Ghidra address: 01d04a60 */
/* Ghidra symbol: FUN_01d04a60 */


void FUN_01d04a60(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2d8))(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*(longlong *)param_1[0x33] + 0x40))((longlong *)param_1[0x33],param_2,param_3);
  }
  return;
}

