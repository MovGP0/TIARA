/* Ghidra address: 009da320 */
/* Ghidra symbol: FUN_009da320 */


undefined4 FUN_009da320(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  plVar1 = (longlong *)FUN_009da1c0(param_1);
  FUN_004168e0(&local_28,param_2);
  (**(code **)(*plVar1 + 0x2c8))(plVar1,local_28);
  local_20 = 0;
  FUN_00414520(&local_28);
  return local_20;
}

