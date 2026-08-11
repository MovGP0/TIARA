/* Ghidra address: 01771350 */
/* Ghidra symbol: FUN_01771350 */


char FUN_01771350(longlong param_1,longlong param_2)

{
  char cVar1;
  char local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_29 = FUN_0176a580(param_1,param_2);
  if (local_29 != '\0') {
    if (local_29 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x38))(*(longlong **)(param_1 + 0xb0),local_20)
      ;
      (**(code **)(**(longlong **)(param_2 + 0xb0) + 0x38))
                (*(longlong **)(param_2 + 0xb0),&local_28);
      cVar1 = FUN_01b234f0(local_20[0],local_28);
      if (cVar1 != '\0') {
        local_29 = '\x01';
        goto LAB_017713df;
      }
    }
    local_29 = '\0';
  }
LAB_017713df:
  FUN_00414560(&local_28,2);
  return local_29;
}

