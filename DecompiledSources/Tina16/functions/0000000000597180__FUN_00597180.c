/* Ghidra address: 00597180 */
/* Ghidra symbol: FUN_00597180 */


int FUN_00597180(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [40];
  
  if (param_1[5] == 0) {
    puVar3 = (undefined8 *)(*param_1 + -8 + (longlong)(int)param_1[1] * 8);
    iVar1 = (int)param_1[1] + -1;
    if (-1 < iVar1) {
      do {
        iVar2 = FUN_00416db0(*puVar3,*param_2);
        if (iVar2 == 0) {
          return iVar1;
        }
        puVar3 = puVar3 + -1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != -1);
    }
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_00597110(auStack_48,param_2);
  }
  return iVar1;
}

