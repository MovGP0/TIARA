/* Ghidra address: 0116b600 */
/* Ghidra symbol: FUN_0116b600 */


void FUN_0116b600(int *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_38;
  undefined8 local_30 [2];
  byte local_1f [7];
  
  local_38 = 0;
  local_30[0] = 0;
  iVar2 = param_1[0xb];
  iVar1 = FUN_01167b10(4);
  FUN_005fce30(param_2[0xe],iVar1 + 4);
  FUN_005fc860(param_2[0xe],DAT_0203aea8);
  FUN_005fdab0(param_2[0x10],param_1[4]);
  FUN_005fdcb0(param_2[0x10],1);
  FUN_005fd4e0(param_2[0xf],param_1[4]);
  if (param_1[10] == 0) {
    FUN_01166e40(param_2,*param_1 - param_1[8],param_1[1] - param_1[9]);
    FUN_01166e60(param_2,*param_1 - param_1[8],param_1[1] - param_1[9] / 4);
    FUN_01166e40(param_2,*param_1 - param_1[8],param_1[1] + param_1[9] / 4);
    FUN_01166e60(param_2,*param_1 - param_1[8],param_1[1] + param_1[9]);
    FUN_0116b580(param_2,*param_1 - param_1[8],param_1[1],(longlong)param_1[9] / 2 & 0xffffffff);
    FUN_01166e40(param_2,*param_1 + param_1[8],param_1[1] - param_1[9]);
    FUN_01166e60(param_2,*param_1 + param_1[8],param_1[1] - param_1[9] / 2);
    FUN_01166e40(param_2,*param_1 + param_1[8],param_1[1] + param_1[9] / 2);
    FUN_01166e60(param_2,*param_1 + param_1[8],param_1[1] + param_1[9]);
    iVar1 = param_1[9] / 2;
    (**(code **)(*param_2 + 0xa0))
              (param_2,(*param_1 + param_1[8]) - iVar1,param_1[1] - iVar1,
               *param_1 + param_1[8] + iVar1,param_1[1] + iVar1);
    FUN_01166e40(param_2,*param_1 - iVar2,param_1[1] - param_1[9]);
    FUN_01166e60(param_2,*param_1 - param_1[8],param_1[1] - param_1[9]);
    FUN_01166e40(param_2,*param_1 - iVar2,param_1[1] + param_1[9]);
    FUN_01166e60(param_2,*param_1 + iVar2,param_1[1] + param_1[9]);
    FUN_01166e40(param_2,*param_1 + iVar2,param_1[1] - param_1[9]);
    FUN_01166e60(param_2,*param_1 + param_1[8],param_1[1] - param_1[9]);
  }
  else {
    FUN_01166e40(param_2,*param_1 - param_1[9],param_1[1] - param_1[8]);
    FUN_01166e60(param_2,*param_1 - param_1[9] / 4,param_1[1] - param_1[8]);
    FUN_01166e40(param_2,*param_1 + param_1[9] / 4,param_1[1] - param_1[8]);
    FUN_01166e60(param_2,*param_1 + param_1[9],param_1[1] - param_1[8]);
    FUN_0116b580(param_2,*param_1,param_1[1] - param_1[8],(longlong)param_1[9] / 2 & 0xffffffff);
    FUN_01166e40(param_2,*param_1 - param_1[9],param_1[1] + param_1[8]);
    FUN_01166e60(param_2,*param_1 - param_1[9] / 2,param_1[1] + param_1[8]);
    FUN_01166e40(param_2,*param_1 + param_1[9] / 2,param_1[1] + param_1[8]);
    FUN_01166e60(param_2,*param_1 + param_1[9],param_1[1] + param_1[8]);
    iVar1 = param_1[9] / 2;
    (**(code **)(*param_2 + 0xa0))
              (param_2,*param_1 - iVar1,(param_1[1] + param_1[8]) - iVar1,*param_1 + iVar1,
               param_1[1] + param_1[8] + iVar1);
    FUN_01166e40(param_2,*param_1 - param_1[9],param_1[1] - iVar2);
    FUN_01166e60(param_2,*param_1 - param_1[9],param_1[1] - param_1[8]);
    FUN_01166e40(param_2,*param_1 + param_1[9],param_1[1] - iVar2);
    FUN_01166e60(param_2,*param_1 + param_1[9],param_1[1] + iVar2);
    FUN_01166e40(param_2,*param_1 - param_1[9],param_1[1] + iVar2);
    FUN_01166e60(param_2,*param_1 - param_1[9],param_1[1] + param_1[8]);
  }
  FUN_0116bcb0(param_1,param_2);
  FUN_00415020(local_1f,param_1 + 0xd,6);
  FUN_005fdcb0(param_2[0x10],1);
  if (param_1[10] == 0) {
    iVar2 = FUN_01167b10((ulonglong)local_1f[0] * 3);
    iVar1 = FUN_01167b10(2);
    FUN_004169a0(local_30,local_1f);
    FUN_01167160(param_2,*param_1 - iVar2,param_1[1] + param_1[9] + iVar1,local_30[0]);
  }
  else {
    iVar2 = FUN_01167b10(3);
    iVar1 = FUN_01167b10(3);
    FUN_004169a0(&local_38,local_1f);
    FUN_01167160(param_2,*param_1 + param_1[9] + iVar2,param_1[1] - iVar1,local_38);
  }
  FUN_00414560(&local_38,2);
  return;
}

