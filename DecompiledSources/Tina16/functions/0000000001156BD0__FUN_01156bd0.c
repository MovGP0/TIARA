/* Ghidra address: 01156bd0 */
/* Ghidra symbol: FUN_01156bd0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01156bd0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                 int param_5,int param_6,char param_7)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  int local_58;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_78;
  (**(code **)(*param_3 + 0x88))(param_3,param_5);
  (**(code **)(*param_3 + 0x70))(param_3,param_6);
  uVar1 = FUN_005ffa40(param_4);
  local_20 = FUN_006056e0(&PTR_FUN_005f7f40,1,param_3,uVar1);
  if (param_7 == '\0') {
    local_58 = param_6;
    FUN_00498350(local_40,0,0,param_5);
    FUN_01acf9e0(param_2,local_40);
  }
  else {
    local_58 = param_6 - _DAT_02030360;
    FUN_00498350(local_40,DAT_02030354,DAT_02030358,param_5 - _DAT_0203035c);
    FUN_01acf9e0(param_2,local_40);
  }
  local_48 = FUN_00498310(0,0);
  FUN_01ace140(param_2,param_1,local_20,&local_48);
  FUN_01acfa60(param_2);
  FUN_01aceb90(param_2,1);
  FUN_00410f20(local_20);
  return;
}

