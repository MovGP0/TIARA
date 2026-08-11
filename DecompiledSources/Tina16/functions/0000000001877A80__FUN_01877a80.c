/* Ghidra address: 01877a80 */
/* Ghidra symbol: FUN_01877a80 */


void FUN_01877a80(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 == 0) {
    FUN_01877920(param_1,param_3,param_4);
  }
  else {
    FUN_01877720(param_1,param_2,param_3);
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    iVar1 = iVar1 + -2;
    if (param_2 <= iVar1) {
      iVar2 = (param_2 - iVar1) + -1;
      do {
        *(undefined8 *)(param_1[5] + (longlong)(iVar1 + 1) * 8) =
             *(undefined8 *)(param_1[5] + (longlong)iVar1 * 8);
        iVar1 = iVar1 + -1;
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0);
    }
    *(undefined8 *)(param_1[5] + (longlong)param_2 * 8) = param_4;
  }
  return;
}

