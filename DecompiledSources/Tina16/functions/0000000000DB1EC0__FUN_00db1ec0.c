/* Ghidra address: 00db1ec0 */
/* Ghidra symbol: FUN_00db1ec0 */


undefined8
FUN_00db1ec0(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,double *param_5)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  double local_30;
  
  *param_5 = 1.0;
  uVar2 = 0;
  iVar3 = *param_1;
  if (0 < iVar3) {
    param_1 = param_1 + 2;
    do {
      cVar1 = FUN_00db1ac0(param_1,param_2,param_3,param_4,&local_30);
      if (cVar1 != '\0') {
        uVar2 = 1;
        if (local_30 < *param_5) {
          *param_5 = local_30;
        }
      }
      param_1 = param_1 + 0x46;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar2;
}

