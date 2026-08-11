/* Ghidra address: 009d86b0 */
/* Ghidra symbol: FUN_009d86b0 */


undefined4 FUN_009d86b0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  *param_3 = 0;
  plVar1 = (longlong *)FUN_009d81f0(param_1);
  FUN_004168e0(&local_28,param_2);
  uVar2 = (**(code **)(*plVar1 + 0x2f0))(plVar1,local_28);
  FUN_009d35f0(param_3,uVar2,*(undefined8 *)(param_1 + 0x20));
  local_20 = 0;
  FUN_00414520(&local_28);
  return local_20;
}

