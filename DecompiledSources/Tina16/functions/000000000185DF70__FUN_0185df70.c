/* Ghidra address: 0185df70 */
/* Ghidra symbol: FUN_0185df70 */


void FUN_0185df70(longlong param_1,longlong param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char local_39 [9];
  
  iVar3 = *(int *)(param_2 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      pcVar1 = (char *)FUN_004aeac0(param_2,iVar2);
      local_39[0] = *pcVar1;
      if (local_39[0] != '\0') {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),local_39,1);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                  (*(longlong **)(param_1 + 8),pcVar1 + 4,local_39[0]);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_39[0] = '\0';
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),local_39,1);
  return;
}

