/* Ghidra address: 01626eb0 */
/* Ghidra symbol: FUN_01626eb0 */


int * FUN_01626eb0(undefined8 param_1,int param_2,int param_3,int param_4)

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
  piVar1[0x21] = param_3;
  piVar1[0x22] = param_4;
  return piVar1;
}

