/* Ghidra address: 009d82c0 */
/* Ghidra symbol: FUN_009d82c0 */


undefined4 FUN_009d82c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  local_30 = 0;
  *param_3 = 0;
  plVar1 = (longlong *)FUN_009d81f0(param_1);
  FUN_004168e0(&local_30,param_2);
  (**(code **)(*plVar1 + 0x2e0))(plVar1,&local_28,0,local_30);
  FUN_004168b0(param_3,local_28);
  local_20 = 0;
  FUN_004145c0(&local_30,2);
  return local_20;
}

