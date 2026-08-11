/* Ghidra address: 00ce2a00 */
/* Ghidra symbol: FUN_00ce2a00 */


longlong * FUN_00ce2a00(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong local_20;
  
  local_20 = 0;
  FUN_00414480(param_2);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00ce29e0(param_1,iVar2);
      FUN_00ce2630(uVar1,&local_20);
      if (local_20 != 0) {
        if (*param_2 != 0) {
          FUN_00416ad0(param_2,&DAT_00ce2b04);
        }
        FUN_00416ad0(param_2,local_20);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*param_2 != 0) {
    FUN_00416cd0(param_2,3,*(undefined8 *)(param_1 + 0x30),&LAB_00ce2b14,*param_2);
  }
  FUN_00414480(&local_20);
  return param_2;
}

