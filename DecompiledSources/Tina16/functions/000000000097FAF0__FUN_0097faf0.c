/* Ghidra address: 0097faf0 */
/* Ghidra symbol: FUN_0097faf0 */


void FUN_0097faf0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)param_1[0x12] + 0xb8))((longlong *)param_1[0x12],param_3);
  if (iVar1 == -1) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x68))((longlong *)param_1[0x12],param_3);
  }
  else {
    (**(code **)(*param_1 + 0x90))(param_1,2,param_4,param_3,0);
  }
  return;
}

