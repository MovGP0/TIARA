/* Ghidra address: 00b95b50 */
/* Ghidra symbol: FUN_00b95b50 */


undefined8 FUN_00b95b50(undefined8 *param_1)

{
  undefined2 local_28;
  undefined2 local_24;
  undefined2 local_20;
  undefined2 local_1c;
  
  local_28 = (undefined2)*param_1;
  local_24 = (undefined2)((ulonglong)*param_1 >> 0x20);
  local_20 = (undefined2)param_1[1];
  local_1c = (undefined2)((ulonglong)param_1[1] >> 0x20);
  return CONCAT26(local_1c,CONCAT24(local_20,CONCAT22(local_24,local_28)));
}

