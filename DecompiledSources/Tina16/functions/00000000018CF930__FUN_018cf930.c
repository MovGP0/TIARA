/* Ghidra address: 018cf930 */
/* Ghidra symbol: FUN_018cf930 */


void FUN_018cf930(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 400) = 0;
  }
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar2);
      if (lVar1 != 0) {
        if (*(int *)(lVar1 + 0x38) < 2) {
          FUN_00410f20(lVar1);
        }
        else {
          *(int *)(lVar1 + 0x38) = *(int *)(lVar1 + 0x38) + -1;
        }
      }
      FUN_004aedb0(*(undefined8 *)(param_1 + 0x20),iVar2,0);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_00452320(param_1 + 0x20);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

