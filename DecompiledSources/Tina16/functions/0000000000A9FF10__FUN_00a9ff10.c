/* Ghidra address: 00a9ff10 */
/* Ghidra symbol: FUN_00a9ff10 */


void FUN_00a9ff10(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_2c;
  
  iVar2 = 0;
  iVar3 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x10);
  iVar1 = 0;
  if (-1 < iVar4 + -1) {
    do {
      local_38 = FUN_00ac3910(*(undefined8 *)(param_1 + 0xa8),iVar1);
      *(longlong *)(local_38 + 0x20) = param_1;
      local_2c = *(int *)(local_38 + 0x70);
      if (local_2c < 0) {
        FUN_00a9fe60(auStack_58,0,iVar2);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 1;
      }
      else if (local_2c == 0) {
        FUN_004aec30(*(undefined8 *)(param_1 + 0x530),iVar3,local_38);
        iVar3 = iVar3 + 1;
      }
      else {
        FUN_00a9fe60(auStack_58,iVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x530) + 0x10));
      }
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

