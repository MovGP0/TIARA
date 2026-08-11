/* Ghidra address: 01488670 */
/* Ghidra symbol: FUN_01488670 */


undefined8 FUN_01488670(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined1 *local_48;
  undefined1 local_40;
  undefined1 local_38 [40];
  
  local_60 = 0;
  FUN_00417580(local_38,&DAT_00527bf8);
  cVar1 = (**(code **)(*param_1 + 0x48))(param_1,&DAT_00401390,local_38);
  if (cVar1 == '\0') {
    FUN_00410ae0(*param_1,&local_60);
    local_58 = local_60;
    local_50 = 0x11;
    local_48 = &DAT_00401391;
    local_40 = 4;
    uVar2 = FUN_0044d8d0(&PTR_FUN_00f214b0,1,PTR_DAT_020013b0,&local_58,1);
    FUN_004134c0(uVar2);
  }
  FUN_00560430(local_38,param_2,1);
  FUN_00414480(&local_60);
  FUN_00417740(local_38,&DAT_00527bf8);
  return param_2;
}

