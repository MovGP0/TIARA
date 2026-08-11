/* Ghidra address: 01085fb0 */
/* Ghidra symbol: FUN_01085fb0 */


char FUN_01085fb0(longlong param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  int local_34;
  char local_21;
  undefined8 local_20;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_20 = 0;
  if (*(int *)(param_1 + 0xad8) == 2) {
    local_21 = FUN_010b3450(*(undefined8 *)(param_1 + 0xac8),param_2,param_3);
  }
  else {
    local_34 = param_2;
    if (*(int *)(param_1 + 0xad8) == 4) {
      local_34 = param_2 * 2;
    }
    local_21 = _Debug_IsPCAssigned(*(undefined8 *)(param_1 + 0xb28),local_34,&local_10);
    if (local_21 != '\0') {
      FUN_004167d0(param_3,local_10);
    }
    cVar1 = FUN_00f81d50(*(undefined4 *)(param_1 + 0xad8));
    if (cVar1 == '\0') {
      cVar1 = FUN_00f81d60(*(undefined4 *)(param_1 + 0xad8));
      if (cVar1 == '\0') goto code_r0x01086093;
    }
    FUN_00441920(&local_20,*param_3);
    cVar1 = FUN_010b13a0(*(undefined8 *)(param_1 + 0xac8),local_20,local_18,0);
    if (cVar1 == '\0') {
      local_21 = '\0';
    }
  }
code_r0x01086093:
  FUN_00414480(&local_20);
  return local_21;
}

