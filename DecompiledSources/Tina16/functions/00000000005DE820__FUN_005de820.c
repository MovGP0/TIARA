/* Ghidra address: 005de820 */
/* Ghidra symbol: FUN_005de820 */


void FUN_005de820(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined1 local_20;
  
  uVar2 = FUN_00416740(param_2);
  uVar3 = FUN_00416740(*(undefined8 *)(param_1 + 8));
  iVar1 = thunk_FUN_03a9a12c(uVar2,0,0,uVar3);
  if (iVar1 == 0) {
    local_28 = *(undefined8 *)(param_1 + 8);
    local_20 = 0x11;
    uVar2 = FUN_0044d8d0(&PTR_FUN_005d2e98,1,PTR_PTR_02004a08,&local_28,0);
    FUN_004134c0(uVar2);
  }
  return;
}

