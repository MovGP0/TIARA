/* Ghidra address: 00c35c90 */
/* Ghidra symbol: FUN_00c35c90 */


void FUN_00c35c90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0xe0);
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x78) = 0;
  lVar1 = *(longlong *)(param_2 + 0xe0);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  return;
}

