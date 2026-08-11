/* Ghidra address: 01089170 */
/* Ghidra symbol: FUN_01089170 */


undefined1 FUN_01089170(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_31;
  undefined8 local_30 [2];
  int local_1c [3];
  
  local_30[0] = 0;
  FUN_01086170(param_1,local_30);
  lVar1 = FUN_0107a3c0(param_1,local_30[0]);
  *param_3 = 0;
  local_31 = 0;
  if (lVar1 != 0) {
    local_31 = FUN_010aed80(lVar1,param_2,local_1c);
    if (local_1c[0] == -1) {
      *param_3 = 0;
    }
    else {
      uVar2 = FUN_004aeac0(*(undefined8 *)(lVar1 + 0x40),local_1c[0]);
      *param_3 = uVar2;
    }
  }
  FUN_00414480(local_30);
  return local_31;
}

