/* Ghidra address: 009d2fd0 */
/* Ghidra symbol: FUN_009d2fd0 */


void FUN_009d2fd0(undefined8 param_1)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_24;
  undefined8 local_20 [2];
  
  local_40 = auStack_68;
  (**(code **)*DAT_02012ad8)(DAT_02012ad8);
  local_20[0] = param_1;
  local_24 = FUN_00597e50(DAT_02012ad0 + 8,local_20);
  (**(code **)(*DAT_02012ad8 + 8))(DAT_02012ad8);
  return;
}

