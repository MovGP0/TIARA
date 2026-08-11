/* Ghidra address: 007e77f0 */
/* Ghidra symbol: FUN_007e77f0 */


void FUN_007e77f0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *local_28;
  longlong local_20;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  local_28 = FUN_007e7790;
  local_20 = param_1;
  FUN_007dcc20(&local_28,*(undefined8 *)(param_2 + 0xd0),param_2);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00419260(param_1 + 0x18,&DAT_007e7328,1,(longlong)*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x20) = 0;
    local_28 = FUN_007e7790;
    local_20 = param_1;
    FUN_007dcc20(&local_28,*(undefined8 *)(param_2 + 0xd0),param_2);
    uVar1 = thunk_FUN_03a567f3(param_1 + 0x18,*(undefined4 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x28) = uVar1;
  }
  return;
}

