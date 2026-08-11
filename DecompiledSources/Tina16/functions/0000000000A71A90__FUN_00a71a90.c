/* Ghidra address: 00a71a90 */
/* Ghidra symbol: FUN_00a71a90 */


void FUN_00a71a90(undefined8 param_1,int *param_2,char param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  
  uVar6 = thunk_FUN_03976db5(0,0,1,1);
  *param_5 = uVar6;
  uVar6 = FUN_005ffa40(param_1);
  iVar1 = thunk_FUN_0411a732(uVar6,*param_5);
  if (iVar1 == 0) {
    thunk_FUN_0416f828(*param_5);
    *param_5 = 0;
  }
  uVar6 = FUN_005ffa40(param_1);
  thunk_FUN_040299ab(uVar6,&local_60);
  if (param_3 == '\0') {
    uVar6 = thunk_FUN_03976db5(*param_2 - local_60,param_2[1] - local_5c,param_2[2] - local_60,
                               param_2[3] - local_5c);
    *param_4 = uVar6;
  }
  else {
    uVar6 = FUN_005ffa40(param_1);
    thunk_FUN_041219c3(uVar6,&local_68);
    uVar6 = FUN_005ffa40(param_1);
    thunk_FUN_0415f350(uVar6,&local_70);
    uVar2 = FUN_0040c770(((double)local_68 / (double)local_70) * (double)(*param_2 - local_60));
    uVar3 = FUN_0040c770(((double)local_64 / (double)local_6c) * (double)(param_2[1] - local_5c));
    uVar4 = FUN_0040c770(((double)local_68 / (double)local_70) * (double)(param_2[2] - local_60));
    uVar5 = FUN_0040c770(((double)local_64 / (double)local_6c) * (double)(param_2[3] - local_5c));
    uVar6 = thunk_FUN_03976db5(uVar2,uVar3,uVar4,uVar5);
    *param_4 = uVar6;
  }
  if (iVar1 == 1) {
    thunk_FUN_04199bfe(*param_4,*param_4,*param_5,1);
  }
  return;
}

