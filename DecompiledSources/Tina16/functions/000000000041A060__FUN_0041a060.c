/* Ghidra address: 0041a060 */
/* Ghidra symbol: FUN_0041a060 */


longlong * FUN_0041a060(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_004167a0(param_2,param_3);
  iVar3 = 0;
  if (*param_2 != 0) {
    iVar3 = *(int *)(*param_2 + -4);
  }
  iVar1 = 1;
  if (0 < iVar3) {
    do {
      if (*(short *)(*param_2 + -2 + (longlong)iVar1 * 2) == 0x2c) goto LAB_0041a164;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414b50(&local_18,*param_2);
  FUN_00414480(param_2);
  while (local_18 != 0) {
    FUN_00416cd0(param_2,3,*param_2,local_10,local_18);
    FUN_00414b50(&local_10,&LAB_0041a1a8);
    uVar2 = FUN_00419fe0(param_1,local_18);
    FUN_00416dc0(&local_20,local_18,1,uVar2);
    FUN_00414b50(&local_18,local_20);
  }
LAB_0041a164:
  FUN_00414560(&local_20,3);
  return param_2;
}

