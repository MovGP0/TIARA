/* Ghidra address: 00546280 */
/* Ghidra symbol: FUN_00546280 */


longlong FUN_00546280(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 *param_5)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_38 = param_5;
  FUN_00546070(local_res8,0,param_3,param_4);
  cVar2 = FUN_005471b0(local_res8);
  if (cVar2 == '\f') {
    uVar3 = FUN_00547190(local_res8);
    *param_5 = uVar3;
    FUN_00545c40(&local_28,param_5);
    FUN_0041b840(local_res8 + 0x28,local_28);
  }
  FUN_0041b800(&local_28);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

