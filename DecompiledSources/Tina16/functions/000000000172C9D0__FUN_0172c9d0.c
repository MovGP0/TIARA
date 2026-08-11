/* Ghidra address: 0172c9d0 */
/* Ghidra symbol: FUN_0172c9d0 */


bool FUN_0172c9d0(longlong param_1,uint param_2)

{
  undefined1 local_33 [23];
  int local_1c;
  
  FUN_0172a910(*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x10) + (param_2 & 0xff) * 0x1b + 1);
  FUN_0172a920(*(undefined8 *)(param_1 + 8),local_33,0x1b);
  return local_1c != 0;
}

