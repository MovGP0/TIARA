/* Ghidra address: 0156ccf0 */
/* Ghidra symbol: FUN_0156ccf0 */


undefined1 FUN_0156ccf0(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 local_res18;
  int *local_res20;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  undefined1 local_21;
  longlong *local_20;
  
  local_50 = auStack_78;
  local_30 = 0;
  local_38 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  local_20 = (longlong *)0x0;
  *local_res20 = -1;
  local_21 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x9b0) + 0x28))();
  local_28 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x9b0) + 0x18))
                (*(longlong **)(param_1 + 0x9b0),&local_38,local_28);
      local_20 = (longlong *)FUN_01b21190(local_38,0x2c,0);
      (**(code **)(*local_20 + 0x18))(local_20,&local_30,1);
      iVar2 = FUN_00416db0(local_30,local_res18);
      if ((iVar2 == 0) && (local_40 = FUN_019ac500(param_2,local_res18), local_40 != 0)) {
        *local_res20 = local_28;
        local_21 = 1;
        FUN_0156ce70(0,local_50);
        goto LAB_0156ce40;
      }
      local_28 = local_28 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (local_20 != (longlong *)0x0) {
    FUN_00410f20(local_20);
  }
LAB_0156ce40:
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_res18);
  return local_21;
}

