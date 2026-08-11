/* Ghidra address: 0195ba70 */
/* Ghidra symbol: FUN_0195ba70 */


void FUN_0195ba70(longlong param_1,ushort param_2)

{
  undefined1 auStack_38 [40];
  
  FUN_0194fba0(param_1,param_2);
  if ((param_2 & 4) != 0) {
    if (((*(byte *)(*(longlong *)(param_1 + 0x1c0) + 0x3d) & 1) == 0) ||
       ((*(byte *)(*(longlong *)(param_1 + 0x1c0) + 0x3d) & 2) != 0)) {
      if (((*(byte *)(*(longlong *)(param_1 + 0x1c0) + 0x3d) & 2) != 0) &&
         ((*(byte *)(*(longlong *)(param_1 + 0x1c0) + 0x3d) & 1) == 0)) {
        FUN_0195ba50(auStack_38,*(longlong *)(param_1 + 0x1c0) + 0x3d,1,0);
      }
    }
    else {
      FUN_0195ba50(auStack_38,*(longlong *)(param_1 + 0x1c0) + 0x3d,0,1);
    }
    FUN_0195b9f0(auStack_38,*(longlong *)(param_1 + 0x1c0) + 8,*(longlong *)(param_1 + 0x1c0) + 0x18
                );
  }
  if ((param_2 & 0x80) != 0) {
    if (((*(byte *)(*(longlong *)(param_1 + 0x1c0) + 0x3d) & 4) == 0) ||
       ((*(byte *)(*(longlong *)(param_1 + 0x1c0) + 0x3d) & 8) != 0)) {
      if (((*(byte *)(*(longlong *)(param_1 + 0x1c0) + 0x3d) & 8) != 0) &&
         ((*(byte *)(*(longlong *)(param_1 + 0x1c0) + 0x3d) & 4) == 0)) {
        FUN_0195ba50(auStack_38,*(longlong *)(param_1 + 0x1c0) + 0x3d,3,2);
      }
    }
    else {
      FUN_0195ba50(auStack_38,*(longlong *)(param_1 + 0x1c0) + 0x3d,2,3);
    }
    FUN_0195b9f0(auStack_38,*(longlong *)(param_1 + 0x1c0) + 0x10,
                 *(longlong *)(param_1 + 0x1c0) + 0x20);
  }
  return;
}

