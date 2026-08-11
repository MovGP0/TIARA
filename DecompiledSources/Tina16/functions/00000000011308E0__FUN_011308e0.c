/* Ghidra address: 011308e0 */
/* Ghidra symbol: FUN_011308e0 */


undefined8 FUN_011308e0(undefined8 param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined1 local_3a [42];
  
  local_50 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  FUN_0112f7c0(param_3,local_3a,0x20,4);
  FUN_01130820(local_res8,0,local_3a);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

