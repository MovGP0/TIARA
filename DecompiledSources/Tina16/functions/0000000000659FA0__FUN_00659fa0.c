/* Ghidra address: 00659fa0 */
/* Ghidra symbol: FUN_00659fa0 */


void FUN_00659fa0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  
  pcVar1 = (code *)FUN_00411550(param_1,0xffcf);
  uVar2 = (*pcVar1)(param_1,0);
  *(ulonglong *)(param_2 + 0x18) = uVar2 & 0xff;
  return;
}

