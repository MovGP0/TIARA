/* Ghidra address: 00820c90 */
/* Ghidra symbol: FUN_00820c90 */


void FUN_00820c90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  
  if ((*(ushort *)(param_1 + 0x34) & 8) == 0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x4a0) + 0x28))(*(longlong **)(param_1 + 0x4a0));
    if (iVar3 != 0) {
      lVar1 = *(longlong *)(param_2 + 0x10);
      cVar2 = FUN_008222b0(param_1,*(undefined4 *)(lVar1 + 8));
      if (cVar2 == '\0') {
        pcVar4 = (code *)FUN_00411550(param_1,0xffc5);
        cVar2 = (*pcVar4)(param_1);
        if (cVar2 == '\0') {
          iVar3 = FUN_00820730(param_1);
          *(int *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + iVar3;
        }
        else {
          iVar3 = FUN_00820730(param_1);
          *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) - iVar3;
        }
      }
      FUN_0068d4b0(param_1,param_2);
    }
  }
  return;
}

