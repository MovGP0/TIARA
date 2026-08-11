/* Ghidra address: 017f4cd0 */
/* Ghidra symbol: FUN_017f4cd0 */


undefined8 FUN_017f4cd0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_38;
  int local_34;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x80) + 8);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      FUN_017f4350(*(undefined8 *)(param_1 + 0x80),&local_38,iVar2);
      iVar1 = FUN_00b95910(&local_38);
      if ((*(int *)(param_1 + 0x4c) <= iVar1) &&
         (iVar1 = FUN_00b95930(&local_38), *(int *)(param_1 + 0x48) <= iVar1)) {
        *(int *)(*(longlong *)(param_1 + 0x88) + 0xc) = local_38 + *(int *)(param_1 + 0x44);
        *(int *)(*(longlong *)(param_1 + 0x88) + 0x10) = local_34 + *(int *)(param_1 + 0x40);
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

