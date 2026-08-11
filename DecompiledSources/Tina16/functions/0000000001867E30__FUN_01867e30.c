/* Ghidra address: 01867e30 */
/* Ghidra symbol: FUN_01867e30 */


longlong * FUN_01867e30(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060bbf0(plVar1,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  return plVar1;
}

