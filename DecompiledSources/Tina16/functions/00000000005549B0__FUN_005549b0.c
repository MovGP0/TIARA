/* Ghidra address: 005549b0 */
/* Ghidra symbol: FUN_005549b0 */


longlong FUN_005549b0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
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
  FUN_00546280(local_res8,0,param_3,param_4);
  plVar2 = (longlong *)FUN_00547190(local_res8);
  if (*plVar2 != 0) {
    puVar3 = (undefined8 *)FUN_00547190(local_res8);
    uVar4 = FUN_00546050(*(undefined8 *)(local_res8 + 0x18),&LAB_00551d28,local_res8,*puVar3);
    *(undefined8 *)(local_res8 + 0x30) = uVar4;
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

