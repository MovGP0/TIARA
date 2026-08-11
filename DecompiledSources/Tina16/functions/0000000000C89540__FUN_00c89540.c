/* Ghidra address: 00c89540 */
/* Ghidra symbol: FUN_00c89540 */


void FUN_00c89540(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((char)param_1[0xf] == '\0') {
    uVar1 = FUN_0044d490(&PTR_FUN_00b69b48,1,L"Hash not initialized");
    FUN_004134c0(uVar1);
  }
  *(undefined1 *)((longlong)param_1 + (ulonglong)*(uint *)(param_1 + 0x11) + 0x9c) = 0x80;
  if (0x37 < *(uint *)(param_1 + 0x11)) {
    FUN_00c88710(param_1);
  }
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_1 + 0x84);
  *(int *)(param_1 + 0x1b) = (int)param_1[0x10];
  FUN_00c88710(param_1);
  FUN_00409a70((longlong)param_1 + 0x8c,param_2,0x10);
  (**(code **)(*param_1 + 0xb8))(param_1);
  return;
}

