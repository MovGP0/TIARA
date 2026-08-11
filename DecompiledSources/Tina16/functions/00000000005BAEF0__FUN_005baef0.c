/* Ghidra address: 005baef0 */
/* Ghidra symbol: FUN_005baef0 */


undefined8 FUN_005baef0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_40 [2];
  undefined8 local_30 [4];
  
  local_40[0] = FUN_00448820();
  lVar1 = FUN_004489d0(local_40);
  local_40[0] = FUN_00448820(param_2);
  lVar2 = FUN_004489d0(local_40);
  FUN_005ba1c0(local_30,(lVar1 - lVar2) * 10000);
  return local_30[0];
}

