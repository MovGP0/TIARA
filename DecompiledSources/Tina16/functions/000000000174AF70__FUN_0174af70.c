/* Ghidra address: 0174af70 */
/* Ghidra symbol: FUN_0174af70 */


undefined8 FUN_0174af70(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  
  piVar3 = (int *)&local_28;
  local_28 = *param_2;
  uStack_20 = param_2[1];
  uVar1 = 1;
  iVar2 = 0;
  do {
    if (*piVar3 != *(int *)(param_1 + 0x38 + (longlong)iVar2 * 4)) {
      uVar1 = 0;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 != 4);
  return uVar1;
}

