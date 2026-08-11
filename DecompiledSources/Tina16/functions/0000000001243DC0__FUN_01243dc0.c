/* Ghidra address: 01243dc0 */
/* Ghidra symbol: FUN_01243dc0 */


undefined8
FUN_01243dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
            int param_6,int param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)

{
  undefined8 uVar1;
  int local_res20 [2];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  int local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_50[0] = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_30 = 0;
  iStack_34 = param_5;
  local_20 = CONCAT44(param_5,param_4);
  local_40 = param_6;
  iStack_3c = param_7;
  local_28 = CONCAT44(param_7,param_6);
  if (param_4 < param_6) {
    if (param_5 < param_7) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x10e;
    }
  }
  else if (param_5 < param_7) {
    uVar1 = 0x5a;
  }
  else {
    uVar1 = 0xb4;
  }
  local_res20[0] = param_4 - (param_6 - param_4);
  param_6 = (param_6 - param_4) + param_4;
  param_7 = param_7 * 2 - param_5;
  local_38 = param_4;
  if (param_6 < local_res20[0]) {
    FUN_01242100(local_res20,&param_6);
  }
  if (param_7 < param_5) {
    FUN_01242100(&param_5,&param_7);
  }
  FUN_0043f750(local_50,local_res20[0]);
  FUN_0043f750(&local_58,param_5);
  FUN_0043f750(&local_60,param_6);
  FUN_0043f750(&local_68,param_7);
  FUN_0043f750(&local_70,uVar1);
  FUN_0043f750(&local_78,0x5a);
  uVar2 = 0;
  uVar3 = 0;
  FUN_00416cd0(&local_30,0xb,local_50[0],&DAT_0124410c,local_58,&DAT_0124410c,local_60,&DAT_0124410c
               ,local_68,&DAT_0124410c,local_70,&DAT_0124410c,local_78);
  FUN_01243600(param_1,param_2,param_3,&DAT_0124411c,local_30,CONCAT44(uVar2,param_8),param_9,
               CONCAT44(uVar3,param_10));
  FUN_00414560(&local_78,6);
  FUN_00414480(&local_30);
  return param_1;
}

