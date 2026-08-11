/* Ghidra address: 01bf9770 */
/* Ghidra symbol: FUN_01bf9770 */


void FUN_01bf9770(undefined8 param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  bVar1 = false;
  iVar3 = 0;
  if (*param_2 != 0) {
    iVar3 = *(int *)(*param_2 + -4);
  }
  iVar5 = 1;
  if (0 < iVar3) {
    do {
      lVar4 = FUN_00414de0(param_2);
      cVar2 = FUN_004322f0(lVar4 + -2 + (longlong)iVar5 * 2);
      if ((cVar2 == '\a') || (cVar2 == '\x0f')) {
        bVar1 = true;
        break;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (bVar1) {
    iVar3 = 0;
    if (*param_2 != 0) {
      iVar3 = *(int *)(*param_2 + -4);
    }
    FUN_00416dc0(local_30,*param_2,iVar3 + -2,3);
    iVar3 = FUN_00416db0(local_30[0],&DAT_01bf9948);
    if (iVar3 == 0) {
      iVar3 = 0;
      if (*param_2 != 0) {
        iVar3 = *(int *)(*param_2 + -4);
      }
      FUN_00416dc0(&local_38,*param_2,1,iVar3 + -3);
      FUN_00416cd0(param_2,6,local_38,&DAT_01bf995c,&DAT_01bf996c,param_3,&DAT_01bf997c,
                   &DAT_01bf9948);
    }
    else {
      FUN_00416cd0(param_2,5,*param_2,&DAT_01bf995c,&DAT_01bf996c,param_3,&DAT_01bf997c);
    }
  }
  else if (param_4 != 0) {
    FUN_00416ea0(&DAT_01bf996c,param_2,param_4);
  }
  FUN_00414560(&local_38,2);
  return;
}

