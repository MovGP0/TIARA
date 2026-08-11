/* Ghidra address: 01168940 */
/* Ghidra symbol: FUN_01168940 */


void FUN_01168940(int *param_1,undefined8 param_2)

{
  undefined8 local_130;
  undefined1 local_128 [256];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_f [7];
  
  local_130 = 0;
  local_20 = 0;
  local_28 = 0;
  local_18 = 0;
  param_1[0x18] = 1;
  FUN_01168ab0(param_1,param_2);
  FUN_004169a0(&local_20,param_1 + 0xd);
  FUN_0043f750(&local_28,*(undefined4 *)PTR_DAT_020047c8);
  FUN_00416ad0(&local_20,local_28);
  FUN_00416910(local_128,local_20,0xff);
  FUN_00415020(local_f,local_128,6);
  FUN_004169a0(&local_130,local_f);
  FUN_011650d0(&DAT_01168aac,local_130,*param_1 - param_1[0x19],param_1[1] - param_1[0x1a],
               param_1[10],*(undefined8 *)(param_1 + 0x1c));
  FUN_00414480(&local_130);
  FUN_00414560(&local_28,3);
  return;
}

