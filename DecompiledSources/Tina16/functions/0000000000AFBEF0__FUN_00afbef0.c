/* Ghidra address: 00afbef0 */
/* Ghidra symbol: FUN_00afbef0 */


void FUN_00afbef0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = param_2[1];
  lVar2 = *(longlong *)(param_1 + 0x8b0);
  *(undefined8 *)(lVar2 + 0x108) = *param_2;
  *(undefined8 *)(lVar2 + 0x110) = uVar1;
  return;
}

