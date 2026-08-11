/* Ghidra address: 00d88e70 */
/* Ghidra symbol: FUN_00d88e70 */


void FUN_00d88e70(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  longlong *plVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_4;
  uStack_30 = param_4[1];
  plVar1 = (longlong *)FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x80),L"Frame");
  if (plVar1 == (longlong *)0x0) {
    FUN_00d81ba0(param_1,param_2,param_3,&local_38,param_5);
  }
  else {
    FUN_00d77b90(plVar1,&local_38);
    (**(code **)(*plVar1 + 0xa8))(plVar1,param_3,&DAT_01ecf394);
  }
  return;
}

