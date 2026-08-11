/* Ghidra address: 0160cb70 */
/* Ghidra symbol: FUN_0160cb70 */


undefined1
FUN_0160cb70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined *param_6,undefined4 *param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_898 [32];
  undefined *local_878;
  undefined4 *local_870;
  undefined1 *local_868;
  undefined8 local_860;
  undefined4 local_858;
  undefined8 local_840;
  undefined4 *local_838;
  undefined8 local_830;
  undefined8 local_828;
  undefined1 *local_820;
  undefined1 local_80e [2053];
  undefined1 local_9;
  
  local_820 = auStack_898;
  local_828 = 0;
  local_830 = 0;
  local_838 = (undefined4 *)0x0;
  local_840 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  local_9 = 1;
  uVar2 = FUN_00442620(local_80e,local_res8);
  local_878 = param_6;
  local_870 = param_7;
  local_868 = (undefined1 *)CONCAT44(local_868._4_4_,param_8);
  local_860 = CONCAT44(local_860._4_4_,param_9);
  local_858 = param_10;
  cVar1 = _PMBUS_UpdateDataFile(local_res18,uVar2,local_res20,param_5);
  if (cVar1 == '\0') {
    FUN_0160c910(auStack_898,&local_830);
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_838,0x3e5);
    FUN_0043f750(&local_840,*param_7);
    local_878 = &DAT_0160cde0;
    local_870 = local_838;
    local_868 = &LAB_0160cdf4;
    local_860 = local_840;
    FUN_00416cd0(&local_828,6,L"PMBUS Data File: ",local_830);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_828);
    FUN_004134c0(uVar2);
  }
  FUN_00414560(&local_840,4);
  FUN_00414560(&local_res8,2);
  return local_9;
}

