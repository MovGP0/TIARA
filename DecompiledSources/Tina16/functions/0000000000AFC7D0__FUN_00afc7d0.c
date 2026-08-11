/* Ghidra address: 00afc7d0 */
/* Ghidra symbol: FUN_00afc7d0 */


void FUN_00afc7d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0x8b0) + 0x2a8) == 0) {
    uVar1 = FUN_00a49240(&PTR_FUN_00a42c60,1);
    *(undefined8 *)(*(longlong *)(param_1 + 0x8b0) + 0x2a8) = uVar1;
    FUN_004b67b0(uVar1,1);
    FUN_00a2a230(*(undefined8 *)(*(longlong *)(param_1 + 0x8b0) + 0x2a8),
                 *(undefined4 *)(param_1 + 0x4c8));
    *(ushort *)(param_1 + 0x8a0) = *(ushort *)(param_1 + 0x8a0) | 0x10;
  }
  (**(code **)(**(longlong **)(param_1 + 0x8b0) + 0x10))(*(longlong **)(param_1 + 0x8b0));
  FUN_00aa6130(*(undefined8 *)(param_1 + 0x8b0),*(undefined1 *)(param_1 + 0x2c8));
  FUN_00afe240(param_1);
  FUN_009ec420(local_20,*(undefined8 *)(param_1 + 0x4b0));
  FUN_009ec420(&local_28,*(undefined8 *)(param_1 + 0x4b8));
  FUN_00aa71d0(*(undefined8 *)(param_1 + 0x8b0),local_20[0],local_28,
               *(undefined4 *)(param_1 + 0x4c0),*(undefined4 *)(param_1 + 0x4a8),
               *(undefined4 *)(param_1 + 0x494),*(undefined4 *)(param_1 + 0x498),
               *(undefined4 *)(param_1 + 0x49c),*(undefined4 *)(param_1 + 0x490),
               (*(ushort *)(param_1 + 0x79a) & 1) != 0,(*(ushort *)(param_1 + 0x79a) & 2) == 0,
               *(undefined4 *)(param_1 + 0x4a4),*(undefined1 *)(param_1 + 0x4a0),
               *(undefined4 *)(param_1 + 0x4d8),*(undefined4 *)(param_1 + 0x4d4));
  FUN_00414560(&local_28,2);
  return;
}

