/* Ghidra address: 007d52b0 */
/* Ghidra symbol: FUN_007d52b0 */


void FUN_007d52b0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (((*(int *)(param_1 + 0x90) < 1) || (0x8000 < *(int *)(param_1 + 0x90))) ||
     (*(int *)(param_1 + 0x94) < 1)) {
    FUN_0041ddd0(&local_10,PTR_PTR_02002538);
    uVar1 = FUN_0044d490(&PTR_FUN_00472870,1,local_10);
    FUN_004134c0(uVar1);
  }
  *(undefined4 *)(param_1 + 0x98) = 4;
  *(undefined1 *)(param_1 + 0xa9) = 1;
  FUN_007d7850(param_1,2);
  *(undefined1 *)(param_1 + 0xab) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0x1fffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0x1fffffff;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 1;
  uVar1 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  FUN_007d53e0();
  FUN_00414480(&local_10);
  return;
}

