/* Ghidra address: 00891ef0 */
/* Ghidra symbol: FUN_00891ef0 */


void FUN_00891ef0(longlong *param_1,undefined8 param_2,undefined8 *param_3,char param_4)

{
  undefined1 uVar1;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined1 local_40 [16];
  undefined8 local_30 [2];
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_30[0] = 0;
  if (param_4 == '\0') {
    FUN_00414b50(local_30,param_2);
    FUN_00874ee0(local_50,local_30,&DAT_008920cc,1,1);
    uVar1 = FUN_00877c50(local_50[0]);
    *(undefined1 *)param_3 = uVar1;
    FUN_00874ee0(&local_58,local_30,&DAT_008920cc,1,1);
    uVar1 = FUN_00877c50(local_58);
    *(undefined1 *)((longlong)param_3 + 1) = uVar1;
    FUN_00874ee0(&local_60,local_30,&DAT_008920cc,1,1);
    uVar1 = FUN_00877c50(local_60);
    *(undefined1 *)((longlong)param_3 + 2) = uVar1;
    FUN_00874ee0(&local_68,local_30,&DAT_008920cc,1,1);
    uVar1 = FUN_00877c50(local_68);
    *(undefined1 *)((longlong)param_3 + 3) = uVar1;
  }
  else if (param_4 == '\x01') {
    FUN_00876210(param_2,local_40);
    (**(code **)(*param_1 + 0x70))(param_1,&local_78,local_40);
    *param_3 = local_78;
    param_3[1] = uStack_70;
  }
  else {
    FUN_0089bf30(param_1);
  }
  FUN_00414560(&local_68,4);
  FUN_00414480(local_30);
  return;
}

