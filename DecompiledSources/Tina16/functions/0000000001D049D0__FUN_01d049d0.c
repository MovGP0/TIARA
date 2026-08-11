/* Ghidra address: 01d049d0 */
/* Ghidra symbol: FUN_01d049d0 */


void FUN_01d049d0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2d8))(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*(longlong *)param_1[0x33] + 0x30))
              ((longlong *)param_1[0x33],param_2,param_3,param_4);
  }
  return;
}

