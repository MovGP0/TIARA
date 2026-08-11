/* Ghidra address: 0069c4c0 */
/* Ghidra symbol: FUN_0069c4c0 */


void FUN_0069c4c0(int *param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_30;
  int local_2c;
  
  uVar2 = FUN_0069db00(DAT_01dfc7e0);
  if (0 < param_3) {
    while( true ) {
      uVar3 = FUN_005ffa40(uVar2);
      thunk_FUN_03ee9fe6(uVar3,param_2,param_3,&local_30);
      iVar1 = param_3;
      while ((0 < iVar1 && (param_1[2] < local_30 + *param_1))) {
        iVar1 = FUN_00429160(param_2,param_2 + iVar1);
        iVar1 = iVar1 - (int)param_2;
        uVar3 = FUN_005ffa40(uVar2);
        thunk_FUN_03ee9fe6(uVar3,param_2,iVar1,&local_30);
      }
      if (param_1[4] < local_2c) {
        param_1[4] = local_2c + 2;
      }
      uVar3 = FUN_005ffa40(uVar2);
      thunk_FUN_04113fe8(uVar3,*param_1,param_1[1],param_2,iVar1);
      param_3 = param_3 - iVar1;
      param_2 = param_2 + iVar1;
      if (param_3 < 1) break;
      FUN_0069c460(param_1);
    }
    *param_1 = *param_1 + local_30;
  }
  return;
}

