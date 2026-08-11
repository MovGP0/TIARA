/* Ghidra address: 012c6a50 */
/* Ghidra symbol: FUN_012c6a50 */


void FUN_012c6a50(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_006decb0(*(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x550));
  if (0 < iVar1) {
    uVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x748));
    FUN_012c7ae0(param_1,uVar2);
    FUN_012c8ae0(param_1,0);
    FUN_00805990(param_1);
    FUN_012c4640(*(undefined8 *)(param_1 + 0x980));
  }
  return;
}

