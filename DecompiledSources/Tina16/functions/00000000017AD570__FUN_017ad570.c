/* Ghidra address: 017ad570 */
/* Ghidra symbol: FUN_017ad570 */


bool FUN_017ad570(int *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_28 [24];
  
  iVar2 = (int)(3 / (longlong)DAT_01fa23a8);
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  iVar1 = (int)(4 / (longlong)DAT_01fa23a8);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  FUN_00498350(local_28,*param_1 - iVar2,param_1[1] - iVar2,*param_1 + iVar1,param_1[1] + iVar1);
  iVar2 = thunk_FUN_03f16006(local_28,*param_2);
  return iVar2 != 0;
}

