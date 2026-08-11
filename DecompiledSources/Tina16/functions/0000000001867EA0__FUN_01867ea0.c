/* Ghidra address: 01867ea0 */
/* Ghidra symbol: FUN_01867ea0 */


longlong * FUN_01867ea0(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (*(code *)*param_1)(param_1);
  plVar2 = (longlong *)(**(code **)(lVar1 + -0x30))(lVar1);
  (**(code **)(*plVar2 + 0x10))(plVar2,0xff,param_2,param_1);
  return plVar2;
}

