/* Ghidra address: 013511c0 */
/* Ghidra symbol: FUN_013511c0 */


void FUN_013511c0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  short *local_20;
  
  (**(code **)(*param_1 + 0x2d0))(param_1,param_2,&local_20);
  iVar1 = FUN_01350fa0(param_3);
  if (*local_20 != iVar1) {
    *local_20 = (short)iVar1;
  }
  return;
}

