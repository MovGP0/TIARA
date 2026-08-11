/* Ghidra address: 00af5fb0 */
/* Ghidra symbol: FUN_00af5fb0 */


int FUN_00af5fb0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int local_20;
  int local_1c [3];
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x758) + 0x494);
  lVar2 = FUN_00aa8430(*(undefined8 *)(param_1 + 0x8b0),iVar1,&local_20,local_1c);
  if (lVar2 != 0) {
    iVar1 = (local_1c[0] + 1) * 0x10000 + (iVar1 - local_20 & 0xffffU);
  }
  return iVar1;
}

