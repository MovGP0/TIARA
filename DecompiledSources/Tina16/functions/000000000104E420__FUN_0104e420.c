/* Ghidra address: 0104e420 */
/* Ghidra symbol: FUN_0104e420 */


void FUN_0104e420(longlong param_1,undefined8 param_2,short *param_3,undefined2 param_4)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  iVar2 = FUN_006d5120(*(undefined8 *)(param_1 + 0x6d8));
  if (iVar2 != DAT_0202f414) {
    iVar2 = FUN_006d5120(*(undefined8 *)(param_1 + 0x6d8));
    if (iVar2 != DAT_0202f418) goto LAB_0104e48d;
  }
  if (*param_3 == 0x74) {
    FUN_01052da0(param_1,param_2);
    bVar1 = true;
  }
  else if (*param_3 == 0x77) {
    FUN_010529b0(param_1,param_2);
    bVar1 = true;
  }
LAB_0104e48d:
  if (!bVar1) {
    FUN_00f63c30(*(undefined8 *)(param_1 + 0x980),param_2,param_3,param_4);
  }
  return;
}

