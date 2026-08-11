/* Ghidra address: 0094c040 */
/* Ghidra symbol: FUN_0094c040 */


longlong * FUN_0094c040(longlong *param_1,longlong *param_2)

{
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_0094b9e0(param_1);
  FUN_0094ba40(param_1);
  FUN_0094bac0(param_1,param_2);
  FUN_0094b750(param_1,param_2);
  FUN_0094b8e0(param_1,param_2);
  (**(code **)(*param_2 + 0xe8))(param_2,local_20);
  local_28 = (longlong *)(**(code **)(*param_1 + 0x38))(param_1,local_20[0]);
  if (local_28 == param_2) {
    local_28 = (longlong *)0x0;
  }
  else {
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*param_1 + 0x20))(param_1,local_28);
    }
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
  }
  FUN_00414520(local_20);
  return local_28;
}

