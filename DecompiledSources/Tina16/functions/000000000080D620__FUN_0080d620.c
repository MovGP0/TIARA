/* Ghidra address: 0080d620 */
/* Ghidra symbol: FUN_0080d620 */


void FUN_0080d620(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *local_38;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00414b50(local_20,param_2[1]);
  local_38 = param_2;
  while( true ) {
    plVar2 = (longlong *)(**(code **)(*local_38 + 8))(local_38);
    if (plVar2 == local_38) break;
    local_38 = plVar2;
    if (plVar2[1] != 0) {
      FUN_00414b50(local_20,plVar2[1]);
    }
  }
  if (local_20[0] != 0) {
    iVar1 = 0;
    if (local_20[0] != 0) {
      iVar1 = *(int *)(local_20[0] + -4);
    }
    if (0x2e < *(ushort *)(local_20[0] + -2 + (longlong)iVar1 * 2)) {
      FUN_00416ad0(local_20,&LAB_0080d754);
    }
  }
  uVar3 = FUN_00416740(local_20[0]);
  FUN_0080c340(param_1,local_30);
  uVar4 = FUN_00416740(local_30[0]);
  FUN_0080d2f0(param_1,uVar3,uVar4,0x10);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

