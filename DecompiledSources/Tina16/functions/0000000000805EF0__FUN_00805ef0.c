/* Ghidra address: 00805ef0 */
/* Ghidra symbol: FUN_00805ef0 */


void FUN_00805ef0(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(int *)(DAT_02012670 + 0xa0) == *(int *)(param_2 + 0x7c)) {
    FUN_008088b0(DAT_02012670,*(undefined2 *)(param_2 + 0x7a));
  }
  else {
    FUN_008088b0(DAT_02012670,0);
  }
  FUN_007f95c0(*(undefined8 *)(param_2 + 0x70));
  if (*(int *)(*(longlong *)(DAT_02012670 + 0xf8) + 0x10) < 1) {
    *(undefined8 *)(DAT_02012670 + 0xf0) = 0;
  }
  else {
    *(longlong *)(param_2 + 0x60) = *(longlong *)(DAT_02012670 + 0xf8);
    uVar3 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x60),0);
    *(undefined8 *)(DAT_02012670 + 0xf0) = uVar3;
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(DAT_02012670 + 0xf8);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(DAT_02012670 + 0xf0);
    FUN_004aee50(*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x50),0);
  }
  if (*(longlong *)(param_2 + 0x48) != 0) {
    iVar2 = thunk_FUN_041de4d6(*(undefined8 *)(param_2 + 0x48));
    if (iVar2 == 0) {
      uVar3 = FUN_007f9690(0);
      *(undefined8 *)(param_2 + 0x48) = uVar3;
    }
  }
  if (*(longlong *)(param_2 + 0x48) != 0) {
    thunk_FUN_04161dbd(*(undefined8 *)(param_2 + 0x48));
  }
  FUN_007f9270(*(undefined8 *)(param_2 + 0x40));
  pbVar1 = (byte *)(*(longlong *)(param_2 + 0xa0) + 0x6a8);
  *pbVar1 = *pbVar1 & 0xf7;
  return;
}

