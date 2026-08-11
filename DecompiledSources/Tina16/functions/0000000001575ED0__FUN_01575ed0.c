/* Ghidra address: 01575ed0 */
/* Ghidra symbol: FUN_01575ed0 */


void FUN_01575ed0(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_40 = *param_3;
  uStack_38 = param_3[1];
  uStack_30 = param_3[2];
  FUN_004179d0(&local_40,&DAT_00e021a8);
  lVar1 = FUN_01575ce0(param_1,param_2);
  if (lVar1 == 0) {
    lVar1 = FUN_01575a40(&DAT_01573910,1);
    FUN_01575c00(lVar1,&local_40,1);
    FUN_004ae7e0(param_1,lVar1);
    *(undefined4 *)(lVar1 + 8) = param_2;
  }
  else {
    FUN_01575c00(lVar1,&local_40,2);
  }
  FUN_00417740(&local_40,&DAT_00e021a8);
  return;
}

