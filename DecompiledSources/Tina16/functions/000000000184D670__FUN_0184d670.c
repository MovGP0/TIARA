/* Ghidra address: 0184d670 */
/* Ghidra symbol: FUN_0184d670 */


void FUN_0184d670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong *local_40;
  int local_38;
  int local_34;
  longlong *local_30;
  
  local_50 = auStack_a8;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_88 = param_2;
  local_40 = (longlong *)FUN_01847460(&DAT_01843700,1,param_2,8);
  FUN_0184caa0(param_1,local_40[4],local_40);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b4b10(local_30,param_3);
  local_38 = 1;
  iVar1 = (**(code **)(*local_30 + 0x28))();
  local_34 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*local_30 + 0x18))(local_30,&local_60,local_34);
      FUN_0043ea00(&local_58,local_60);
      local_88 = param_2;
      local_40 = (longlong *)FUN_01847460(&DAT_01843700,1,local_58,8);
      FUN_00468530(&local_78,local_38,0xfffffffffffffffc);
      (**(code **)(*local_40 + 8))(local_40,&local_78);
      *(undefined1 *)((longlong)local_40 + 0x19) = 1;
      FUN_0184caa0(param_1,local_40[4],local_40);
      local_38 = local_38 * 2;
      local_34 = local_34 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(local_30);
  FUN_00460ba0(&local_78);
  FUN_00414560(&local_60,2);
  return;
}

