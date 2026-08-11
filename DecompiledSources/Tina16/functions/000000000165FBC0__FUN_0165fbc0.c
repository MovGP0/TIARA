/* Ghidra address: 0165fbc0 */
/* Ghidra symbol: FUN_0165fbc0 */


void FUN_0165fbc0(longlong param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = (longlong)(int)(param_2 + param_3) / 2 & 0xffffffff;
  uVar4 = param_2;
  uVar5 = param_3;
  do {
    while (uVar2 = (uint)uVar3,
          *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0) + 0x1d8) +
                   0x4c + (longlong)
                          *(int *)(*(longlong *)(param_1 + 0x378) + (longlong)(int)uVar4 * 4) * 0x70
                  ) <
          *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0) + 0x1d8) +
                   0x4c + (longlong)
                          *(int *)(*(longlong *)(param_1 + 0x378) + (longlong)(int)uVar2 * 4) * 0x70
                  )) {
      uVar4 = uVar4 + 1;
    }
    while (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0) + 0x1d8) +
                    0x4c + (longlong)
                           *(int *)(*(longlong *)(param_1 + 0x378) + (longlong)(int)uVar2 * 4) *
                           0x70) <
           *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0) + 0x1d8) +
                    0x4c + (longlong)
                           *(int *)(*(longlong *)(param_1 + 0x378) + (longlong)(int)uVar5 * 4) *
                           0x70)) {
      uVar5 = uVar5 - 1;
    }
    if ((int)uVar4 <= (int)uVar5) {
      if ((uVar2 == uVar4) || (uVar2 == uVar5)) {
        uVar3 = (ulonglong)(uVar2 ^ uVar4 ^ uVar5);
      }
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x378) + (longlong)(int)uVar4 * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 0x378) + (longlong)(int)uVar4 * 4) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x378) + (longlong)(int)uVar5 * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 0x378) + (longlong)(int)uVar5 * 4) = uVar1;
      uVar4 = uVar4 + 1;
      uVar5 = uVar5 - 1;
    }
  } while ((int)uVar4 <= (int)uVar5);
  if ((int)param_2 < (int)uVar5) {
    FUN_0165fbc0(param_1,param_2);
  }
  if ((int)uVar4 < (int)param_3) {
    FUN_0165fbc0(param_1,uVar4,param_3);
  }
  return;
}

