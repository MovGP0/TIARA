/* Ghidra address: 0196c8a0 */
/* Ghidra symbol: FUN_0196c8a0 */


void FUN_0196c8a0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined1 *)(param_1 + 0xc) = 1;
  FUN_00414480(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = FUN_0180bfb0();
  FUN_01809b60(uVar1,&local_10,L"prDefault");
  FUN_00414ad0(param_1 + 0x20,local_10);
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x32) = 1;
  *(undefined4 *)(param_1 + 0x44) = 3;
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_00414480(&local_10);
  return;
}

