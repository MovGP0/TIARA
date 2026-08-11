/* Ghidra address: 00b118c0 */
/* Ghidra symbol: FUN_00b118c0 */


undefined4 FUN_00b118c0(longlong param_1)

{
  longlong lVar1;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_00468530(&local_30,*(int *)(param_1 + 0x4ac) - *(int *)(param_1 + 0x4c0),0xfffffffffffffffc);
  lVar1 = FUN_00b13190(*(undefined8 *)(param_1 + 0x600),&local_30,0);
  if (lVar1 == 0) {
    local_34 = FUN_0083f770(param_1);
  }
  else {
    local_34 = *(undefined4 *)(lVar1 + 0x28);
  }
  FUN_00460ba0(&local_30);
  return local_34;
}

