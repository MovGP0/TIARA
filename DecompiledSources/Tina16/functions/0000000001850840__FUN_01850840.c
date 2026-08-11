/* Ghidra address: 01850840 */
/* Ghidra symbol: FUN_01850840 */


longlong FUN_01850840(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_38 = param_5;
  FUN_0184f010(local_res8,0,param_3,param_4);
  local_38 = param_5;
  uVar2 = FUN_0184f010(&PTR_FUN_018400f8,1,param_3,param_4);
  *(undefined8 *)(local_res8 + 0x30) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

