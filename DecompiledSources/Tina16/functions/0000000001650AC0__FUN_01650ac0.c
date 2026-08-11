/* Ghidra address: 01650ac0 */
/* Ghidra symbol: FUN_01650ac0 */


int * FUN_01650ac0(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)0x0;
  if ((param_1 != (int *)0x0) &&
     (((*param_1 != 9 || (piVar1 = param_1, param_1[0x13] != param_2)) &&
      (piVar1 = (int *)FUN_01650ac0(*(undefined8 *)(param_1 + 2),param_2), piVar1 == (int *)0x0))))
  {
    piVar1 = (int *)FUN_01650ac0(*(undefined8 *)(param_1 + 4),param_2);
  }
  return piVar1;
}

