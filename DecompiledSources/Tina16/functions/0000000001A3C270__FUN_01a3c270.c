/* Ghidra address: 01a3c270 */
/* Ghidra symbol: FUN_01a3c270 */


undefined8 FUN_01a3c270(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x38),L"Local");
  if (iVar2 == 0) {
    cVar1 = FUN_0147d3c0(*(undefined8 *)(param_1 + 8),L"qwen");
    if (cVar1 == '\0') goto LAB_01a3c2b4;
    cVar1 = FUN_0147d3c0(*(undefined8 *)(param_1 + 8),L"cloud");
    if (cVar1 == '\0') goto LAB_01a3c2b4;
LAB_01a3c2e0:
    uVar3 = 1;
  }
  else {
LAB_01a3c2b4:
    iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x38),L"OpenRouter");
    if (iVar2 == 0) {
      cVar1 = FUN_0147d3c0(*(undefined8 *)(param_1 + 8),L"qwen-vl");
      if (cVar1 != '\0') goto LAB_01a3c2e0;
    }
    uVar3 = 0;
  }
  return uVar3;
}

