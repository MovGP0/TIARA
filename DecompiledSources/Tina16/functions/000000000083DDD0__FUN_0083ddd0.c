/* Ghidra address: 0083ddd0 */
/* Ghidra symbol: FUN_0083ddd0 */


void FUN_0083ddd0(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x508);
  pcVar2 = (code *)FUN_00411550(uVar1,0xffe9);
  (*pcVar2)(uVar1);
  return;
}

