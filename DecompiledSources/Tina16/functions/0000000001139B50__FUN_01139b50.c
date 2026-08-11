/* Ghidra address: 01139b50 */
/* Ghidra symbol: FUN_01139b50 */


void FUN_01139b50(longlong param_1)

{
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  
  local_30 = 0;
  local_28 = 1;
  local_38[0] = 0x53c;
  (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x80))(*(longlong **)(param_1 + 0xa18),0,1);
  FUN_011399d0(param_1,local_38);
  return;
}

