/* Ghidra address: 01598bc0 */
/* Ghidra symbol: FUN_01598bc0 */


undefined8 FUN_01598bc0(longlong param_1,int param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res10;
  undefined4 local_res18;
  undefined4 local_18;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x28);
    local_res10 = param_2;
    local_res18 = param_3;
    if (*(ulonglong *)(lVar1 + 0x16d6) < *(longlong *)(lVar1 + 0x18) + 2U) {
      uVar2 = 0xfffffffb;
    }
    else {
      do {
        local_18 = 0x10 - *(int *)(lVar1 + 0x16f0);
        if (local_res10 < local_18) {
          local_18 = local_res10;
        }
        *(ushort *)(lVar1 + 0x16ee) =
             *(ushort *)(lVar1 + 0x16ee) |
             (ushort)((local_res18 & (1 << ((byte)local_18 & 0x1f)) - 1U) <<
                     ((byte)*(undefined4 *)(lVar1 + 0x16f0) & 0x1f));
        *(int *)(lVar1 + 0x16f0) = *(int *)(lVar1 + 0x16f0) + local_18;
        FUN_015a2050(lVar1);
        local_res18 = (int)local_res18 >> ((byte)local_18 & 0x1f);
        local_res10 = local_res10 - local_18;
      } while (local_res10 != 0);
      uVar2 = 0;
    }
  }
  return uVar2;
}

