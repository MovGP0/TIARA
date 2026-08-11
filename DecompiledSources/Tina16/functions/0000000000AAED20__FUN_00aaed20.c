/* Ghidra address: 00aaed20 */
/* Ghidra symbol: FUN_00aaed20 */


void FUN_00aaed20(longlong param_1,undefined8 param_2,int *param_3,int *param_4,undefined4 param_5,
                 undefined4 param_6)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_00aad150(param_1);
  FUN_00aae210(param_1,param_2,param_5,param_6);
  lVar1 = *(longlong *)(param_1 + 0xf8);
  iVar4 = 0;
  if (lVar1 != 0) {
    iVar4 = (int)*(undefined8 *)(lVar1 + -8);
  }
  iVar3 = 0;
  iVar2 = 0;
  if (iVar4 - 1U < 0x80000000) {
    do {
      iVar3 = iVar3 + *(int *)(lVar1 + (longlong)iVar2 * 4);
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar3 = iVar3 + *(int *)(param_1 + 0x138);
  if (iVar3 <= *(int *)(param_1 + 0x130)) {
    iVar3 = *(int *)(param_1 + 0x130);
  }
  *param_3 = iVar3;
  lVar1 = *(longlong *)(param_1 + 0xf0);
  iVar4 = 0;
  if (lVar1 != 0) {
    iVar4 = (int)*(undefined8 *)(lVar1 + -8);
  }
  iVar3 = 0;
  iVar2 = 0;
  if (iVar4 - 1U < 0x80000000) {
    do {
      iVar3 = iVar3 + *(int *)(lVar1 + (longlong)iVar2 * 4);
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar3 = iVar3 + *(int *)(param_1 + 0x138);
  if (iVar3 <= *(int *)(param_1 + 0x130)) {
    iVar3 = *(int *)(param_1 + 0x130);
  }
  *param_4 = iVar3;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  iVar4 = *(int *)(lVar1 + 0x468);
  if (0 < iVar4) {
    iVar3 = iVar4;
    if (iVar4 < *param_3) {
      iVar3 = *param_3;
    }
    *param_3 = iVar3;
    if (iVar4 < *param_4) {
      iVar4 = *param_4;
    }
    *param_4 = iVar4;
  }
  iVar4 = *(int *)(lVar1 + 0x470);
  if (0 < iVar4) {
    iVar3 = iVar4;
    if (*param_3 < iVar4) {
      iVar3 = *param_3;
    }
    *param_3 = iVar3;
    if (*param_4 < iVar4) {
      iVar4 = *param_4;
    }
    *param_4 = iVar4;
  }
  return;
}

