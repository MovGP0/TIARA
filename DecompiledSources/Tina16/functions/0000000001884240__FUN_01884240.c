/* Ghidra address: 01884240 */
/* Ghidra symbol: FUN_01884240 */


undefined8 * FUN_01884240(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_40 = 0;
  local_38 = 0;
  FUN_00414480(param_2);
  iVar1 = FUN_0040c770(*(double *)(param_1 + 0xb0) / (double)*(int *)PTR_DAT_020052f0);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x308) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      if (iVar4 + 1 <= iVar1) {
        (**(code **)(**(longlong **)(param_1 + 0x308) + 0x18))
                  (*(longlong **)(param_1 + 0x308),&local_38,iVar4);
        uVar3 = FUN_0040c770(*(double *)(param_1 + 0xa8) / *(double *)PTR_DAT_02005968);
        FUN_00416430(&local_30,local_38,1,uVar3);
        FUN_004168b0(&local_40,local_30);
        FUN_00416cd0(param_2,3,*param_2,local_40,&LAB_018843c8);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(&local_40);
  FUN_004145c0(&local_38,2);
  return param_2;
}

