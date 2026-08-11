/* Ghidra address: 007fc730 */
/* Ghidra symbol: FUN_007fc730 */


undefined8 FUN_007fc730(undefined8 param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
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
  FUN_007fab80(local_res8,0,param_3);
  pcVar2 = (code *)FUN_00411550(local_res8,0xffa2);
  (*pcVar2)(local_res8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

