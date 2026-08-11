/* Ghidra address: 00c22190 */
/* Ghidra symbol: FUN_00c22190 */


undefined8 FUN_00c22190(undefined8 param_1,int param_2,undefined4 param_3,char param_4)

{
  undefined8 uVar1;
  int local_res10;
  undefined1 auStack_448 [40];
  undefined1 *local_420;
  undefined1 local_418 [1032];
  undefined8 local_10;
  
  local_420 = auStack_448;
  local_res10 = param_2;
  if ((param_4 != '\0') && (0xec < param_2)) {
    local_res10 = 0xec;
  }
  local_10 = FUN_00c21980(&LAB_00c21f48,1,local_res10,param_3);
  FUN_00c22000(local_10,param_1);
  FUN_00c21ab0(local_10,local_418);
  FUN_00410f20(local_10);
  uVar1 = FUN_00c220d0(local_418,local_res10,param_4);
  return uVar1;
}

