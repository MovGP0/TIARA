/* Ghidra address: 00d89170 */
/* Ghidra symbol: FUN_00d89170 */


void FUN_00d89170(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  
  local_3c = *param_4;
  local_34 = param_4[1];
  local_2c = *(undefined4 *)(param_4 + 2);
  if ((byte)local_2c < 3) {
    plVar1 = (longlong *)
             FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x88),L"Panel");
    if (plVar1 != (longlong *)0x0) {
      if ((byte)local_2c == '\x02') {
        local_34 = CONCAT44(local_34._4_4_,(int)local_34 + 7);
      }
      FUN_00d77b90(plVar1,&local_3c);
      (**(code **)(*plVar1 + 0x98))(plVar1,0);
      (**(code **)(*plVar1 + 0xa8))(plVar1,param_3,&DAT_01ecf394);
    }
  }
  else if ((byte)local_2c == 3) {
    plVar1 = (longlong *)
             FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x88),L"Gripper");
    if (plVar1 != (longlong *)0x0) {
      FUN_00d77b90(plVar1,&local_3c);
      (**(code **)(*plVar1 + 0x98))(plVar1,0);
      (**(code **)(*plVar1 + 0xa8))(plVar1,param_3,&DAT_01ecf394);
    }
  }
  return;
}

