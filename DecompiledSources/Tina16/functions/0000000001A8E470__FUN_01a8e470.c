/* Ghidra address: 01a8e470 */
/* Ghidra symbol: FUN_01a8e470 */


undefined8 FUN_01a8e470(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  uVar1 = param_1[1];
  local_28 = (int)*param_1;
  local_38 = (int)*param_2;
  if ((((local_28 == local_38) &&
       (local_20 = (int)uVar1, local_30 = (int)param_2[1], local_20 == local_30)) &&
      (local_24 = (int)((ulonglong)*param_1 >> 0x20), local_34 = (int)((ulonglong)*param_2 >> 0x20),
      local_24 == local_34)) &&
     (local_1c = (int)((ulonglong)uVar1 >> 0x20), local_2c = (int)((ulonglong)param_2[1] >> 0x20),
     local_1c == local_2c)) {
    uVar1 = CONCAT71((uint7)(uint3)((ulonglong)uVar1 >> 0x28),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

