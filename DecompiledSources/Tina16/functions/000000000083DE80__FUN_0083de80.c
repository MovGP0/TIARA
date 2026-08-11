/* Ghidra address: 0083de80 */
/* Ghidra symbol: FUN_0083de80 */


void FUN_0083de80(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x508);
  pcVar2 = (code *)FUN_00411550(uVar1,0xffb7);
  (*pcVar2)(uVar1,*(undefined8 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x50));
  **(undefined2 **)(param_1 + 0x48) = 0;
  return;
}

