/* Ghidra address: 00bbab40 */
/* Ghidra symbol: FUN_00bbab40 */


longlong * FUN_00bbab40(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 local_48 [2];
  undefined1 local_40;
  int local_38;
  undefined1 local_30;
  
  if (*(char *)(param_1 + 0x25) == '\0') {
    if (1 < *(int *)(param_1 + 0x58)) {
      param_3 = param_3 + *(int *)(param_1 + 0x58) + -1;
    }
  }
  else {
    param_3 = param_3 + -1;
  }
  local_48[0] = *(undefined4 *)(param_1 + 0x50);
  local_40 = 0;
  local_30 = 0;
  local_38 = param_3;
  FUN_00442f70(param_2,&LAB_00bbac00,local_48,1);
  if (*(char *)(param_1 + 0x24) != '\0') {
    iVar3 = *(int *)(param_1 + 0x50) + -1;
    iVar2 = 1;
    if (0 < iVar3) {
      do {
        if (*(short *)(*param_2 + -2 + (longlong)iVar2 * 2) != 0x20) {
          return param_2;
        }
        lVar1 = FUN_00414de0(param_2);
        *(undefined2 *)(lVar1 + -2 + (longlong)iVar2 * 2) = 0x30;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return param_2;
}

