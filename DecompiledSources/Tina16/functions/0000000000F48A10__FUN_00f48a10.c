/* Ghidra address: 00f48a10 */
/* Ghidra symbol: FUN_00f48a10 */


void FUN_00f48a10(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined2 local_2a;
  
  FUN_01d311c0(*param_2,param_1 + 8,2);
  bVar1 = 0;
  do {
    bVar2 = 0;
    do {
      local_2a = *(undefined2 *)(param_1 + 0xc + (ulonglong)bVar1 * 8 + (ulonglong)bVar2 * 4);
      FUN_01d311c0(*param_2,&local_2a,2);
      bVar2 = bVar2 + 1;
    } while (bVar2 != 2);
    bVar1 = bVar1 + 1;
  } while (bVar1 != 5);
  return;
}

