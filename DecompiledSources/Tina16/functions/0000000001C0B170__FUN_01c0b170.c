/* Ghidra address: 01c0b170 */
/* Ghidra symbol: FUN_01c0b170 */


void FUN_01c0b170(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = *param_2;
  uStack_20 = param_2[1];
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00423b50(&local_28,6,0);
  FUN_01bea6d0(param_1,&local_28,param_3,local_res20,param_5,param_6);
  FUN_00414480(&local_res20);
  return;
}

