/* Ghidra address: 01a3c370 */
/* Ghidra symbol: FUN_01a3c370 */


undefined8 FUN_01a3c370(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x38),L"Local");
  if (((iVar2 == 0) && (cVar1 = FUN_0147d3c0(*(undefined8 *)(param_1 + 8),L"qwen"), cVar1 != '\0'))
     && (cVar1 = FUN_0147d3c0(*(undefined8 *)(param_1 + 8),L"cloud"), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

