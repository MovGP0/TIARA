/* Ghidra address: 00b11a50 */
/* Ghidra symbol: FUN_00b11a50 */


undefined1 FUN_00b11a50(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_31 = 0;
  if (param_2 != 0) {
    FUN_00468530(&local_30,param_3 - *(int *)(param_1 + 0x4c0),0xfffffffffffffffc);
    lVar2 = FUN_00b13190(*(undefined8 *)(param_1 + 0x600),&local_30,0);
    if ((lVar2 == 0) || (*(char *)(lVar2 + 0x18) == '\0')) {
      lVar2 = FUN_0084f210(*(undefined8 *)(param_1 + 0x628));
      cVar1 = FUN_00b11e50(param_1,*(undefined8 *)(lVar2 + 0x4a0),1);
      if (cVar1 != '\0') {
        local_31 = 2;
      }
    }
    else {
      local_31 = *(undefined1 *)(lVar2 + 0x18);
    }
  }
  FUN_00460ba0(&local_30);
  return local_31;
}

