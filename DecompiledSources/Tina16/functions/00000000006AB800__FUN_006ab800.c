/* Ghidra address: 006ab800 */
/* Ghidra symbol: FUN_006ab800 */


void FUN_006ab800(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong local_20 [2];
  
  local_20[0] = 0;
  lVar1 = param_1[0x27];
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 0xe8))(param_1,0);
  }
  else {
    if (*(char *)(lVar1 + 0xd9) == '\0') {
      uVar2 = 0;
    }
    else {
      uVar3 = FUN_006ab190(lVar1);
      FUN_007267a0(uVar3,local_20);
      iVar4 = 0;
      if (local_20[0] != 0) {
        iVar4 = *(int *)(local_20[0] + -4);
      }
      uVar2 = (undefined4)CONCAT71((int7)((ulonglong)local_20[0] >> 8),iVar4 != 0);
    }
    (**(code **)(*param_1 + 0xe8))(param_1,uVar2);
  }
  FUN_00414480(local_20);
  return;
}

