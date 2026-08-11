/* Ghidra address: 01be7650 */
/* Ghidra symbol: FUN_01be7650 */


longlong FUN_01be7650(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_01be5750(local_res8,0,param_3);
  cVar2 = FUN_004113d0(param_3,&PTR_FUN_01bd2b58);
  if (cVar2 != '\0') {
    *(undefined8 *)(local_res8 + 0x6a0) = param_3;
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

