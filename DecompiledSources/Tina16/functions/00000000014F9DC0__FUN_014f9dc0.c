/* Ghidra address: 014f9dc0 */
/* Ghidra symbol: FUN_014f9dc0 */


undefined8 * FUN_014f9dc0(undefined8 *param_1,int param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (param_2 == 0) {
    local_28 = 1;
    local_24 = 1;
    local_20 = 1;
    local_1c = 1;
  }
  else {
    local_28 = 2;
    local_24 = 2;
    local_20 = 2;
    local_1c = 2;
  }
  *param_1 = CONCAT44(local_24,local_28);
  param_1[1] = CONCAT44(local_1c,local_20);
  return param_1;
}

