/* Ghidra address: 005b8050 */
/* Ghidra symbol: FUN_005b8050 */


undefined1 FUN_005b8050(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_29;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_10 = 0;
  local_38 = param_2;
  FUN_00419260(&local_10,&DAT_005b7cb0,1,0x1e);
  local_29 = 1;
  local_14 = 0;
  local_20 = FUN_00416740(local_38);
  local_18 = 0;
  do {
    cVar1 = FUN_005b7d60(auStack_58,local_20,local_18);
    if (cVar1 != '\0') goto LAB_005b80d3;
    cVar1 = FUN_005b7d20(auStack_58,&local_20,&local_18);
  } while (cVar1 != '\0');
  local_29 = 0;
LAB_005b80d3:
  FUN_00419430(&local_10,&DAT_005b7cb0);
  return local_29;
}

