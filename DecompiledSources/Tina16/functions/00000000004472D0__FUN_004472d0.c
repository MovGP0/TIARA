/* Ghidra address: 004472d0 */
/* Ghidra symbol: FUN_004472d0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004472d0(longlong param_1,ulonglong param_2)

{
  char *pcVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined8 local_res10;
  undefined1 local_26 [8];
  byte local_1e [2];
  undefined4 local_1c;
  
  uVar2 = (ushort)(param_2 >> 0x34);
  *(bool *)(*(longlong *)(param_1 + 0x30) + 2) = (uVar2 & 0x800) == 0x800;
  local_1c = uVar2 & 0x7ff;
  local_res10._0_2_ = (short)param_2;
  local_res10._2_2_ = (short)(param_2 >> 0x10);
  local_res10._4_2_ = (short)(param_2 >> 0x20);
  if (((((uVar2 & 0x7ff) == 0) && ((param_2 & 0xf000000000000) == 0)) && (local_res10._4_2_ == 0))
     && ((local_res10._2_2_ == 0 && ((short)local_res10 == 0)))) {
    **(undefined2 **)(param_1 + 0x30) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 3) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 2) = 0;
  }
  else if (local_1c == 0x7ff) {
    if (((((param_2 & 0xf000000000000) == 0) && (local_res10._4_2_ == 0)) &&
        (local_res10._2_2_ == 0)) && ((short)local_res10 == 0)) {
      **(undefined2 **)(param_1 + 0x30) = 0x7ff;
    }
    else {
      **(undefined2 **)(param_1 + 0x30) = 0x800;
      *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 2) = 0;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 3) = 0;
  }
  else {
    local_res10 = (double)param_2;
    if (*(char *)(*(longlong *)(param_1 + 0x30) + 2) != '\0') {
      local_res10 = (double)(param_2 ^ 0x8000000000000000);
    }
    uVar4 = (ulonglong)local_res10;
    if ((uVar2 & 0x7ff) == 0) {
      for (; (uVar4 & 0x8000000000000) == 0; uVar4 = uVar4 * 2) {
        local_1c = local_1c - 1;
      }
    }
    local_1c._2_2_ = (short)((local_1c - 0x3ff) * 0x4d10 >> 0x10);
    local_1c = local_1c._2_2_ + 1;
    **(undefined2 **)(param_1 + 0x30) = (undefined2)local_1c;
    FUN_00410440(local_res10,0x12 - local_1c);
    lVar5 = FUN_0040c770();
    local_res10 = (double)lVar5;
    if (_DAT_01dc04c8 <= local_res10) {
      local_res10 = local_res10 / (double)_DAT_01dc04d0;
      **(short **)(param_1 + 0x30) = **(short **)(param_1 + 0x30) + 1;
    }
    FUN_00447210(param_1,local_26,local_res10);
    iVar3 = 8;
    pbVar6 = local_1e;
    do {
      *(ushort *)(*(longlong *)(param_1 + 0x30) + 3 + (longlong)(iVar3 * -2 + 0x10)) =
           (ushort)(*pbVar6 & 0xf) * 0x100 + (ushort)(*pbVar6 >> 4) + 0x3030;
      iVar3 = iVar3 + -1;
      pbVar6 = pbVar6 + -1;
    } while (iVar3 != -1);
    *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x15) = 0;
    if ((int)**(short **)(param_1 + 0x30) + *(int *)(param_1 + 0x50) < 0) {
      **(undefined2 **)(param_1 + 0x30) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 2) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 3) = 0;
    }
    else {
      iVar3 = (int)**(short **)(param_1 + 0x30) + *(int *)(param_1 + 0x50);
      if (*(int *)(param_1 + 0x48) <= iVar3) {
        iVar3 = *(int *)(param_1 + 0x48);
      }
      if ((iVar3 < 0x12) && (0x34 < *(byte *)(*(longlong *)(param_1 + 0x30) + 3 + (longlong)iVar3)))
      {
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 3 + (longlong)(iVar3 + 1)) = 0;
        do {
          *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 3 + (longlong)iVar3) = 0;
          iVar3 = iVar3 + -1;
          if (iVar3 < 0) {
            *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 3) = 0x31;
            **(short **)(param_1 + 0x30) = **(short **)(param_1 + 0x30) + 1;
            return;
          }
          pcVar1 = (char *)(*(longlong *)(param_1 + 0x30) + 3 + (longlong)iVar3);
          *pcVar1 = *pcVar1 + '\x01';
        } while (0x39 < *(byte *)(*(longlong *)(param_1 + 0x30) + 3 + (longlong)iVar3));
      }
      else {
        if (0x12 < iVar3) {
          iVar3 = 0x12;
        }
        do {
          *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 3 + (longlong)iVar3) = 0;
          iVar3 = iVar3 + -1;
          if (iVar3 < 0) {
            *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 2) = 0;
            return;
          }
        } while (*(char *)(*(longlong *)(param_1 + 0x30) + 3 + (longlong)iVar3) == '0');
      }
    }
  }
  return;
}

