/* Ghidra address: 008736b0 */
/* Ghidra symbol: FUN_008736b0 */


longlong FUN_008736b0(longlong param_1,char param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_50 [2];
  undefined1 local_48;
  undefined1 *local_40;
  bool local_2d;
  int local_2c [7];
  
  local_40 = auStack_88;
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_00410e60(local_res8,0);
  *(undefined4 *)(local_res8 + 0x28) = param_3;
  *(undefined4 *)(local_res8 + 0x2c) = param_4;
  *(undefined4 *)(local_res8 + 0x30) = param_5;
  iVar2 = thunk_FUN_041c63c1(*(undefined4 *)(local_res8 + 0x28),local_2c);
  local_2d = iVar2 == 0;
  if ((local_2d) && (*(int *)(local_res8 + 0x28) == 0x4e9f)) {
    *(undefined4 *)(local_res8 + 0x28) = 0x4e4;
    iVar2 = thunk_FUN_041c63c1(0x4e4,local_2c);
    local_2d = iVar2 == 0;
    if (local_2d) {
      *(undefined4 *)(local_res8 + 0x28) = 0x1b5;
      iVar2 = thunk_FUN_041c63c1(0x1b5,local_2c);
      local_2d = iVar2 == 0;
    }
  }
  if (local_2d != false) {
    local_50[0] = *(undefined4 *)(local_res8 + 0x28);
    local_48 = 0;
    local_68 = 0;
    uVar3 = FUN_0044d8d0(&PTR_FUN_0086d2e8,1,PTR_PTR_02004250,local_50);
    FUN_004134c0(uVar3);
  }
  *(int *)(local_res8 + 0x1c) = local_2c[0];
  *(bool *)(local_res8 + 0x18) = local_2c[0] == 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

