/* Ghidra address: 01bd6bd0 */
/* Ghidra symbol: FUN_01bd6bd0 */


void FUN_01bd6bd0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0xb0) + 0x588));
  *(undefined8 *)(*(longlong *)(param_2 + 0xb0) + 0x588) = 0;
  FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x80));
  FUN_00410f20(*(undefined8 *)(param_2 + 0x88));
  pcVar1 = (code *)FUN_00411550(*(undefined8 *)(param_2 + 0xb0),0xffce);
  (*pcVar1)(*(undefined8 *)(param_2 + 0xb0));
  return;
}

