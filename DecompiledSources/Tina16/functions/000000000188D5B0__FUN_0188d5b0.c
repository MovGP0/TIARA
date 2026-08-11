/* Ghidra address: 0188d5b0 */
/* Ghidra symbol: FUN_0188d5b0 */


void FUN_0188d5b0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_f8 [32];
  int local_d8;
  int *local_d0;
  int *local_c8;
  uint local_b4;
  ulonglong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined1 *local_90;
  undefined8 *local_80;
  undefined8 *local_78;
  longlong *local_68;
  byte local_59;
  int local_58;
  undefined4 local_54;
  undefined8 *local_50;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined8 *local_38;
  undefined8 local_30 [2];
  
  local_90 = auStack_f8;
  local_a8 = (longlong *)0x0;
  local_b0 = 0;
  local_a0 = 0;
  local_98 = (longlong *)0x0;
  FUN_0188cfe0(param_1);
  iVar1 = FUN_0044f060();
  if (iVar1 == 2) {
    local_54 = 6;
    local_59 = 4;
  }
  else {
    local_54 = 2;
    local_59 = 5;
  }
  local_3c = 0;
  local_b4 = (uint)local_59;
  local_d8 = 0;
  local_d0 = &local_3c;
  local_c8 = &local_58;
  FUN_0069b8c0(local_54,0,local_b4,0);
  if (local_3c != 0) {
    local_38 = (undefined8 *)FUN_004095c0(local_3c);
    local_30[0] = FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_004b67b0(local_30[0],0);
    local_d8 = local_3c;
    local_d0 = &local_3c;
    local_c8 = &local_58;
    iVar1 = FUN_0069b8c0(local_54,0,local_b4,local_38);
    if (iVar1 == 0) {
      FUN_0188d8a0(0,local_90);
    }
    else {
      local_50 = local_38;
      local_40 = 0;
      iVar1 = local_58;
      if (-1 < local_58 + -1) {
        do {
          if (local_59 == 4) {
            local_78 = local_50;
            FUN_004167d0(&local_98,*local_50);
            FUN_0188d3b0(auStack_f8,local_98,0);
            local_50 = local_50 + 3;
          }
          else {
            local_80 = local_50;
            local_68 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
            FUN_004167d0(&local_a0,local_80[1]);
            FUN_0180d660(local_a0,local_68,0x2c);
            iVar2 = (**(code **)(*local_68 + 0x28))();
            local_44 = 0;
            if (-1 < iVar2 + -1) {
              do {
                FUN_004167d0(&local_a8,*local_80);
                (**(code **)(*local_68 + 0x18))(local_68,&local_b0,local_44);
                FUN_0188d3b0(auStack_f8,local_a8,local_b0);
                local_44 = local_44 + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
            FUN_00410f20(local_68);
            local_50 = local_50 + 4;
          }
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      FUN_0188d4e0(auStack_f8);
      FUN_00452320(local_30);
      FUN_004095f0(local_38,local_3c);
    }
  }
  FUN_00414560(&local_b0,4);
  return;
}

