/* Ghidra address: 0165eda0 */
/* Ghidra symbol: FUN_0165eda0 */


void FUN_0165eda0(longlong param_1,int param_2)

{
  int *piVar1;
  ulonglong uVar2;
  
  piVar1 = (int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x5d0) + 0x1d8) +
                  (longlong)param_2 * 0x70);
  if (((*piVar1 != -1) && (uVar2 = ~*(ulonglong *)(piVar1 + 2), uVar2 < 10000000)) &&
     (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x5d0) + 0x13ae8) + 8 +
              uVar2 * 0x18) == -1)) {
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x5d0) + 0x13ae8) + 8 +
     uVar2 * 0x18) = *(undefined4 *)(param_1 + 0x6c);
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  }
  return;
}

