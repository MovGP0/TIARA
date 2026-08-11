/* Ghidra address: 01661d70 */
/* Ghidra symbol: FUN_01661d70 */


undefined8 FUN_01661d70(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x40) + 400) + 8 +
                   (longlong)param_3 * 0x40);
  uVar2 = (ulonglong)uVar1;
  if ((int)uVar1 <=
      *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x40) + 400) + 8 +
              (longlong)param_2 * 0x40)) {
    if (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x40) + 400) + 8 +
                (longlong)param_3 * 0x40) !=
        *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x40) + 400) + 8 +
                (longlong)param_2 * 0x40)) {
      return 0;
    }
    uVar1 = *(uint *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x40) + 400) +
                      0x10 + (longlong)param_3 * 0x40);
    uVar2 = (ulonglong)uVar1;
    if ((int)uVar1 <=
        *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x40) + 400) + 0x10 +
                (longlong)param_2 * 0x40)) {
      if (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x40) + 400) + 0x10 +
                  (longlong)param_3 * 0x40) !=
          *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x40) + 400) + 0x10 +
                  (longlong)param_2 * 0x40)) {
        return 0;
      }
      uVar1 = *(uint *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x40) + 400) +
                        0x18 + (longlong)param_3 * 0x40);
      uVar2 = (ulonglong)uVar1;
      if ((int)uVar1 <=
          *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x40) + 400) + 0x18 +
                  (longlong)param_2 * 0x40)) {
        if (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x40) + 400) + 0x18
                    + (longlong)param_3 * 0x40) !=
            *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x40) + 400) + 0x18
                    + (longlong)param_2 * 0x40)) {
          return 0;
        }
        uVar1 = *(uint *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x40) + 400) +
                          0x1c + (longlong)param_3 * 0x40);
        uVar2 = (ulonglong)uVar1;
        if ((int)uVar1 <=
            *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x40) + 400) + 0x1c
                    + (longlong)param_2 * 0x40)) {
          return 0;
        }
      }
    }
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}

