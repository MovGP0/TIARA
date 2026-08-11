/* Ghidra address: 01776fc0 */
/* Ghidra symbol: FUN_01776fc0 */


char FUN_01776fc0(longlong param_1,longlong param_2)

{
  char cVar1;
  char local_29;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_29 = FUN_01771350(param_1,param_2);
  if (local_29 != '\0') {
    if (local_29 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x100) + 0x38))
                (*(longlong **)(param_1 + 0x100),&local_20);
      (**(code **)(**(longlong **)(param_2 + 0x100) + 0x38))
                (*(longlong **)(param_2 + 0x100),&local_28);
      cVar1 = FUN_01b234f0(local_20,local_28);
      if (cVar1 != '\0') {
        local_29 = '\x01';
        goto LAB_01777050;
      }
    }
    local_29 = '\0';
  }
LAB_01777050:
  FUN_00414560(&local_28,2);
  return local_29;
}

