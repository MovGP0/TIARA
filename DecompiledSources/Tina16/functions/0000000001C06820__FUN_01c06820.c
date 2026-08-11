/* Ghidra address: 01c06820 */
/* Ghidra symbol: FUN_01c06820 */


void FUN_01c06820(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  if (param_2 != (int)param_1[0x69]) {
    *(int *)(param_1 + 0x69) = param_2;
    lVar1 = FUN_01c07120(param_1);
    if (lVar1 != 0) {
      uVar2 = FUN_01c07120(param_1);
      cVar3 = FUN_00652a50(uVar2);
      if (cVar3 != '\0') {
        (**(code **)(*param_1 + 0x260))(param_1);
      }
    }
  }
  return;
}

