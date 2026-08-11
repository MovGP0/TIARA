/* Ghidra address: 004097b0 */
/* Ghidra symbol: FUN_004097b0 */


undefined8 FUN_004097b0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0041f930();
  if (*(longlong *)(lVar1 + 0x208) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x208) + 0x10);
  }
  return uVar2;
}

