/* Ghidra address: 01d34620 */
/* Ghidra symbol: FUN_01d34620 */


longlong FUN_01d34620(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_30;
  int local_2c;
  longlong local_28;
  ushort local_20 [8];
  
  local_40 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_01d331a0(local_res8,0,param_3);
  local_2c = *(int *)(local_res8 + 0x10);
  local_30 = *(undefined4 *)(local_res8 + 0x14);
  *(undefined4 *)(local_res8 + 0x10) = 0;
  *(undefined4 *)(local_res8 + 0x14) = 0;
  FUN_01d34f70(local_res8,local_30);
  *(int *)(local_res8 + 0x10) = local_2c;
  local_30 = 0;
  iVar3 = local_2c;
  if (-1 < local_2c + -1) {
    do {
      FUN_01d30e90(param_3,local_20);
      FUN_01d30f70(param_3);
      local_28 = FUN_01d32e10(DAT_03567a40,local_20[0]);
      if (local_28 != 0) {
        uVar2 = (**(code **)(local_28 + 8))(local_28,1,param_3);
        FUN_01d34a00(local_res8,local_30,uVar2);
      }
      local_30 = local_30 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

