/* Ghidra address: 004d6f80 */
/* Ghidra symbol: FUN_004d6f80 */


longlong FUN_004d6f80(longlong param_1,char param_2,longlong *param_3,undefined8 param_4,
                     undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_004d6590(local_res8,0,param_4,param_5);
  if (*param_3 == 0) {
    uVar2 = FUN_0044d710(&PTR_FUN_00434150,1,PTR_PTR_02004bc8);
    FUN_004134c0(uVar2);
  }
  *(longlong *)(local_res8 + 0x50) = *param_3;
  *(longlong *)(local_res8 + 0x58) = param_3[1];
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

