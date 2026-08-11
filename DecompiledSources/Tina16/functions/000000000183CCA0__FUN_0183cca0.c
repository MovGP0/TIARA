/* Ghidra address: 0183cca0 */
/* Ghidra symbol: FUN_0183cca0 */


undefined8 FUN_0183cca0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  iVar4 = 0;
  do {
    FUN_0043f750(local_20,iVar4);
    lVar3 = FUN_0184ce20(*(undefined8 *)(param_1 + 0xc0),local_20[0]);
    if (lVar3 == 0) {
      FUN_0043f750(&local_28,iVar4);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x60);
      iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_28);
      if (iVar2 == -1) {
        FUN_0043f750(&local_30,iVar4);
        FUN_00416ba0(param_2,L"_WithList_",local_30);
        FUN_00414560(&local_30,3);
        return param_2;
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}

