/* Ghidra address: 008afca0 */
/* Ghidra symbol: FUN_008afca0 */


longlong *
FUN_008afca0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined1 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  longlong local_30;
  int local_24;
  longlong *local_20;
  
  local_40 = auStack_b8;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_30 = 0;
  FUN_00414480(param_1);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_008af5f0(param_2,local_20,param_6);
  FUN_004b6d10(local_20,0);
  local_24 = FUN_00879820(local_20,param_3,0);
  if (local_24 < 0) {
    FUN_00414480(param_5);
  }
  else {
    (**(code **)(*local_20 + 0x18))(local_20,&local_48,local_24);
    FUN_00414ad0(param_5,local_48);
    local_98 = CONCAT71(local_98._1_7_,1);
    FUN_00874ee0(&local_50,param_5,&DAT_008b005c,1);
  }
  FUN_0043ea00(&local_30,param_4);
  if (local_30 == 0) {
    if (local_24 < 0) {
      FUN_00414ad0(param_1,param_2);
      FUN_008b0000(0,local_40);
      goto LAB_008affd2;
    }
    (**(code **)(*local_20 + 0x98))(local_20,local_24);
  }
  else if (local_24 < 0) {
    local_98 = local_30;
    FUN_00416cd0(&local_58,3,param_3,&DAT_008b005c);
    (**(code **)(*local_20 + 0x78))(local_20,local_58);
  }
  else {
    FUN_004b5450(local_20,local_24,local_30);
  }
  FUN_008af330(param_1,param_2);
  if (*param_1 != 0) {
    iVar1 = (**(code **)(*local_20 + 0x28))();
    local_24 = 0;
    if (-1 < iVar1 + -1) {
      do {
        FUN_004b3cf0(local_20,&local_60,local_24);
        FUN_00879940(&local_70,local_20,local_24);
        uVar2 = (**(code **)(*local_20 + 0x30))(local_20,local_24);
        FUN_008afa70(auStack_b8,&local_68,local_70,uVar2);
        local_98 = local_60;
        local_90 = &DAT_008b005c;
        local_88 = local_68;
        FUN_00416cd0(param_1,5,*param_1,&LAB_008b006c);
        local_24 = local_24 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00410f20(local_20);
LAB_008affd2:
  FUN_00414560(&local_70,6);
  FUN_00414480(&local_30);
  return param_1;
}

