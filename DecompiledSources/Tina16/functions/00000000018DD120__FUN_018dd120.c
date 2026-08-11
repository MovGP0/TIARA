/* Ghidra address: 018dd120 */
/* Ghidra symbol: FUN_018dd120 */


longlong FUN_018dd120(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  char cVar2;
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
  if (param_3 != 0) {
    *(bool *)(local_res8 + 0x6e8) = *(longlong *)(param_3 + 0x18) == 0x13e;
  }
  cVar2 = FUN_004113d0(param_3,&PTR_FUN_01936058);
  if (cVar2 != '\0') {
    *(longlong *)(local_res8 + 0x6f0) = param_3;
  }
  FUN_0181a5c0(local_res8,0,0);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

