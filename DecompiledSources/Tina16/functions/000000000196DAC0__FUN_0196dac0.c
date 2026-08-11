/* Ghidra address: 0196dac0 */
/* Ghidra symbol: FUN_0196dac0 */


void FUN_0196dac0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  iVar2 = 1;
  while( true ) {
    FUN_0043f750(&local_28,iVar2);
    FUN_00416ba0(local_20,L"Style",local_28);
    lVar1 = FUN_0196dc70(*(undefined8 *)(param_1 + 8),local_20[0]);
    if (lVar1 == 0) break;
    iVar2 = iVar2 + 1;
  }
  FUN_0043f750(&local_38,iVar2);
  FUN_00416ba0(&local_30,L"Style",local_38);
  FUN_0196d9f0(param_1,local_30);
  FUN_00414560(&local_38,4);
  return;
}

