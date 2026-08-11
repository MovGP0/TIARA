/* Ghidra address: 00f58e20 */
/* Ghidra symbol: FUN_00f58e20 */


longlong FUN_00f58e20(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_2c;
  double local_28;
  double local_20;
  
  local_40 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_01b0f8a0(local_res8,0,param_3,param_4);
  FUN_01b0fae0(local_res8,0,2);
  iVar2 = FUN_01b0faf0(local_res8,0);
  local_2c = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_01b0faa0(local_res8,0,local_2c);
      local_2c = local_2c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_01b0fa30(local_res8,0,0);
  local_20 = (double)FUN_016eb0a0(param_3,1);
  local_28 = (double)FUN_016eb0a0(param_3,2);
  *(double *)(local_res8 + 0x58) = (local_20 + local_28) / 2.0;
  if (local_28 <= local_20) {
    uVar3 = FUN_016eb0a0(param_3,4);
    *(undefined8 *)(local_res8 + 0x60) = uVar3;
    uVar3 = FUN_016eb0a0(param_3,3);
    *(undefined8 *)(local_res8 + 0x68) = uVar3;
  }
  else {
    uVar3 = FUN_016eb0a0(param_3,3);
    *(undefined8 *)(local_res8 + 0x60) = uVar3;
    uVar3 = FUN_016eb0a0(param_3,4);
    *(undefined8 *)(local_res8 + 0x68) = uVar3;
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

