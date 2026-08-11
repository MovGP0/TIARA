/* Ghidra address: 017bb120 */
/* Ghidra symbol: FUN_017bb120 */


undefined8 FUN_017bb120(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  
  local_30 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00b94e60(param_1,iVar2);
      FUN_017bb0d0(auStack_58,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return local_30;
}

