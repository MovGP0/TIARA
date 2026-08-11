/* Ghidra address: 01861a70 */
/* Ghidra symbol: FUN_01861a70 */


void FUN_01861a70(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_00411a80(param_1,param_2);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0x10);
  if (0 < iVar2) {
    do {
      uVar1 = FUN_01861e50(*(undefined8 *)(param_1 + 0xa0),iVar2);
      FUN_00410f20(uVar1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x98));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x80));
  FUN_01860680(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

