/* Ghidra address: 0165fa20 */
/* Ghidra symbol: FUN_0165fa20 */


void FUN_0165fa20(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2;
  if (*(char *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0) + 0x1d8) + 0x68
               + lVar3 * 0x70) == '\0') {
    uVar1 = ~*(ulonglong *)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0) + 0x1d8) + 8 +
              lVar3 * 0x70);
    uVar2 = ~*(ulonglong *)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0) + 0x1d8) + 0x10 +
              lVar3 * 0x70);
    if (9999999 < uVar2 || 9999999 < uVar1) {
      if (9999999 >= uVar1) {
        FUN_0165fa20(param_1,uVar1 & 0xffffffff);
      }
      if (9999999 >= uVar2) {
        FUN_0165fa20(param_1,uVar2 & 0xffffffff);
      }
    }
    else if (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0) + 0x1d8) +
                      0x38 + uVar2 * 0x70) <
             *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0) + 0x1d8) +
                      0x38 + uVar1 * 0x70)) {
      FUN_0165fa20(param_1,uVar2 & 0xffffffff);
      FUN_0165fa20(param_1,uVar1 & 0xffffffff);
    }
    else {
      FUN_0165fa20(param_1,uVar1 & 0xffffffff);
      FUN_0165fa20(param_1,uVar2 & 0xffffffff);
    }
    *(int *)(*(longlong *)(param_1 + 0x388) + (longlong)*(int *)(param_1 + 900) * 4) = param_2;
    *(int *)(param_1 + 900) = *(int *)(param_1 + 900) + 1;
    *(undefined1 *)
     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3c0) + 0x5d0) + 0x1d8) + 0x68 +
     lVar3 * 0x70) = 1;
  }
  return;
}

