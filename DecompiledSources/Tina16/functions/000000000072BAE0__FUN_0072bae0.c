/* Ghidra address: 0072bae0 */
/* Ghidra symbol: FUN_0072bae0 */


void FUN_0072bae0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong *local_38;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  uVar6 = 0x10;
  cVar1 = FUN_0080b0e0(*(undefined8 *)PTR_DAT_02004030);
  if (cVar1 != '\0') {
    uVar6 = 0x100010;
  }
  FUN_00414b50(&local_20,param_2[1]);
  local_38 = param_2;
  while( true ) {
    plVar3 = (longlong *)(**(code **)(*local_38 + 8))(local_38);
    if (plVar3 == local_38) break;
    local_38 = plVar3;
    if (plVar3[1] != 0) {
      FUN_00414b50(&local_20,plVar3[1]);
    }
  }
  if (local_20 != 0) {
    iVar2 = 0;
    if (local_20 != 0) {
      iVar2 = *(int *)(local_20 + -4);
    }
    if (0x2e < *(ushort *)(local_20 + -2 + (longlong)iVar2 * 2)) {
      FUN_00416ad0(&local_20,&LAB_0072bc34);
    }
  }
  uVar4 = FUN_00416740(local_20);
  FUN_0080c340(*(undefined8 *)PTR_DAT_02004030,local_30);
  uVar5 = FUN_00416740(local_30[0]);
  thunk_FUN_041604c6(*(undefined8 *)(param_1 + 0xd8),uVar4,uVar5,uVar6);
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return;
}

