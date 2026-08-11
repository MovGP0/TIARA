/* Ghidra address: 005dc860 */
/* Ghidra symbol: FUN_005dc860 */


undefined8 FUN_005dc860(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined4 local_c;
  
  local_20[0] = 0;
  FUN_005dbea0(param_1,local_20,param_2);
  cVar1 = FUN_005e13b0(*(undefined8 *)(param_1 + 0x10),local_20[0],&local_c);
  if (cVar1 == '\0') {
    local_28 = 0;
  }
  else {
    local_28 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                         (*(longlong **)(param_1 + 8),local_c);
  }
  FUN_00414480(local_20);
  return local_28;
}

