/* Ghidra address: 00bd3cb0 */
/* Ghidra symbol: FUN_00bd3cb0 */


int * FUN_00bd3cb0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 local_84 [100];
  
  FUN_00bd3d60(param_1,param_2,local_84);
  piVar1 = (int *)FUN_00bd3c40(param_1,local_84);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_00bd3a70(param_1,param_2,local_84);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 8),piVar1);
  }
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  return piVar1;
}

