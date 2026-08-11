/* Ghidra address: 0164a440 */
/* Ghidra symbol: FUN_0164a440 */


int FUN_0164a440(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x13958) != 0) {
    iVar1 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x13958) + -8);
  }
  if (0 < iVar1) {
    if (iVar1 <= param_2) {
      FUN_01613110(0);
    }
    param_2 = *(int *)(*(longlong *)(param_1 + 0x13958) + (longlong)param_2 * 4);
  }
  return param_2;
}

