/* Ghidra address: 013512a0 */
/* Ghidra symbol: FUN_013512a0 */


ulonglong FUN_013512a0(longlong *param_1,undefined1 param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double *local_20;
  
  (**(code **)(*param_1 + 0x2d0))(param_1,param_2,&local_20);
  dVar2 = (double)FUN_01350e90(param_3);
  dVar1 = *local_20;
  if (dVar1 != dVar2) {
    FUN_01d3a010(local_20,6,dVar2);
  }
  return CONCAT71((int7)((ulonglong)param_3 >> 8),dVar1 != dVar2) & 0xffffffff;
}

