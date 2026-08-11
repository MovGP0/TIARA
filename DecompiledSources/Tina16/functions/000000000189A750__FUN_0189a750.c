/* Ghidra address: 0189a750 */
/* Ghidra symbol: FUN_0189a750 */


undefined8 FUN_0189a750(undefined8 param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  char cVar2;
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
  FUN_0189a5f0(local_res8,0,param_3);
  cVar2 = FUN_004113d0(param_3,&PTR_FUN_0063d930);
  if (cVar2 != '\0') {
    FUN_0064cbf0(local_res8,(longlong)*(int *)(param_3 + 0x9c) / 3 & 0xffffffff);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

