/* Ghidra address: 01992870 */
/* Ghidra symbol: FUN_01992870 */


void FUN_01992870(longlong *param_1,int param_2,int param_3,int param_4,int param_5,char param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  FUN_01b1cd00(local_res10,local_res18);
  FUN_01b1cd00(local_res20,&param_5);
  if ((local_res10[0] != local_res20[0]) || (local_res18[0] != param_5)) {
    plVar1 = (longlong *)
             FUN_017bcd00(0,&PTR_FUN_017bca38,0xffffffff,local_res10[0],local_res18[0],
                          local_res20[0],param_5);
    FUN_0041ddd0(local_20,PTR_PTR_02003060);
    local_28 = plVar1;
    uVar2 = FUN_017baf50(&local_28,0);
    FUN_017baeb0(&PTR_FUN_017ba4c0,local_20[0],param_1,uVar2);
    if (plVar1 != (longlong *)0x0) {
      if (plVar1[0x13] == 0) {
        FUN_019a44e0(param_1,&local_30,&LAB_01992a24,plVar1);
        FUN_00414ad0(plVar1 + 0x13,local_30);
      }
      (**(code **)(*param_1 + 0x20))(param_1,plVar1);
      if (param_6 != '\0') {
        (**(code **)(*plVar1 + 0xa0))(plVar1,param_1[0x42]);
      }
    }
    FUN_017baf00();
  }
  FUN_00414480(&local_30);
  FUN_00414480(local_20);
  return;
}

