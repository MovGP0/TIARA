/* Ghidra address: 0116c320 */
/* Ghidra symbol: FUN_0116c320 */


void FUN_0116c320(int *param_1,undefined8 param_2)

{
  undefined8 local_130;
  undefined1 local_128 [256];
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined1 local_f [7];
  
  local_130 = 0;
  local_20[0] = 0;
  local_28 = 0;
  param_1[0x18] = 1;
  DAT_0203a4f0 = *param_1 - param_1[0x22];
  DAT_0203a4f4 = param_1[1] - param_1[9];
  DAT_0203a4f8 = *param_1 - param_1[0x22];
  DAT_0203a4fc = param_1[1] + param_1[9];
  FUN_0116c4d0(param_1,param_2);
  FUN_004169a0(local_20,param_1 + 0xd);
  FUN_0043f750(&local_28,*(undefined4 *)PTR_DAT_020047c8);
  FUN_00416ad0(local_20,local_28);
  FUN_00416910(local_128,local_20[0],0xff);
  FUN_00415020(local_f,local_128,6);
  FUN_004169a0(&local_130,local_f);
  FUN_011650d0(&DAT_0116c4cc,local_130,*param_1 - param_1[0x19],param_1[1] - param_1[0x1a],
               param_1[10],0);
  FUN_00414480(&local_130);
  FUN_00414560(&local_28,2);
  return;
}

