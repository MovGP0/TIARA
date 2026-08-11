/* Ghidra address: 00a9c2d0 */
/* Ghidra symbol: FUN_00a9c2d0 */


void FUN_00a9c2d0(longlong param_1,undefined8 param_2,int *param_3,int *param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int local_30;
  int local_2c;
  
  *param_4 = 0;
  *param_3 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar2 = (longlong *)FUN_00ac3910(param_1,iVar3);
      (**(code **)(*plVar2 + 0xb8))(plVar2,param_2,&local_2c,&local_30,param_5,param_6);
      iVar1 = local_30;
      if (local_30 < *param_4) {
        iVar1 = *param_4;
      }
      *param_4 = iVar1;
      iVar1 = local_2c;
      if (local_2c < *param_3) {
        iVar1 = *param_3;
      }
      *param_3 = iVar1;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

