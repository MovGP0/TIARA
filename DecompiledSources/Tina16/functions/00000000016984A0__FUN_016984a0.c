/* Ghidra address: 016984a0 */
/* Ghidra symbol: FUN_016984a0 */


int * FUN_016984a0(undefined8 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004095c0(0xd0);
  FUN_0040d200(piVar1,0xd0,0);
  if (param_2 == 0x10e) {
    param_2 = 0x119;
  }
  if (param_2 == 0x10f) {
    param_2 = 0x11a;
  }
  *piVar1 = param_2;
  *(undefined8 *)(piVar1 + 2) = param_1;
  piVar1[4] = 0;
  piVar1[5] = 0;
  return piVar1;
}

