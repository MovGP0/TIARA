/* Ghidra address: 004134e0 */
/* Ghidra symbol: FUN_004134e0 */


void FUN_004134e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_0041f930();
  lVar3 = *(longlong *)(lVar3 + 0x208);
  uVar1 = *(undefined8 *)(lVar3 + 0x10);
  uVar2 = *(undefined8 *)(lVar3 + 8);
  *(undefined8 *)(lVar3 + 0x10) = 0;
  FUN_00412730(uVar1,uVar2);
  FUN_004133b0(uVar1,uVar2);
  return;
}

