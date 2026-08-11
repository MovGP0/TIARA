/* Ghidra address: 017f3ff0 */
/* Ghidra symbol: FUN_017f3ff0 */


longlong FUN_017f3ff0(longlong param_1,char param_2,int param_3)

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
  *(int *)(local_res8 + 0x10) = param_3;
  *(int *)(local_res8 + 0xc) = param_3;
  FUN_00419260(local_res8 + 0x18,&DAT_017f3558,1,(longlong)param_3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

