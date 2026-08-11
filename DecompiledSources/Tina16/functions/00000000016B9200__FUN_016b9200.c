/* Ghidra address: 016b9200 */
/* Ghidra symbol: FUN_016b9200 */


longlong * FUN_016b9200(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  FUN_00414bf0(param_1,local_res10[0]);
  iVar3 = 0;
  if (*param_1 != 0) {
    iVar3 = *(int *)(*param_1 + -4);
  }
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      if (0x7f < *(byte *)(*param_1 + -1 + (longlong)iVar2)) {
        lVar1 = FUN_00414df0(param_1);
        *(undefined1 *)(lVar1 + -1 + (longlong)iVar2) = 0x20;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004144d0(local_res10);
  return param_1;
}

