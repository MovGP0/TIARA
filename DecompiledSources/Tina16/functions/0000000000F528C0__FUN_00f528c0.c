/* Ghidra address: 00f528c0 */
/* Ghidra symbol: FUN_00f528c0 */


undefined1
FUN_00f528c0(longlong *param_1,char param_2,undefined1 param_3,undefined8 param_4,undefined8 param_5
            )

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_108 [32];
  int local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_78;
  longlong *local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  uint local_44;
  undefined1 local_29;
  
  local_a0 = auStack_108;
  local_a8 = 0;
  local_b0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  FUN_00414610(param_5);
  local_29 = 0;
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  if (*(char *)((longlong)param_1 + 0x49c) != '\x01') {
    (**(code **)(*param_1 + 0x20))(param_1);
    FUN_00f518b0(param_1,1,param_3);
    FUN_016f6430(param_1,7,0);
    *(undefined4 *)(param_1 + 0x93) = 0;
    FUN_017dcfd0(param_1[0x1b],1,1);
    local_48 = 0;
    while (local_48 <= (int)(uint)*(ushort *)((longlong)param_1 + 0x963)) {
      local_70 = param_1 + 0xbb;
      local_e8 = local_48;
      local_e0 = *(undefined1 *)((longlong)param_1 + 0x975);
      local_d8 = 0;
      lVar3 = FUN_017c58f0(*(undefined8 *)((longlong)param_1 + 0x965),
                           *(undefined8 *)((longlong)param_1 + 0x96d),0,
                           *(undefined2 *)((longlong)param_1 + 0x963));
      param_1[0x74] = lVar3;
      FUN_016f6430(param_1,8,(double)param_1[0x74] * 6.283185307179586);
      FUN_016f3620(param_1,(double)param_1[0x74] * 6.283185307179586);
      local_78 = param_1[0x16];
      FUN_01cc47e0(local_78,param_1[0x74]);
      iVar2 = *(int *)((longlong)param_1 + 0x691);
      local_44 = 0;
      if (-1 < iVar2 + -1) {
        do {
          uVar1 = local_44;
          local_88 = param_1[0x9e];
          if (*(uint *)(local_88 + 0x10) <= local_44) {
            FUN_00594f90();
          }
          if (**(char **)(*(longlong *)(local_88 + 8) + (longlong)(int)local_44 * 8) != '\0') {
            if (param_2 == '\0') {
              local_98 = param_1[0x9e];
              if (*(uint *)(local_98 + 0x10) <= uVar1) {
                FUN_00594f90();
              }
              FUN_017c8e10(local_68,param_1);
            }
            else {
              local_90 = param_1[0x9e];
              if (*(uint *)(local_90 + 0x10) <= uVar1) {
                FUN_00594f90();
              }
              FUN_017c8650(local_68,param_1);
            }
            local_50 = FUN_00c44590(local_68);
            local_58 = FUN_00c445d0(local_68);
            FUN_01cc48a0(local_78,local_44,local_50,local_58);
          }
          local_44 = local_44 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_48 = local_48 + 1;
      *(int *)(param_1 + 0x93) = (int)param_1[0x93] + 1;
    }
  }
  FUN_00414480(&local_c8);
  FUN_00414520(&local_c0);
  FUN_00414590(&local_b8,2);
  FUN_00414480(&local_a8);
  FUN_00414480(&param_5);
  return local_29;
}

