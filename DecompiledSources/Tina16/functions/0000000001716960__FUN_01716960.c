/* Ghidra address: 01716960 */
/* Ghidra symbol: FUN_01716960 */


undefined1 *
FUN_01716960(longlong param_1,undefined1 *param_2,undefined8 param_3,char param_4,undefined4 param_5
            )

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_res18 [2];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (param_4 == '\0') {
    plVar2 = *(longlong **)(param_1 + 0x60);
  }
  else if (param_4 == '\x02') {
    plVar2 = *(longlong **)(param_1 + 0x70);
  }
  else if (param_4 == '\x03') {
    plVar2 = *(longlong **)(param_1 + 0x78);
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x80);
  }
  iVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2,local_res18[0]);
  if (iVar1 == -1) {
    *param_2 = 0;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x30))(plVar2,iVar1);
    (**(code **)(*plVar2 + 0x18))(plVar2,local_20,param_5);
    FUN_00416910(param_2,local_20[0],0xff);
  }
  FUN_00414480(local_20);
  FUN_00414480(local_res18);
  return param_2;
}

