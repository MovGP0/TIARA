/* Ghidra address: 00a1bca0 */
/* Ghidra symbol: FUN_00a1bca0 */


void FUN_00a1bca0(longlong param_1,int param_2,longlong param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (0 < param_5) {
    puVar3 = (undefined8 *)(param_3 + (longlong)param_4 * 8);
    puVar4 = (undefined8 *)(param_1 + (longlong)param_2 * 8);
    param_5 = param_5 + 1;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      uVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      FUN_00626670(uVar2,uVar1,param_6);
      param_5 = param_5 + -1;
    } while (1 < param_5);
  }
  return;
}

