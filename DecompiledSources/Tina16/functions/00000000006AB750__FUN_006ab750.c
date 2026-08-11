/* Ghidra address: 006ab750 */
/* Ghidra symbol: FUN_006ab750 */


bool FUN_006ab750(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  longlong local_20 [2];
  
  local_20[0] = 0;
  lVar1 = param_1[0x27];
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0xd9) == '\0')) {
    bVar4 = false;
  }
  else {
    uVar2 = FUN_006ab190(lVar1);
    FUN_007267a0(uVar2,local_20);
    iVar3 = 0;
    if (local_20[0] != 0) {
      iVar3 = *(int *)(local_20[0] + -4);
    }
    bVar4 = iVar3 != 0;
  }
  (**(code **)(*param_1 + 0xe8))(param_1,bVar4);
  FUN_00414480(local_20);
  return bVar4;
}

