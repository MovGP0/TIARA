/* Ghidra address: 007dd4d0 */
/* Ghidra symbol: FUN_007dd4d0 */


void FUN_007dd4d0(longlong param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_00411a80(param_1,param_2);
  FUN_007e8b40(DAT_020125c8,param_1);
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_007e34f0(*(longlong *)(param_1 + 200),param_1);
    *(undefined8 *)(param_1 + 200) = 0;
  }
  while( true ) {
    iVar1 = FUN_007e2ef0(param_1);
    if (iVar1 < 1) break;
    uVar2 = FUN_007e2f10(param_1,0);
    FUN_00410f20(uVar2);
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_007dddc0(param_1,0);
    thunk_FUN_03a10f16(*(undefined8 *)(param_1 + 0x158));
  }
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  FUN_00410f20(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  FUN_00410f20(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  FUN_00410f20(uVar2);
  if (*(short *)(param_1 + 0xa8) != 0) {
    FUN_004b0e80(DAT_020125d8,*(short *)(param_1 + 0xa8),0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa0));
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

