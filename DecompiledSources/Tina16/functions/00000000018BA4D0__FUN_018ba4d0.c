/* Ghidra address: 018ba4d0 */
/* Ghidra symbol: FUN_018ba4d0 */


void FUN_018ba4d0(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_75;
  undefined1 local_6a;
  undefined8 local_69;
  undefined8 local_61;
  undefined1 local_59;
  undefined8 local_56;
  undefined8 local_46;
  undefined8 local_3e;
  undefined8 local_36;
  
  FUN_01978c10(param_1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x210);
  if (plVar1 == (longlong *)0x0) {
    local_6a = 1;
    local_56 = 0;
    local_69 = 0;
    local_61 = 0;
    local_75 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x280))(plVar1,&local_75);
  }
  local_46 = 0;
  local_3e = 0;
  local_36 = 0x3ff0000000000000;
  local_59 = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_019781d0(*(undefined8 *)(param_1 + 0x20),*(longlong *)(param_1 + 0xb0),0,0,0,&local_75);
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  FUN_00414480(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x210) + 0xf0);
  FUN_0064dfb0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x210),0);
  return;
}

