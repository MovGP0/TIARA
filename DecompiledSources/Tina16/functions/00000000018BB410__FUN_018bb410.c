/* Ghidra address: 018bb410 */
/* Ghidra symbol: FUN_018bb410 */


char FUN_018bb410(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  char local_21;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_21 = FUN_00440a20(param_2,1);
  if (local_21 != '\0' || param_3 != '\0') {
    local_20 = FUN_004b9860(&PTR_FUN_0047c498,1,param_2,0x20);
    (**(code **)(*param_1 + 0x138))(param_1,local_20,0);
    FUN_00410f20(local_20);
  }
  return local_21;
}

