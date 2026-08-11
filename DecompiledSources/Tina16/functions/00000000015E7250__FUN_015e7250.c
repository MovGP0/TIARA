/* Ghidra address: 015e7250 */
/* Ghidra symbol: FUN_015e7250 */


void FUN_015e7250(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x730) = 0;
  uVar1 = FUN_007fd800(param_1);
  *(undefined4 *)(param_1 + 0x760) = uVar1;
  *(undefined4 *)(param_1 + 0x754) = *(undefined4 *)(param_1 + 0x9c);
  *(int *)(param_1 + 0x758) = *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x9c) + 0x1e;
  *(undefined4 *)(param_1 + 0x75c) = 1;
  *(undefined4 *)(param_1 + 0x750) = 0xffffffff;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x748) = uVar2;
  FUN_01099800(param_1,uVar2,0);
  return;
}

