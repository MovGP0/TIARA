/* Ghidra address: 0069e100 */
/* Ghidra symbol: FUN_0069e100 */


undefined8 FUN_0069e100(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  int *local_e0;
  int *local_d8;
  uint local_bc;
  undefined8 local_b8;
  undefined1 local_b0;
  short *local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_58;
  short *local_50;
  undefined8 local_48;
  byte local_3d;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  int local_24;
  undefined8 *local_20;
  
  local_80 = auStack_108;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  puVar1 = auStack_108;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    local_30 = FUN_004b6930(&PTR_FUN_00478280,1);
    *(undefined8 *)(param_1 + 0x20) = local_30;
    iVar2 = FUN_0044f060();
    if (iVar2 == 2) {
      local_34 = 6;
      local_3d = 4;
    }
    else {
      local_34 = 2;
      local_3d = 5;
    }
    local_24 = 0;
    local_bc = (uint)local_3d;
    local_e8 = (short *)((ulonglong)local_e8._4_4_ << 0x20);
    local_e0 = &local_24;
    local_d8 = &local_38;
    FUN_0069b8c0(local_34,0,local_bc,0);
    if (local_24 == 0) goto LAB_0069e45d;
    local_20 = (undefined8 *)FUN_004095c0(local_24);
    local_e8 = (short *)CONCAT44(local_e8._4_4_,local_24);
    local_e0 = &local_24;
    local_d8 = &local_38;
    iVar2 = FUN_0069b8c0(local_34,0,local_bc,local_20);
    if (iVar2 == 0) {
      FUN_0069e480(0,local_80);
      goto LAB_0069e45d;
    }
    local_58 = local_20;
    local_3c = 0;
    iVar2 = local_38;
    if (-1 < local_38 + -1) {
      do {
        if (local_3d == 4) {
          local_68 = local_58;
          uVar3 = *local_58;
          FUN_004167d0(&local_88,uVar3);
          local_e8 = (short *)0x0;
          FUN_0069ca70(&DAT_0069c990,1,0,uVar3);
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x80))
                    (*(longlong **)(param_1 + 0x20),local_88);
          local_58 = local_58 + 3;
        }
        else {
          local_70 = local_58;
          local_48 = local_58[1];
          local_50 = (short *)FUN_0069c340(&local_48);
          while (*local_50 != 0) {
            FUN_0041ddd0(&local_98,PTR_PTR_02001d88);
            local_b8 = *local_70;
            local_b0 = 10;
            local_a8 = local_50;
            local_a0 = 10;
            FUN_00442f70(&local_90,local_98,&local_b8,1);
            local_e8 = local_50;
            uVar3 = FUN_0069ca70(&DAT_0069c990,1,0,*local_70);
            (**(code **)(**(longlong **)(param_1 + 0x20) + 0x80))
                      (*(longlong **)(param_1 + 0x20),local_90,uVar3);
            local_50 = (short *)FUN_0069c340(&local_48);
          }
          local_58 = local_58 + 4;
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_004095f0(local_20,local_24);
    puVar1 = local_80;
  }
  local_80 = puVar1;
  local_30 = *(undefined8 *)(param_1 + 0x20);
LAB_0069e45d:
  FUN_00414560(&local_98,3);
  return local_30;
}

