/* Ghidra address: 01bcf7e0 */
/* Ghidra symbol: FUN_01bcf7e0 */


void FUN_01bcf7e0(longlong *param_1)

{
  undefined4 uVar1;
  
  FUN_01bff4c0(param_1);
  (**(code **)(*param_1 + 0x88))(param_1,0xff00000f);
  *(undefined4 *)(param_1 + 0x18) = 0xff000005;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xc66931;
  *(undefined4 *)(param_1 + 0x10) = 0xff00000f;
  *(undefined4 *)(param_1 + 0x11) = 0xff000008;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0xff000011;
  *(undefined4 *)(param_1 + 0x13) = 0xff000014;
  *(undefined4 *)(param_1 + 0x12) = 0x808080;
  (**(code **)(*param_1 + 0x90))(param_1,0xff000008);
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0xffffff;
  *(undefined4 *)(param_1 + 0x19) = 0x7a868a;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0xffffff;
  *(undefined4 *)(param_1 + 0x1a) = 0x7a868a;
  uVar1 = FUN_00635840(0xff00000f,0xf);
  *(undefined4 *)(param_1 + 0x17) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0x20000000;
  *(undefined4 *)(param_1 + 0x15) = 0x20000000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0xefd3c6;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xff000015;
  uVar1 = FUN_00635840(0xff00000f,0xf);
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar1;
  return;
}

