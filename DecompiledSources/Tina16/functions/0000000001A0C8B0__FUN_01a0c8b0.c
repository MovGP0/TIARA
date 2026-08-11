/* Ghidra address: 01a0c8b0 */
/* Ghidra symbol: FUN_01a0c8b0 */


void FUN_01a0c8b0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  while (lVar2 = *(longlong *)(param_1 + 0x68), lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x10);
    FUN_00418590(lVar2,&DAT_019ec418);
    *(undefined8 *)(param_1 + 0x68) = uVar1;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}

