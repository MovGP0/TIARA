/* Ghidra address: 006d6f00 */
/* Ghidra symbol: FUN_006d6f00 */


void FUN_006d6f00(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  FUN_00411a80(param_1,param_2);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x528) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x528),iVar2);
      *(undefined8 *)(lVar1 + 0x498) = 0;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x528));
  FUN_006d4c00(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

