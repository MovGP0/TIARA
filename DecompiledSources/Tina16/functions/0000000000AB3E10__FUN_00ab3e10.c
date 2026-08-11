/* Ghidra address: 00ab3e10 */
/* Ghidra symbol: FUN_00ab3e10 */


void FUN_00ab3e10(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_00411a80(param_1,param_2);
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x18) + 600) != 0)) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x118) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 600);
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x118),iVar3);
        FUN_004aee50(uVar1,uVar2,0);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0xe8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xf0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x100));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xf8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x118));
  FUN_00a93170(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

