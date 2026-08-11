/* Ghidra address: 00729380 */
/* Ghidra symbol: FUN_00729380 */


uint FUN_00729380(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x30))
                    (*(longlong **)(param_1 + 0x90),param_1 + 0xb8);
  if ((*(longlong *)(param_1 + 0x168) != 0) && ((uVar1 & 0x80000000) == 0)) {
    pcVar2 = (code *)FUN_00411550(param_1,0xffe8);
    (*pcVar2)(param_1);
  }
  return uVar1;
}

