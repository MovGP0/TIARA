/* Ghidra address: 0165e350 */
/* Ghidra symbol: FUN_0165e350 */


ulonglong FUN_0165e350(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(char *)(*(longlong *)(param_1 + 0x90) + 0x59f) != '\0') {
    iVar1 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x5d0) + 0x1c8) +
                    (longlong)param_3 * 0x28);
    return (ulonglong)
           CONCAT31((int3)((uint)iVar1 >> 8),
                    *(int *)(*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x5d0) + 0x1c8) +
                            (longlong)param_2 * 0x28) < iVar1);
  }
  uVar2 = *(uint *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x5d0) + 0x1c8) +
                    0x18 + (longlong)param_3 * 0x28);
  uVar3 = (ulonglong)uVar2;
  if ((int)uVar2 <=
      *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x5d0) + 0x1c8) + 0x18 +
              (longlong)param_2 * 0x28)) {
    if (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x5d0) + 0x1c8) + 0x18
                + (longlong)param_3 * 0x28) !=
        *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x5d0) + 0x1c8) + 0x18
                + (longlong)param_2 * 0x28)) {
      return 0;
    }
    uVar2 = *(uint *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x5d0) + 0x1c8) +
                      8 + (longlong)param_3 * 0x28);
    uVar3 = (ulonglong)uVar2;
    if ((int)uVar2 <=
        *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x5d0) + 0x1c8) + 8 +
                (longlong)param_2 * 0x28)) {
      if (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x5d0) + 0x1c8) + 8 +
                  (longlong)param_3 * 0x28) !=
          *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x5d0) + 0x1c8) + 8 +
                  (longlong)param_2 * 0x28)) {
        return 0;
      }
      uVar2 = *(uint *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x5d0) + 0x1c8)
                        + 0xc + (longlong)param_3 * 0x28);
      uVar3 = (ulonglong)uVar2;
      if ((int)uVar2 <=
          *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x5d0) + 0x1c8) + 0xc
                  + (longlong)param_2 * 0x28)) {
        return 0;
      }
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}

