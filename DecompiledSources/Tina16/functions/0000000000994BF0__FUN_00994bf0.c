/* Ghidra address: 00994bf0 */
/* Ghidra symbol: FUN_00994bf0 */


undefined8 FUN_00994bf0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x88);
  if (plVar1 == (longlong *)0x0) {
    FUN_00414520(param_2);
  }
  else {
    (**(code **)(*plVar1 + 0x288))(plVar1,param_2,param_3);
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    (**(code **)(param_1 + 0x78))(*(undefined8 *)(param_1 + 0x80),param_1,param_3,param_2);
  }
  return param_2;
}

