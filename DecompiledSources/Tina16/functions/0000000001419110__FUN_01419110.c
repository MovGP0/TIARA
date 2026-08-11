/* Ghidra address: 01419110 */
/* Ghidra symbol: FUN_01419110 */


undefined8 FUN_01419110(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_004170c0(L"PIC16",*(undefined8 *)(param_1 + 4000),1);
  if ((((iVar1 == 1) || (*(int *)(param_1 + 0xfc0) == 4)) || (*(int *)(param_1 + 0xfc0) == 2)) ||
     ((*(int *)(param_1 + 0xfc0) == 8 || (*(int *)(param_1 + 0xf8c) == 2)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

