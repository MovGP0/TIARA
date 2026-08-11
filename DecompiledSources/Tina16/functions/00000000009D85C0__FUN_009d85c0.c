/* Ghidra address: 009d85c0 */
/* Ghidra symbol: FUN_009d85c0 */


undefined4
FUN_009d85c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)FUN_009d81f0(param_1);
  FUN_004168e0(&local_30,param_2);
  FUN_004168e0(&local_38,param_3);
  (**(code **)(*plVar1 + 0x2e0))(plVar1,&local_28,local_30,local_38);
  FUN_004168b0(param_4,local_28);
  local_20 = 0;
  FUN_004145c0(&local_38,3);
  return local_20;
}

