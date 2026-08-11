/* Ghidra address: 016982a0 */
/* Ghidra symbol: FUN_016982a0 */


longlong FUN_016982a0(longlong param_1,char param_2,char param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6)

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
  FUN_00410e60(local_res8,0);
  if (param_3 == '\0') {
    uVar2 = FUN_01695f20(&DAT_01694800,1,1);
    *(undefined8 *)(local_res8 + 0x10) = uVar2;
  }
  else {
    uVar2 = FUN_01695f20(&DAT_01694800,1,2);
    *(undefined8 *)(local_res8 + 0x10) = uVar2;
  }
  *(undefined2 *)(local_res8 + 8) = 0;
  *(undefined8 *)(local_res8 + 0x20) = param_6;
  *(undefined8 *)(local_res8 + 0x38) = param_5;
  uVar2 = FUN_00611660(&PTR_FUN_00610c28,1);
  *(undefined8 *)(local_res8 + 0x28) = uVar2;
  uVar2 = FUN_00611660(&PTR_FUN_00610c28,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

