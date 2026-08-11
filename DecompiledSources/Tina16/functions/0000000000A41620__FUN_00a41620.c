/* Ghidra address: 00a41620 */
/* Ghidra symbol: FUN_00a41620 */


void FUN_00a41620(undefined8 param_1,longlong param_2,longlong param_3,int *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(char *)(param_2 + 8) == '\0') {
    iVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_2 + 0x28 + (longlong)iVar3 * 8);
      if (lVar2 != 0) {
        FUN_00a41620(param_1,lVar2,param_3,param_4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 8);
  }
  else {
    puVar1 = (undefined1 *)(param_3 + (longlong)*param_4 * 4);
    if (*(int *)(param_2 + 0xc) == 0) {
      puVar1[2] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
    }
    else {
      puVar1[2] = (char)(*(int *)(param_2 + 0x10) / *(int *)(param_2 + 0xc));
      puVar1[1] = (char)(*(int *)(param_2 + 0x14) / *(int *)(param_2 + 0xc));
      *puVar1 = (char)(*(int *)(param_2 + 0x18) / *(int *)(param_2 + 0xc));
    }
    puVar1[3] = 0;
    *param_4 = *param_4 + 1;
  }
  return;
}

