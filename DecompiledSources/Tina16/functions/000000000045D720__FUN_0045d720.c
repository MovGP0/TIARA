/* Ghidra address: 0045d720 */
/* Ghidra symbol: FUN_0045d720 */


undefined4 FUN_0045d720(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined4 local_14;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 == 0x400) {
    FUN_004167d0(&local_10,param_1);
    uVar1 = FUN_00448710(local_10,param_4,PTR_DAT_02004830);
    local_14 = *(undefined4 *)(&DAT_01dc40ec + (uVar1 & 0xff) * 4);
  }
  else {
    local_14 = 0x80004001;
  }
  FUN_00414480(&local_10);
  return local_14;
}

