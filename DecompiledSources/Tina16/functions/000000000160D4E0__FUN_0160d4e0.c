/* Ghidra address: 0160d4e0 */
/* Ghidra symbol: FUN_0160d4e0 */


undefined1
FUN_0160d4e0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
            undefined4 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_res18;
  undefined8 local_res20;
  undefined1 auStack_888 [32];
  undefined4 *local_868;
  undefined1 *local_860;
  undefined8 local_858;
  undefined8 local_840;
  undefined4 *local_838;
  undefined8 local_830;
  undefined8 local_828;
  undefined1 *local_820;
  undefined1 local_816 [1027];
  undefined1 local_413;
  undefined1 local_412 [1026];
  undefined8 local_10;
  
  local_820 = auStack_888;
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
  local_413 = 1;
  uVar2 = FUN_00442620(local_412,local_res10);
  FUN_015fcc20(uVar2,&local_10,0,0);
  uVar2 = FUN_00442620(local_816,local_res8);
  local_868 = param_5;
  cVar1 = _HTerm_ParseDataFile(local_10,uVar2,local_res18,local_res20);
  if (cVar1 == '\0') {
    FUN_0160d2f0(auStack_888,&local_830);
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_838,0x3e5);
    FUN_0043f750(&local_840,*param_5);
    local_868 = local_838;
    local_860 = &LAB_0160d744;
    local_858 = local_840;
    FUN_00416cd0(&local_828,5,local_830,&DAT_0160d730);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_828);
    FUN_004134c0(uVar2);
  }
  uVar2 = FUN_00442620(local_412,local_res10);
  FUN_015fcd60(local_10,uVar2,0);
  FUN_00414560(&local_840,4);
  FUN_00414560(&local_res8,2);
  return local_413;
}

