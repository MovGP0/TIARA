/* Ghidra address: 01867850 */
/* Ghidra symbol: FUN_01867850 */


longlong *
FUN_01867850(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060bbf0(plVar1,param_4);
  (**(code **)(*plVar1 + 0x88))(plVar1,param_2);
  (**(code **)(*plVar1 + 0x70))(plVar1,param_3);
  (**(code **)(*plVar1 + 0x80))(plVar1,param_5);
  return plVar1;
}

