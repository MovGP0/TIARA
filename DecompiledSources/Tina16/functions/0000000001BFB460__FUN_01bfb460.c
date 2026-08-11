/* Ghidra address: 01bfb460 */
/* Ghidra symbol: FUN_01bfb460 */


void FUN_01bfb460(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  FUN_00654410(*(undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x18));
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x18);
  pcVar2 = (code *)FUN_00411550(uVar1,0xffce);
  (*pcVar2)(uVar1);
  return;
}

