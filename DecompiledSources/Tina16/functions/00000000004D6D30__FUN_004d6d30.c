/* Ghidra address: 004d6d30 */
/* Ghidra symbol: FUN_004d6d30 */


longlong FUN_004d6d30(longlong param_1,char param_2,longlong param_3,undefined8 param_4,
                     undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
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
  FUN_004d6590(local_res8,0,param_4,param_5);
  if (param_3 == 0) {
    uVar2 = FUN_0044d710(&PTR_FUN_00434150,1,PTR_PTR_02004bc8);
    FUN_004134c0(uVar2);
  }
  FUN_0041b840(local_res8 + 0x48,param_3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

