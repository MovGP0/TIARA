/* Ghidra address: 01964390 */
/* Ghidra symbol: FUN_01964390 */


undefined8 * FUN_01964390(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x308) + 0x38))(*(longlong **)(param_1 + 0x308),local_20);
  FUN_004168b0(param_2,local_20[0]);
  cVar1 = FUN_0195f670(param_1,0);
  if (cVar1 != '\0') {
    FUN_0043e130(&local_28,*param_2);
    iVar2 = FUN_004170c0(L"[TOTALPAGES]",local_28,1);
    if (iVar2 != 0) {
      FUN_00416e20(param_2,iVar2,0xc);
      FUN_0043f750(&local_30,*(undefined4 *)(param_1 + 0x3b0));
      FUN_00416ea0(local_30,param_2,iVar2);
    }
  }
  FUN_00414560(&local_30,2);
  FUN_00414520(local_20);
  return param_2;
}

