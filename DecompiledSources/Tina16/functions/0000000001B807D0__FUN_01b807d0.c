/* Ghidra address: 01b807d0 */
/* Ghidra symbol: FUN_01b807d0 */


undefined8 FUN_01b807d0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  undefined8 local_38;
  wchar_t *local_30 [2];
  longlong local_20;
  
  local_38 = 0;
  local_30[0] = (wchar_t *)0x0;
  local_20 = 0;
  FUN_00414480(param_1);
  FUN_0043ea00(&local_20,param_2);
  FUN_00416dc0(local_30,local_20,1,7);
  if (local_30[0] == L".model ") {
    bVar4 = true;
  }
  else if (local_30[0] == (wchar_t *)0x0) {
    bVar4 = false;
  }
  else {
    iVar3 = FUN_0043e420(local_30[0],L".model ");
    bVar4 = iVar3 == 0;
  }
  lVar1 = local_20;
  if (bVar4) {
    uVar2 = 0;
    if (local_20 != 0) {
      uVar2 = *(undefined4 *)(local_20 + -4);
    }
    FUN_00416dc0(&local_38,local_20,8,uVar2);
    iVar3 = FUN_004170c0(&LAB_01b80964,local_38,1);
    if (iVar3 < 1) {
      uVar2 = 0;
      if (lVar1 != 0) {
        uVar2 = *(undefined4 *)(lVar1 + -4);
      }
      FUN_00416dc0(param_1,local_20,8,uVar2);
    }
    else {
      FUN_00416dc0(param_1,local_20,8,iVar3 + -1);
    }
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_20);
  return param_1;
}

