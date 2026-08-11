/* Ghidra address: 01aebc40 */
/* Ghidra symbol: FUN_01aebc40 */


void FUN_01aebc40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x130);
  *(undefined1 *)(lVar1 + 0x20) = 0;
  FUN_00668000(lVar1,0);
  FUN_00668090(*(undefined8 *)(param_1 + 0x130),0);
  return;
}

