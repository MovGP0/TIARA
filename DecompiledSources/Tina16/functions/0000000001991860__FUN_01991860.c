/* Ghidra address: 01991860 */
/* Ghidra symbol: FUN_01991860 */


ulonglong FUN_01991860(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int local_38;
  int local_34;
  int local_30;
  int local_2c [3];
  
  uVar4 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x1c8))(*(longlong **)(param_1 + 0xa8));
  if (2 < iVar2) {
    iVar2 = 0;
    while ((char)uVar4 == '\0') {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x1c8))(*(longlong **)(param_1 + 0xa8))
      ;
      if (iVar3 <= iVar2) break;
      if (iVar2 == 0) {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x1c8))
                          (*(longlong **)(param_1 + 0xa8));
        (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x1f0))
                  (*(longlong **)(param_1 + 0xa8),iVar3 + -1,local_2c,&local_30);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x1f0))
                  (*(longlong **)(param_1 + 0xa8),iVar2 + -1,local_2c,&local_30);
      }
      lVar1 = **(longlong **)(param_1 + 0xa8);
      (**(code **)(lVar1 + 0x1f0))(*(longlong **)(param_1 + 0xa8),iVar2,&local_34,&local_38);
      if (local_34 < local_2c[0]) {
        FUN_01cefdf0(local_2c,&local_34);
      }
      if (local_38 < local_30) {
        FUN_01cefdf0(&local_30,&local_38);
      }
      if ((((*(int *)(param_1 + 0x6c) == local_2c[0]) && (*(int *)(param_1 + 0x68) == local_34)) &&
          (*(int *)(param_1 + 100) == local_30)) && (*(int *)(param_1 + 0x60) == local_38)) {
        uVar4 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      }
      else {
        uVar4 = 0;
      }
      iVar2 = iVar2 + 1;
    }
  }
  return uVar4 & 0xffffffff;
}

