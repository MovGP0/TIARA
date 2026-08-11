/* Ghidra address: 01575c00 */
/* Ghidra symbol: FUN_01575c00 */


void FUN_01575c00(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = *param_2;
  uStack_28 = param_2[1];
  uStack_20 = param_2[2];
  FUN_004179d0(&local_30,&DAT_00e021a8);
  if (param_3 == 1) {
    FUN_00417c40(param_1 + 0x20,&local_30,&DAT_00e021a8);
    FUN_00417c40(param_1 + 0x38,&local_30,&DAT_00e021a8);
  }
  else {
    FUN_00417c40(param_1 + 0x38,param_1 + 0x20,&DAT_00e021a8);
    FUN_00417c40(param_1 + 0x20,&local_30,&DAT_00e021a8);
  }
  FUN_00417740(&local_30,&DAT_00e021a8);
  return;
}

