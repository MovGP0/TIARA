/* Ghidra address: 00d894a0 */
/* Ghidra symbol: FUN_00d894a0 */


void FUN_00d894a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  
  local_3c = *param_4;
  uStack_34 = param_4[1];
  local_2c = *(undefined4 *)(param_4 + 2);
  plVar2 = (longlong *)FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x58),L"Frame");
  if (plVar2 != (longlong *)0x0) {
    if ((char)local_2c == '\x04') {
      uVar1 = 8;
    }
    else if ((char)local_2c == '\x01') {
      uVar1 = 5;
    }
    else {
      uVar1 = 0;
    }
    (**(code **)(*plVar2 + 0x98))(plVar2,uVar1);
    FUN_00d77b90(plVar2,&local_3c);
    (**(code **)(*plVar2 + 0xa8))(plVar2,param_3,&DAT_01ecf394);
  }
  return;
}

