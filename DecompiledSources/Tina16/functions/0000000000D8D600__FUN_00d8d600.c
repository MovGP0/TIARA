/* Ghidra address: 00d8d600 */
/* Ghidra symbol: FUN_00d8d600 */


void FUN_00d8d600(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_4;
  uStack_30 = param_4[1];
  plVar1 = (longlong *)FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 200),L"Frame");
  if (plVar1 != (longlong *)0x0) {
    FUN_00d77b90(plVar1,&local_38);
    (**(code **)(*plVar1 + 0xa8))(plVar1,param_3,&DAT_01ecf394);
  }
  return;
}

