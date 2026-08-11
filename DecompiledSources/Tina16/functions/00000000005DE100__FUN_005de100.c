/* Ghidra address: 005de100 */
/* Ghidra symbol: FUN_005de100 */


void FUN_005de100(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_38;
  undefined1 local_30;
  
  uVar2 = FUN_00416740(param_2);
  uVar3 = FUN_00416740(param_3);
  uVar4 = FUN_00416740(param_4);
  uVar5 = FUN_00416740(*(undefined8 *)(param_1 + 8));
  iVar1 = thunk_FUN_03a9a12c(uVar2,uVar3,uVar4,uVar5);
  if (iVar1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 8);
    local_30 = 0x11;
    uVar2 = FUN_0044d8d0(&PTR_FUN_005d2e98,1,PTR_PTR_02004a08,&local_38,0);
    FUN_004134c0(uVar2);
  }
  return;
}

