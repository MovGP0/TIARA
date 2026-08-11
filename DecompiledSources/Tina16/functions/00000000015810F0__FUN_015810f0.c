/* Ghidra address: 015810f0 */
/* Ghidra symbol: FUN_015810f0 */


void FUN_015810f0(longlong param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (*(byte *)(param_1 + 8) < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (*(byte *)(param_1 + 8) & 0x1f) & 6U
            ) != 0;
  }
  else {
    bVar4 = false;
  }
  if (!bVar4) {
    uVar1 = FUN_0044d710(&PTR_FUN_01576898,1,PTR_PTR_020019b8);
    FUN_004134c0(uVar1);
  }
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      FUN_015803f0(param_1,iVar2,param_2,1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

