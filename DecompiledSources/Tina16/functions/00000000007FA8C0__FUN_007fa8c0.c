/* Ghidra address: 007fa8c0 */
/* Ghidra symbol: FUN_007fa8c0 */


void FUN_007fa8c0(longlong param_1,char param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0065b870(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 8));
  thunk_FUN_041111bc(uVar2,*(undefined4 *)
                            (&DAT_01e140b0 +
                            (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x70) + 0x20) * 0x14),
                     (longlong)
                     *(int *)(&DAT_01e140d8 +
                             (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x70) + 0x3c) * 4),
                     -(uint)(param_2 != '\0'));
  if (0 < *(int *)(*(longlong *)(param_1 + 0x70) + 0x2c)) {
    uVar2 = FUN_0065b870(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 8));
    thunk_FUN_041111bc(uVar2,*(undefined4 *)
                              (&DAT_01e140b4 +
                              (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x70) + 0x20) * 0x14),
                       (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0x2c),0);
  }
  if (0 < *(int *)(*(longlong *)(param_1 + 0x70) + 0x40)) {
    uVar2 = FUN_0065b870(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 8));
    thunk_FUN_041111bc(uVar2,*(undefined4 *)
                              (&DAT_01e140b8 +
                              (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x70) + 0x20) * 0x14),
                       (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0x40),0);
  }
  if (0 < *(int *)(*(longlong *)(param_1 + 0x70) + 0x38)) {
    uVar2 = FUN_0065b870(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 8));
    thunk_FUN_041111bc(uVar2,*(undefined4 *)
                              (&DAT_01e140bc +
                              (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x70) + 0x20) * 0x14),
                       (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0x38),0);
  }
  uVar2 = FUN_0065b870(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 8));
  iVar1 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x30));
  thunk_FUN_041111bc(uVar2,*(undefined4 *)
                            (&DAT_01e140c0 +
                            (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x70) + 0x20) * 0x14),
                     (longlong)iVar1,0);
  return;
}

