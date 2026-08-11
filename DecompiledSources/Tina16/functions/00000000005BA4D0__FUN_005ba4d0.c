/* Ghidra address: 005ba4d0 */
/* Ghidra symbol: FUN_005ba4d0 */


void FUN_005ba4d0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_20[0] = *param_2;
  local_30[0] = FUN_00448820();
  lVar1 = FUN_004489d0(local_30);
  FUN_005ba740(local_20);
  lVar2 = FUN_0040c840();
  local_30[0] = FUN_00448970(lVar1 + lVar2);
  FUN_00448910(local_30);
  return;
}

