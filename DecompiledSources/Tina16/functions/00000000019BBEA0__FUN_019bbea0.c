/* Ghidra address: 019bbea0 */
/* Ghidra symbol: FUN_019bbea0 */


void FUN_019bbea0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = auStack_58;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_00414480(param_3);
  FUN_0147cd40(param_1,L"value",&local_20);
  FUN_00414ad0(param_3,local_20);
  FUN_0147c660(&local_20,&local_28);
  uVar1 = FUN_00b8f030(local_20);
  *param_2 = uVar1;
  *param_4 = 1;
  FUN_00414560(&local_28,3);
  return;
}

