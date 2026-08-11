/* Ghidra address: 00706fe0 */
/* Ghidra symbol: FUN_00706fe0 */


longlong FUN_00706fe0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 auStack_f8 [40];
  undefined1 *local_d0;
  undefined4 *local_c8;
  int local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_8c;
  undefined4 local_84;
  
  local_d0 = auStack_f8;
  local_res8 = param_1;
  puVar1 = auStack_f8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_d0;
  }
  local_d0 = puVar1;
  uVar3 = FUN_00707cf0(param_3);
  *(undefined4 *)(local_res8 + 0x28) = uVar3;
  FUN_004b1710(local_res8,0,param_3);
  *(undefined2 *)(local_res8 + 0x2c) = 1;
  *(undefined1 *)(local_res8 + 0x2e) = 0;
  *(undefined1 *)(local_res8 + 0x2f) = 0;
  *(undefined4 *)(local_res8 + 0x48) = 0xffffffff;
  local_b0 = 0x98;
  local_ac = 0x14;
  local_8c = *(undefined4 *)(local_res8 + 0x28);
  local_84 = 0;
  uVar4 = FUN_00707f20(param_3);
  cVar2 = FUN_0065be20(uVar4);
  if (cVar2 != '\0') {
    uVar4 = FUN_00707f20(param_3);
    local_b8 = FUN_0065b870(uVar4);
    local_bc = FUN_004b1870(local_res8);
    local_c8 = &local_b0;
    thunk_FUN_041b2403(local_b8,0x1091,(longlong)local_bc,local_c8);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

