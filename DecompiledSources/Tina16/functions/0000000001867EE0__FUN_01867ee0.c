/* Ghidra address: 01867ee0 */
/* Ghidra symbol: FUN_01867ee0 */


longlong * FUN_01867ee0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (**(code **)(param_1 + 0x68))(param_1);
  plVar2 = (longlong *)(**(code **)(lVar1 + -0x30))(lVar1);
  (**(code **)(*plVar2 + 0xa0))(plVar2,0xff);
  (**(code **)(*plVar2 + 0xc0))(plVar2,param_2);
  return plVar2;
}

