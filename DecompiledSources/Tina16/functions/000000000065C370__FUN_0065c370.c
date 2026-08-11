/* Ghidra address: 0065c370 */
/* Ghidra symbol: FUN_0065c370 */


void FUN_0065c370(undefined8 param_1,longlong *param_2,int *param_3,int *param_4,int *param_5,
                 int *param_6)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = param_2[0x1a];
  if (*(int *)(lVar1 + 0x1c) == 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = *(int *)(lVar1 + 0x1c);
  }
  if (*(int *)(lVar1 + 0x18) == 0) {
    *param_4 = 0;
  }
  else {
    *param_4 = *(int *)(lVar1 + 0x18);
  }
  if (*(int *)(lVar1 + 0x14) == 0) {
    *param_5 = 0;
  }
  else {
    *param_5 = *(int *)(lVar1 + 0x14);
  }
  if (*(int *)(lVar1 + 0x10) == 0) {
    *param_6 = 0;
  }
  else {
    *param_6 = *(int *)(lVar1 + 0x10);
  }
  if ((*(uint *)(param_2 + 0x14) & 0x100000) != 0) {
    lVar1 = param_2[0x1b];
    iVar2 = *(int *)(lVar1 + 0x10) + *(int *)(lVar1 + 0x18);
    if (0 < *param_3) {
      *param_3 = *param_3 + iVar2;
    }
    if (iVar2 <= *param_5) {
      *param_5 = *param_5 - iVar2;
    }
    iVar2 = *(int *)(lVar1 + 0x14) + *(int *)(lVar1 + 0x1c);
    if (0 < *param_4) {
      *param_4 = *param_4 + iVar2;
    }
    if (iVar2 <= *param_6) {
      *param_6 = *param_6 - iVar2;
    }
  }
  (**(code **)(*param_2 + 0xb0))(param_2,param_3,param_4,param_5,param_6);
  return;
}

