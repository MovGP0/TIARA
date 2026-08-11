/* Ghidra address: 011ac750 */
/* Ghidra symbol: FUN_011ac750 */


void FUN_011ac750(longlong param_1)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80 [8];
  undefined8 local_40;
  short *local_38;
  short *local_30;
  
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_30 = (short *)0x0;
  local_38 = (short *)0x0;
  local_40 = 0;
  local_88 = 0;
  FUN_00417600(local_80,&DAT_00401390,8);
  *(undefined1 *)(*(longlong *)PTR_DAT_02003af0 + 0x5fe8) = 1;
  iVar3 = 1;
  puVar2 = (undefined8 *)PTR_DAT_020013a0;
  do {
    FUN_00414b50(local_80 + (8 - iVar3),*puVar2);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 9);
  iVar4 = 0;
  FUN_00414480(&local_88);
  iVar3 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x4e0) + -1;
  local_b0 = 1;
  if (0 < iVar5) {
    do {
      DAT_02107644 = local_b0 + -1;
      FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_90,
                   *(undefined4 *)(*(longlong *)PTR_DAT_02003af0 + 0x764),local_b0);
      FUN_0043ea00(&local_30,local_90);
      if ((*local_30 != 0x30) && (*local_30 != 0x31)) {
        puVar1 = (undefined2 *)FUN_00414de0(&local_30);
        *puVar1 = 0x31;
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x700),
                     *(undefined4 *)(*(longlong *)PTR_DAT_02003af0 + 0x764),local_b0,&DAT_011acc90);
      }
      FUN_00414480(&local_40);
      if (*local_30 == 0x31) {
        local_ac = 0;
        iVar6 = iVar3;
        if (-1 < iVar3 + -1) {
          do {
            FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_98,local_ac,local_b0);
            FUN_0043ea00(&local_38,local_98);
            if (*local_38 == 0x30) {
              FUN_00416ad0(&local_40,&DAT_011acca0);
            }
            FUN_00416ad0(&local_40,local_80[8 - (iVar3 - local_ac)]);
            local_ac = local_ac + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        FUN_00416ad0(&local_40,&DAT_011accb0);
        (&DAT_02107244)[DAT_02107644] = 1;
        *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x7cc + (longlong)iVar4 * 4) = DAT_02107644;
        iVar4 = iVar4 + 1;
        FUN_00416ad0(&local_88,local_40);
      }
      else {
        (&DAT_02107244)[DAT_02107644] = 0;
      }
      local_b0 = local_b0 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x768) = iVar4;
  *(undefined1 *)(*(longlong *)PTR_DAT_02003af0 + 0x5fe9) = 1;
  if (local_88 == 0) {
    iVar3 = *(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764);
    local_b0 = 1;
    puVar2 = (undefined8 *)PTR_DAT_020013a0;
    if (0 < iVar3) {
      do {
        if (local_b0 == 1) {
          FUN_00416cd0(&local_88,4,local_88,*puVar2,&DAT_011accc0,*puVar2);
        }
        else {
          FUN_00416cd0(&local_88,5,local_88,&DAT_011accb0,*puVar2,&DAT_011accc0,*puVar2);
        }
        local_b0 = local_b0 + 1;
        iVar3 = iVar3 + -1;
        puVar2 = puVar2 + 1;
      } while (iVar3 != 0);
    }
    FUN_00416ad0(&local_88,&LAB_011accd0);
  }
  iVar3 = 0;
  if (local_88 != 0) {
    iVar3 = *(int *)(local_88 + -4);
  }
  FUN_00416dc0(&local_a0,local_88,1,iVar3 + -1);
  FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02003af0 + 0x710),local_a0);
  *(undefined1 *)(*(longlong *)PTR_DAT_02003af0 + 0x5fe9) = 0;
  FUN_00805990(*(undefined8 *)PTR_DAT_02001d58);
  FUN_00805990(*(undefined8 *)PTR_DAT_020040c0);
  FUN_00805990(*(undefined8 *)PTR_DAT_02004ae8);
  FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02003af0 + 0x710),&local_a8);
  FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001d60 + 0x6f8),local_a8);
  *(undefined4 *)PTR_DAT_02004708 = 0xa28;
  FUN_00414480(&local_a8);
  FUN_00414560(&local_a0,4);
  FUN_00417840(local_80,&DAT_00401390,8);
  FUN_00414560(&local_40,3);
  return;
}

