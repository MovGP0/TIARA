/* Ghidra address: 01bcf690 */
/* Ghidra symbol: FUN_01bcf690 */


void FUN_01bcf690(longlong *param_1)

{
  undefined4 uVar1;
  int local_1c;
  
  FUN_01bff4c0(param_1);
  local_1c = 0;
  thunk_FUN_03e0f7b4(0x1022,0,&local_1c,0);
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xff00000f;
  *(undefined4 *)(param_1 + 0x10) = 0xff00000f;
  *(undefined4 *)(param_1 + 0x11) = 0xff000008;
  (**(code **)(*param_1 + 0x88))(param_1,0xff00000f);
  if (local_1c == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0xff00000f;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0xff000004;
  }
  *(undefined4 *)((longlong)param_1 + 0x94) = 0xff000011;
  *(undefined4 *)(param_1 + 0x13) = 0xff000014;
  *(undefined4 *)(param_1 + 0x12) = 0x20000000;
  (**(code **)(*param_1 + 0x90))(param_1,0xff000008);
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0xff000014;
  *(undefined4 *)(param_1 + 0x19) = 0xff000016;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0xff000010;
  *(undefined4 *)(param_1 + 0x1a) = 0xff000015;
  uVar1 = FUN_00635840(*(undefined4 *)((longlong)param_1 + 0x8c),0x13);
  *(undefined4 *)(param_1 + 0x17) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0x20000000;
  *(undefined4 *)(param_1 + 0x15) = 0x20000000;
  if (local_1c == 0) {
    *(undefined4 *)((longlong)param_1 + 0xb4) = 0xff00000d;
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0xb4) = 0xff00001d;
  }
  *(undefined4 *)(param_1 + 0x16) = 0xff00000e;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xff000010;
  uVar1 = FUN_00635840(*(undefined4 *)((longlong)param_1 + 0x8c),0x12);
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar1;
  return;
}

