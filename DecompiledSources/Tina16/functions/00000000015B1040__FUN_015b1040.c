/* Ghidra address: 015b1040 */
/* Ghidra symbol: FUN_015b1040 */


void FUN_015b1040(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *local_38;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x68) +
          (longlong)(int)(*(uint *)(*(longlong *)(param_1 + 0x60) + 0x48) >> 1);
  FUN_00409a70(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x68),lVar1,
               *(uint *)(*(longlong *)(param_1 + 0x60) + 0x48) >> 1);
  local_38 = (uint *)(lVar1 + 0x10);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x88) * 4;
  if (-1 < iVar5 + -5) {
    iVar5 = iVar5 + -4;
    do {
      uVar2 = FUN_015ab2d0(*(undefined4 *)
                            (&DAT_01f6e5e4 + (longlong)(int)(*local_38 >> 8 & 0xff) * 4),8);
      uVar3 = FUN_015ab2d0(*(undefined4 *)
                            (&DAT_01f6e5e4 + (longlong)(int)(*local_38 >> 0x10 & 0xff) * 4),0x10);
      uVar4 = FUN_015ab2d0(*(undefined4 *)(&DAT_01f6e5e4 + (longlong)(int)(*local_38 >> 0x18) * 4),
                           0x18);
      *local_38 = *(uint *)(&DAT_01f6e5e4 + (longlong)(int)(*local_38 & 0xff) * 4) ^ uVar2 ^ uVar3 ^
                  uVar4;
      local_38 = local_38 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

