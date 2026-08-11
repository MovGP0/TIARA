/* Ghidra address: 00958c80 */
/* Ghidra symbol: FUN_00958c80 */


void FUN_00958c80(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  *param_5 = 0;
  if (param_3 == '\0') {
    uVar1 = FUN_00414520(param_5);
    FUN_00958700(param_1,param_2,param_4,uVar1,param_6);
  }
  else {
    uVar1 = FUN_00414520(&local_10);
    FUN_00958700(param_1,param_2,param_4,uVar1,param_6);
    FUN_00947320(local_20,local_10);
    FUN_00414b90(param_5,local_20[0]);
  }
  FUN_00414520(local_20);
  FUN_00414520(&local_10);
  return;
}

