/* Ghidra address: 01a9fe00 */
/* Ghidra symbol: FUN_01a9fe00 */


undefined8 * FUN_01a9fe00(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  iVar2 = 0;
  FUN_0043f750(&local_30,0);
  FUN_00416ba0(&local_20,&DAT_01a9ffd8,local_30);
  FUN_00416ba0(&local_38,local_20,&DAT_01aa0030);
  (**(code **)(*param_2 + 0x10))
            (param_2,&local_28,L"Schematic Editor Color Sets",local_38,&DAT_01aa0044);
  while( true ) {
    iVar1 = FUN_00416db0(local_28,&DAT_01aa0044);
    if (iVar1 == 0) break;
    iVar1 = FUN_00416db0(local_28,param_3);
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 1;
    FUN_0043f750(&local_40,iVar2);
    FUN_00416ba0(&local_20,&DAT_01a9ffd8,local_40);
    FUN_00416ba0(&local_48,local_20,&DAT_01aa0030);
    (**(code **)(*param_2 + 0x10))
              (param_2,&local_28,L"Schematic Editor Color Sets",local_48,&DAT_01aa0044);
  }
  FUN_0043f750(&local_50,iVar2);
  FUN_00416ba0(param_1,local_50,&LAB_01aa0054);
  iVar2 = FUN_00416db0(local_28,&DAT_01aa0044);
  if (iVar2 != 0) {
    iVar2 = FUN_00416db0(local_28,param_3);
    if (iVar2 == 0) {
      FUN_00416ba0(param_1,&DAT_01a9ffd8,*param_1);
    }
  }
  FUN_00414560(&local_50,7);
  return param_1;
}

