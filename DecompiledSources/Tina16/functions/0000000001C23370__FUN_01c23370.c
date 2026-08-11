/* Ghidra address: 01c23370 */
/* Ghidra symbol: FUN_01c23370 */


void FUN_01c23370(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  while( true ) {
    iVar2 = FUN_01c232b0(param_1);
    if (iVar2 < 1) break;
    iVar2 = FUN_01c232b0(param_1);
    uVar1 = FUN_01c233d0(param_1,iVar2 + -1);
    FUN_00418590(uVar1,&DAT_01c210d0);
    iVar2 = FUN_01c232b0(param_1);
    FUN_004ae870(*(undefined8 *)(param_1 + 0x4a0),iVar2 + -1);
  }
  return;
}

