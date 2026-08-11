/* Ghidra address: 00c2db30 */
/* Ghidra symbol: FUN_00c2db30 */


undefined8 FUN_00c2db30(undefined8 param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00410e60(local_res8,0);
  FUN_00c2dc90(local_res8,1,&LAB_00c158d8);
  FUN_00c2dc90(local_res8,0xf9,&LAB_00c15318);
  FUN_00c2dc90(local_res8,0xfe,&LAB_00c15eb0);
  FUN_00c2dc90(local_res8,0xff,&LAB_00c162e8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

