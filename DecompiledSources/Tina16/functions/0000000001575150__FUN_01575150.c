/* Ghidra address: 01575150 */
/* Ghidra symbol: FUN_01575150 */


undefined8
FUN_01575150(longlong param_1,longlong param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  *param_4 = 0;
  *param_5 = 0;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x28),iVar2);
      if ((*(longlong *)(lVar1 + 8) == param_2) && (*(int *)(lVar1 + 0x10) == param_3)) {
        *param_4 = *(undefined4 *)(lVar1 + 0x14);
        *param_5 = *(undefined4 *)(lVar1 + 0x18);
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

