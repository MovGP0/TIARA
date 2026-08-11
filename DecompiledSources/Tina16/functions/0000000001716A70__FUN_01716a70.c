/* Ghidra address: 01716a70 */
/* Ghidra symbol: FUN_01716a70 */


undefined4 FUN_01716a70(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_res10 [3];
  undefined4 local_1c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (param_3 == '\0') {
    plVar2 = *(longlong **)(param_1 + 0x60);
  }
  else if (param_3 == '\x01') {
    plVar2 = *(longlong **)(param_1 + 0x68);
  }
  else if (param_3 == '\x02') {
    plVar2 = *(longlong **)(param_1 + 0x70);
  }
  else if (param_3 == '\x03') {
    plVar2 = *(longlong **)(param_1 + 0x78);
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x80);
  }
  iVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2,local_res10[0]);
  if (iVar1 == -1) {
    local_1c = 0;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x30))(plVar2,iVar1);
    local_1c = (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  FUN_00414480(local_res10);
  return local_1c;
}

