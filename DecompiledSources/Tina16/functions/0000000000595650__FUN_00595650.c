/* Ghidra address: 00595650 */
/* Ghidra symbol: FUN_00595650 */


void FUN_00595650(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xb0) + 0x10);
  FUN_004185d0(*(undefined8 *)(param_2 + 0x88),
               **(undefined8 **)(lVar1 + 6 + (ulonglong)*(byte *)(lVar1 + 1)),1);
  FUN_004095f0(*(undefined8 *)(param_2 + 0x78));
  return;
}

