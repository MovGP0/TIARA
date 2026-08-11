/* Ghidra address: 005fbec0 */
/* Ghidra symbol: FUN_005fbec0 */


void FUN_005fbec0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x3c) = 0;
  if (*(int *)(param_2 + 0x3c) <= iVar2 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x3c));
      FUN_005fe090(uVar1);
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00412130(*(undefined8 *)(DAT_02012038 + 0x10));
  return;
}

