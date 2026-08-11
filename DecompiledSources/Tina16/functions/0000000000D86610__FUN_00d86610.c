/* Ghidra address: 00d86610 */
/* Ghidra symbol: FUN_00d86610 */


void FUN_00d86610(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  longlong *plVar1;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  
  local_3c = *param_4;
  uStack_34 = param_4[1];
  uStack_2c = *(undefined4 *)(param_4 + 2);
  (**(code **)(*param_1 + 0xc0))(param_1,param_2,param_3,&local_3c,param_5);
  if (*(longlong *)(param_1[0xb] + 0x88) != 0) {
    plVar1 = (longlong *)FUN_00d77610(*(longlong *)(param_1[0xb] + 0x88),L"Gripper");
    if (plVar1 != (longlong *)0x0) {
      FUN_00d77b90(plVar1,&local_3c);
      (**(code **)(*plVar1 + 0xa8))(plVar1,param_3,&DAT_01ecf394);
    }
  }
  return;
}

