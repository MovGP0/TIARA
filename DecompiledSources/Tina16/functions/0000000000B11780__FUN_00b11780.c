/* Ghidra address: 00b11780 */
/* Ghidra symbol: FUN_00b11780 */


char FUN_00b11780(longlong param_1)

{
  longlong lVar1;
  char local_31;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_31 = FUN_0083f440(param_1);
  if (local_31 != '\0') {
    FUN_00468530(&local_30,*(int *)(param_1 + 0x4ac) - *(int *)(param_1 + 0x4c0),0xfffffffffffffffc)
    ;
    lVar1 = FUN_00b13190(*(undefined8 *)(param_1 + 0x600),&local_30,0);
    if (lVar1 != 0) {
      local_31 = *(char *)(lVar1 + 0x2c) == '\0';
    }
  }
  FUN_00460ba0(&local_30);
  return local_31;
}

