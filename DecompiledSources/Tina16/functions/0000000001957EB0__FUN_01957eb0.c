/* Ghidra address: 01957eb0 */
/* Ghidra symbol: FUN_01957eb0 */


uint FUN_01957eb0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_005fbf20(*(undefined4 *)(param_1 + 8));
  iVar2 = FUN_0040c770((double)(int)(0xff - (uVar1 & 0xff)) * *(double *)(param_1 + 0x10));
  uVar3 = (uVar1 & 0xff) + iVar2;
  uVar4 = uVar1 >> 8 & 0xff;
  iVar2 = FUN_0040c770((double)(int)(0xff - uVar4) * *(double *)(param_1 + 0x10));
  uVar4 = uVar4 + iVar2;
  uVar1 = uVar1 >> 0x10 & 0xff;
  iVar2 = FUN_0040c770((double)(int)(0xff - uVar1) * *(double *)(param_1 + 0x10));
  uVar1 = uVar1 + iVar2;
  if (0xff < (int)uVar3) {
    uVar3 = 0xff;
  }
  if (0xff < (int)uVar4) {
    uVar4 = 0xff;
  }
  if (0xff < (int)uVar1) {
    uVar1 = 0xff;
  }
  return (uVar1 & 0xff) << 0x10 | (uVar4 & 0xff) << 8 | uVar3;
}

