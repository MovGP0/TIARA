/* Ghidra address: 0094c140 */
/* Ghidra symbol: FUN_0094c140 */


longlong * FUN_0094c140(longlong *param_1,longlong *param_2)

{
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_0094b880(param_1);
  FUN_0094ba40(param_1);
  FUN_0094bac0(param_1,param_2);
  FUN_0094b750(param_1,param_2);
  FUN_0094b8e0(param_1,param_2);
  (**(code **)(*param_2 + 0x150))(param_2,local_20);
  (**(code **)(*param_2 + 0x148))(param_2,&local_28);
  local_30 = (longlong *)(**(code **)(*param_1 + 0x40))(param_1,local_20[0],local_28);
  if (local_30 == param_2) {
    local_30 = (longlong *)0x0;
  }
  else {
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*param_1 + 0x20))(param_1,local_30);
    }
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
  }
  FUN_004145c0(&local_28,2);
  return local_30;
}

