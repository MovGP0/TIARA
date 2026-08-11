/* Ghidra address: 00ac40d0 */
/* Ghidra symbol: FUN_00ac40d0 */


longlong FUN_00ac40d0(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     longlong param_5,undefined8 param_6)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong local_res8;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  int local_54;
  undefined1 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  int local_24;
  undefined8 local_20 [2];
  
  local_50 = auStack_88;
  local_20[0] = 0;
  local_res8 = param_1;
  puVar2 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_50;
  }
  local_50 = puVar2;
  local_68 = param_5;
  local_60 = param_6;
  FUN_00ac2090(local_res8,0,param_3,param_4);
  local_54 = *(int *)(param_5 + 0x10) + -1;
  local_24 = 0;
  iVar3 = *(int *)(param_5 + 0x10);
  if (-1 < local_54) {
    do {
      local_54 = iVar3;
      local_30 = FUN_004aeac0(param_5,local_24);
      bVar1 = *(byte *)(local_30 + 8);
      if (bVar1 < 0x2d) {
        if (bVar1 == 0x2c) {
          *(undefined4 *)(local_res8 + 0x1b8) = *(undefined4 *)(local_30 + 0x18);
        }
        else if (bVar1 == 4) {
          FUN_00ac2dc0(local_res8,*(undefined4 *)(local_30 + 0x30),*(undefined8 *)(local_30 + 0x28))
          ;
        }
        else if (bVar1 == 0x1d) {
          *(bool *)(local_res8 + 0xf0) = *(int *)(local_30 + 0x18) == 0;
        }
        else if (bVar1 == 0x2b) {
          *(undefined4 *)(local_res8 + 0x1bc) = *(undefined4 *)(local_30 + 0x18);
        }
      }
      else if (bVar1 == 0x48) {
        local_40 = *(undefined8 *)(local_30 + 0x28);
        iVar3 = FUN_0043e420(local_40,&LAB_00ac444c);
        *(bool *)(local_res8 + 0x1c0) = iVar3 == 0;
      }
      else if (bVar1 == 0x4e) {
        FUN_00414480(local_20);
        local_38 = *(undefined8 *)(local_30 + 0x28);
        FUN_0043ea00(local_20,local_38);
        FUN_00414ad0(local_res8 + 0x1a8,local_20[0]);
        FUN_00414480(local_20);
      }
      local_24 = local_24 + 1;
      local_54 = local_54 + -1;
      iVar3 = local_54;
    } while (local_54 != 0);
  }
  FUN_00ac4570(local_res8);
  FUN_00ac4920(local_res8);
  *(undefined4 *)(local_res8 + 400) = *(undefined4 *)(*(longlong *)(local_res8 + 0x1a0) + 0x98);
  *(undefined4 *)(local_res8 + 0x194) = *(undefined4 *)(*(longlong *)(local_res8 + 0x1a0) + 0x9c);
  FUN_00414480(local_20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

