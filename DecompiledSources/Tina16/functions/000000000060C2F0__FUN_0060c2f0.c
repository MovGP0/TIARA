/* Ghidra address: 0060c2f0 */
/* Ghidra symbol: FUN_0060c2f0 */


longlong FUN_0060c2f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_0060a460(param_1);
  FUN_006090e0(param_1,param_1);
  lVar1 = *(longlong *)(param_1 + 0x60);
  lVar2 = *(longlong *)(lVar1 + 0x10);
  if (lVar2 == *(longlong *)(lVar1 + 0x28)) {
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
  }
  *(undefined8 *)(lVar1 + 0x10) = 0;
  return lVar2;
}

