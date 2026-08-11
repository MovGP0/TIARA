/* Ghidra address: 004baeb0 */
/* Ghidra symbol: FUN_004baeb0 */


longlong FUN_004baeb0(longlong param_1,char param_2,undefined8 param_3,int param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
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
  *(undefined8 *)(local_res8 + 8) = param_3;
  *(longlong *)(local_res8 + 0x18) = (longlong)param_4;
  FUN_00419260(local_res8 + 0x10,&DAT_00406578,1,(longlong)param_4);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

