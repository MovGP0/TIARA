/* Ghidra address: 0164a490 */
/* Ghidra symbol: FUN_0164a490 */


void FUN_0164a490(longlong param_1,int param_2,undefined4 param_3)

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
    *(undefined4 *)(*(longlong *)(param_1 + 0x13958) + (longlong)param_2 * 4) = param_3;
  }
  return;
}

