/* Ghidra address: 00659f60 */
/* Ghidra symbol: FUN_00659f60 */


void FUN_00659f60(longlong param_1,longlong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  
  *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) | 4;
  pcVar1 = (code *)FUN_00411550(param_1,0xcf);
  uVar2 = (*pcVar1)(param_1,1);
  *(ulonglong *)(param_2 + 0x18) = uVar2 & 0xff;
  return;
}

