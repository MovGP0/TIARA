/* Ghidra address: 009d8780 */
/* Ghidra symbol: FUN_009d8780 */


undefined4
FUN_009d8780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  local_30 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)FUN_009d81f0(param_1);
  FUN_004168e0(&local_28,param_2);
  FUN_004168e0(&local_30,param_3);
  uVar2 = (**(code **)(*plVar1 + 0x2f8))(plVar1,local_28,local_30);
  FUN_009d35f0(param_4,uVar2,param_1);
  local_20 = 0;
  FUN_004145c0(&local_30,2);
  return local_20;
}

