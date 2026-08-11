/* Ghidra address: 00f52320 */
/* Ghidra symbol: FUN_00f52320 */


undefined1 FUN_00f52320(longlong *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_res20;
  undefined1 auStack_108 [32];
  int local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  longlong local_80;
  longlong local_78;
  longlong local_68;
  longlong *local_60;
  byte local_51;
  undefined8 local_50;
  int local_48;
  uint local_44;
  undefined1 local_29;
  
  local_90 = auStack_108;
  local_a0 = 0;
  local_a8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_98 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  local_29 = 0;
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  if (*(char *)((longlong)param_1 + 0x49c) != '\x01') {
    (**(code **)(*param_1 + 0x20))(param_1);
    *(undefined4 *)(param_1 + 0x93) = 0;
    for (local_48 = 0; local_48 <= (int)(uint)*(ushort *)(param_1 + 0x10e); local_48 = local_48 + 1)
    {
      local_60 = param_1 + 0xbb;
      local_e8 = local_48;
      local_e0 = 0;
      local_d8 = 0;
      uVar4 = FUN_017c58f0(*(undefined8 *)((longlong)param_1 + 0x872),
                           *(undefined8 *)((longlong)param_1 + 0x87a),0,(short)param_1[0x10e]);
      *(undefined8 *)param_1[0x272] = uVar4;
      FUN_016f5520(param_1,0);
      local_51 = FUN_01374d30(param_1,0);
      if (*(char *)((longlong)param_1 + 0x325) == '\0') {
        *(byte *)((longlong)param_1 + 0x326) = 0 < local_48 & local_51;
        FUN_016f5430(param_1);
      }
      else {
        FUN_016f6430(param_1,1,0);
        FUN_016f3620(param_1,0);
      }
      if (*(char *)((longlong)param_1 + 0x324) != '\0') {
        if (param_2 == '\0') {
          uVar4 = FUN_01b04b70(&PTR_FUN_01af3038);
          FUN_004134c0(uVar4);
        }
        else {
          FUN_00de8980(&local_98);
          FUN_01b05000(local_98);
        }
      }
      local_68 = param_1[0x16];
      FUN_01cc4620(local_68,*(undefined8 *)param_1[0x272]);
      iVar3 = *(int *)((longlong)param_1 + 0x691);
      local_44 = 0;
      if (-1 < iVar3 + -1) {
        do {
          uVar1 = local_44;
          local_78 = param_1[0x9e];
          if (*(uint *)(local_78 + 0x10) <= local_44) {
            FUN_00594f90();
          }
          lVar2 = (longlong)(int)local_44;
          if (**(char **)(*(longlong *)(local_78 + 8) + lVar2 * 8) != '\0') {
            local_80 = param_1[0x9e];
            if (*(uint *)(local_80 + 0x10) <= uVar1) {
              FUN_00594f90();
            }
            local_50 = FUN_017c83b0(param_1,*(undefined8 *)(*(longlong *)(local_80 + 8) + lVar2 * 8)
                                   );
            FUN_01cc46b0(local_68,local_44,local_50);
          }
          local_44 = local_44 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  FUN_00414480(&local_c0);
  FUN_00414520(&local_b8);
  FUN_00414590(&local_b0,2);
  FUN_00414560(&local_a0,2);
  FUN_00414480(&local_res20);
  return local_29;
}

