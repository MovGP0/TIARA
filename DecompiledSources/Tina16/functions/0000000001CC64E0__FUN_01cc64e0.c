/* Ghidra address: 01cc64e0 */
/* Ghidra symbol: FUN_01cc64e0 */


void FUN_01cc64e0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(lVar1 + 0x450) = param_2;
  FUN_004b6dc0(*(undefined8 *)(lVar1 + 0x438),param_3);
  return;
}

