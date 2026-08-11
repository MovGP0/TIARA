/* Ghidra address: 00a71980 */
/* Ghidra symbol: FUN_00a71980 */


int * FUN_00a71980(int *param_1,undefined8 param_2,undefined8 *param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  
  uVar5 = FUN_005ffa40(param_2);
  thunk_FUN_040299ab(uVar5,&local_50);
  *(undefined8 *)param_1 = *param_3;
  *(undefined8 *)(param_1 + 2) = param_3[1];
  FUN_00423b50(param_1,-local_50,-local_4c);
  if (param_4 != '\0') {
    uVar5 = FUN_005ffa40(param_2);
    thunk_FUN_041219c3(uVar5,&local_58);
    uVar5 = FUN_005ffa40(param_2);
    thunk_FUN_0415f350(uVar5,&local_60);
    uVar1 = FUN_0040c770((double)*param_1 * ((double)local_58 / (double)local_60));
    uVar2 = FUN_0040c770((double)param_1[2] * ((double)local_58 / (double)local_60));
    uVar3 = FUN_0040c770((double)param_1[1] * ((double)local_54 / (double)local_5c));
    uVar4 = FUN_0040c770((double)param_1[3] * ((double)local_54 / (double)local_5c));
    *(ulonglong *)param_1 = CONCAT44(uVar3,uVar1);
    *(ulonglong *)(param_1 + 2) = CONCAT44(uVar4,uVar2);
  }
  return param_1;
}

