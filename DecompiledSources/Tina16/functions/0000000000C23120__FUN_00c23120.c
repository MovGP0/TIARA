/* Ghidra address: 00c23120 */
/* Ghidra symbol: FUN_00c23120 */


void FUN_00c23120(longlong *param_1,longlong param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  
  FUN_00c22da0(param_1);
  if (param_3 != 0) {
    FUN_00c22fb0(param_1,param_3);
    iVar3 = 0;
    iVar4 = param_3;
    if (-1 < param_3 + -1) {
      do {
        puVar1 = (undefined1 *)(param_1[1] + (longlong)iVar3 * 3);
        puVar2 = (undefined1 *)(param_2 + (longlong)iVar3 * 4);
        *puVar1 = puVar2[2];
        puVar1[1] = puVar2[1];
        puVar1[2] = *puVar2;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(int *)(param_1 + 2) = param_3;
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return;
}

