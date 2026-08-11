/* Ghidra address: 019b59c0 */
/* Ghidra symbol: FUN_019b59c0 */


void FUN_019b59c0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  FUN_00411a80(param_1,param_2);
  FUN_01444670(param_1);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x28));
  }
  FUN_00ef81f0(param_1 + 0x30);
  FUN_00ef81f0(param_1 + 0x38);
  FUN_019b6320(param_1 + 0xb8);
  FUN_019b6320(param_1 + 0xc0);
  FUN_019b6320(param_1 + 200);
  FUN_019b6320(param_1 + 0xd0);
  FUN_00efa3b0(param_1 + 0x18);
  FUN_00efa3b0();
  if (*(longlong *)(param_1 + 0xb18) != 0) {
    FUN_004095f0();
  }
  if (*(longlong *)(param_1 + 0xe38) != 0) {
    FUN_00410f20();
  }
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0xe68) + 0x10);
    uVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0xe68);
        if (*(uint *)(lVar1 + 0x10) <= uVar2) {
          FUN_00594f90();
        }
        FUN_004095f0(*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8));
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0xe68));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

