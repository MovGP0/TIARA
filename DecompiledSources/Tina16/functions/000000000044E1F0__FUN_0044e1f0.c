/* Ghidra address: 0044e1f0 */
/* Ghidra symbol: FUN_0044e1f0 */


void FUN_0044e1f0(void)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int local_28 [2];
  undefined1 local_20;
  
  iVar3 = 0;
  iVar1 = FUN_00409a00();
  while ((iVar3 < 7 && ((&DAT_01dc18d8)[(longlong)iVar3 * 4] != iVar1))) {
    iVar3 = iVar3 + 1;
  }
  if (iVar3 < 7) {
    lVar2 = FUN_0044d490(&PTR_FUN_00434f90,1,(&DAT_01dc18e0)[(longlong)iVar3 * 2]);
  }
  else {
    local_20 = 0;
    local_28[0] = iVar1;
    lVar2 = FUN_0044d8d0(&PTR_FUN_00434f90,1,PTR_PTR_02002190,local_28,0);
  }
  *(int *)(lVar2 + 0x30) = iVar1;
  return;
}

