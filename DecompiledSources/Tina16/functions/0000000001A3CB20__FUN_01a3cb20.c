/* Ghidra address: 01a3cb20 */
/* Ghidra symbol: FUN_01a3cb20 */


longlong * FUN_01a3cb20(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1,local_res10[0]);
  iVar2 = FUN_004170c0(&LAB_01a3cc24,*param_1,1);
  if (iVar2 == 1) {
    uVar3 = 0;
    if (*param_1 != 0) {
      uVar3 = *(undefined4 *)(*param_1 + -4);
    }
    FUN_00416dc0(param_1,*param_1,2,uVar3);
  }
  iVar4 = FUN_004170c0(&LAB_01a3cc24,*param_1,1);
  iVar2 = 0;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    iVar2 = *(int *)(lVar1 + -4);
  }
  if (iVar4 == iVar2) {
    iVar2 = 0;
    if (lVar1 != 0) {
      iVar2 = *(int *)(lVar1 + -4);
    }
    FUN_00416dc0(param_1,*param_1,1,iVar2 + -1);
  }
  FUN_00414480(local_res10);
  return param_1;
}

