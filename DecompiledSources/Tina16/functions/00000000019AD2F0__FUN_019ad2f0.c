/* Ghidra address: 019ad2f0 */
/* Ghidra symbol: FUN_019ad2f0 */


void FUN_019ad2f0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar4 = *(int *)(param_2 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_00b94e60(param_2,iVar3);
      cVar1 = FUN_0198a580(lVar2);
      if ((cVar1 == '\x05') && (*(char *)(lVar2 + 0x2d8) != '\0')) {
        FUN_004169a0(local_30,lVar2 + 0x2d8);
        (**(code **)(*param_3 + 0x78))(param_3,local_30[0]);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(local_30);
  return;
}

