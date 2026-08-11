/* Ghidra address: 0043ebb0 */
/* Ghidra symbol: FUN_0043ebb0 */


longlong * FUN_0043ebb0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00414ad0(param_1,param_2);
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = *(int *)(*param_1 + -4);
  }
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      if (*(short *)(*param_1 + (longlong)iVar1 * 2) == 0x27) {
        FUN_00456760(param_1,local_20,iVar1,&DAT_0043ec94);
        FUN_00414ad0(param_1,local_20[0]);
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  FUN_00416cd0(param_1,3,&DAT_0043ec94,*param_1,&DAT_0043ec94);
  FUN_00414480(local_20);
  return param_1;
}

