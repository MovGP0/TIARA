/* Ghidra address: 006e24f0 */
/* Ghidra symbol: FUN_006e24f0 */


void FUN_006e24f0(longlong param_1)

{
  code *pcVar1;
  
  FUN_00742eb0(*(undefined8 *)(param_1 + 0x6d8),0);
  pcVar1 = (code *)FUN_00411550(param_1,0xffa8);
  (*pcVar1)(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x18));
  return;
}

