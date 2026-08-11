/* Ghidra address: 01d04ae0 */
/* Ghidra symbol: FUN_01d04ae0 */


undefined8 FUN_01d04ae0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x2d8))(param_1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x98))(param_1,param_2,param_3,param_4);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x19;
    }
  }
  else {
    uVar2 = (**(code **)(*(longlong *)param_1[0x33] + 0x28))
                      ((longlong *)param_1[0x33],param_2,param_3,param_4);
  }
  return uVar2;
}

