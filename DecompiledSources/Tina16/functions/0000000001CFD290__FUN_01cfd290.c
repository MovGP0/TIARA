/* Ghidra address: 01cfd290 */
/* Ghidra symbol: FUN_01cfd290 */


undefined2 FUN_01cfd290(longlong param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0xb8) == 0) {
    iVar2 = FUN_01cfd2d0(param_1);
    uVar1 = FUN_01cfd270(param_1,0,iVar2 + -1);
    *(undefined2 *)(param_1 + 0xb8) = uVar1;
  }
  return *(undefined2 *)(param_1 + 0xb8);
}

