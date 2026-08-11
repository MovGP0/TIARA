/* Ghidra address: 0040ae70 */
/* Ghidra symbol: FUN_0040ae70 */


undefined8 FUN_0040ae70(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  if (param_2 != '\0') {
    uVar1 = FUN_004119e0(param_1,param_2);
    local_res8 = FUN_00411a20(uVar1);
  }
  return local_res8;
}

