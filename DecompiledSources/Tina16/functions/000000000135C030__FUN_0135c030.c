/* Ghidra address: 0135c030 */
/* Ghidra symbol: FUN_0135c030 */


bool FUN_0135c030(longlong param_1,undefined8 param_2,double param_3,double param_4,
                 undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  char cVar2;
  double *pdVar3;
  undefined8 local_res10 [3];
  ulonglong in_stack_ffffffffffffff28;
  bool local_99;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c [3];
  
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_99 = false;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))
                    (*(longlong **)(param_1 + 8),local_res10[0],local_2c);
  if (cVar2 == '\0') {
    pdVar3 = (double *)FUN_004095c0(0x10);
    *(undefined4 *)(pdVar3 + 1) = 1;
    *pdVar3 = -100.0;
    *(undefined1 *)((longlong)pdVar3 + 0xc) = 0;
    FUN_00416ba0(local_50,local_res10[0],&DAT_0135c39c);
    local_2c[0] = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))
                            (*(longlong **)(param_1 + 8),local_50[0],pdVar3);
  }
  else {
    pdVar3 = (double *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                       (*(longlong **)(param_1 + 8),local_2c[0]);
  }
  if (param_3 / 100.0 < param_4 - *pdVar3) {
    in_stack_ffffffffffffff28 = in_stack_ffffffffffffff28 & 0xffffffffffffff00;
    FUN_00b8fd60(&local_58,param_5,*PTR_DAT_02001a08,0,in_stack_ffffffffffffff28);
    FUN_00415dd0(&local_38,local_58,0);
    in_stack_ffffffffffffff28 = in_stack_ffffffffffffff28 & 0xffffffffffffff00;
    FUN_00b8fd60(&local_60,param_6,*PTR_DAT_02001a08,0,in_stack_ffffffffffffff28);
    FUN_00415dd0(&local_40,local_60,0);
    plVar1 = *(longlong **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_70,local_2c[0]);
    FUN_00b8fd60(&local_78,param_4,*PTR_DAT_02001a08,0,
                 in_stack_ffffffffffffff28 & 0xffffffffffffff00);
    FUN_00416880(&local_80,local_38);
    FUN_00416880(&local_88,local_40);
    FUN_00416cd0(&local_68,7,local_70,&DAT_0135c3ac,local_78,&DAT_0135c3ac,local_80,&DAT_0135c3ac,
                 local_88);
    (**(code **)(*plVar1 + 0x40))(plVar1,local_2c[0],local_68);
    *(int *)(pdVar3 + 1) = *(int *)(pdVar3 + 1) + 1;
    *pdVar3 = param_4;
    local_99 = 5 < *(int *)(pdVar3 + 1);
    *(bool *)((longlong)pdVar3 + 0xc) = local_99;
  }
  FUN_00414560(&local_88,8);
  FUN_00414590(&local_40,2);
  FUN_00414480(local_res10);
  return local_99;
}

