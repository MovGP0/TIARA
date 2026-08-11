/* Ghidra address: 01a3c410 */
/* Ghidra symbol: FUN_01a3c410 */


undefined8 FUN_01a3c410(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_01a3c370(param_1);
  if (((cVar1 == '\0') &&
      (iVar2 = FUN_004170c0(L"gpt-5",*(undefined8 *)(param_1 + 8),1), iVar2 != 1)) &&
     ((iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x38),L"OpenRouter"), iVar2 != 0 ||
      ((cVar1 = FUN_0147d3c0(*(undefined8 *)(param_1 + 8),L"qwen-vl"), cVar1 == '\0' &&
       (cVar1 = FUN_0147d3c0(*(undefined8 *)(param_1 + 8),L"claude"), cVar1 == '\0')))))) {
    return 0;
  }
  return 1;
}

