/* Ghidra address: 00a93d20 */
/* Ghidra symbol: FUN_00a93d20 */


longlong FUN_00a93d20(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined4 param_5)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
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
  FUN_00410e60(local_res8,0);
  *(undefined8 *)(local_res8 + 0x10) = param_3;
  plVar2 = (longlong *)FUN_00a4dfc0(&PTR_FUN_00a4d8c8,1);
  *(longlong **)(local_res8 + 0x38) = plVar2;
  (**(code **)(*plVar2 + 0x10))(plVar2,param_4);
  *(undefined4 *)(local_res8 + 0x30) = param_5;
  uVar3 = FUN_00a72ca0(&DAT_00a69b68,1);
  *(undefined8 *)(local_res8 + 8) = uVar3;
  FUN_00a947a0(local_res8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

