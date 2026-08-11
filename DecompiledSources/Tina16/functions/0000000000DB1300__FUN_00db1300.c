/* Ghidra address: 00db1300 */
/* Ghidra symbol: FUN_00db1300 */


void FUN_00db1300(int *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  bVar1 = false;
  iVar3 = *param_1;
  if (0 < iVar3) {
    param_1 = param_1 + 2;
    do {
      if (bVar1) {
LAB_00db1344:
        bVar1 = true;
      }
      else {
        cVar2 = FUN_00db10f0(param_1,param_2,param_3);
        if (cVar2 != '\0') goto LAB_00db1344;
        bVar1 = false;
      }
      param_1 = param_1 + 0x46;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

