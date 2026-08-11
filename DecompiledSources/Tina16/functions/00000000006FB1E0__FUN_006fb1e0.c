/* Ghidra address: 006fb1e0 */
/* Ghidra symbol: FUN_006fb1e0 */


void FUN_006fb1e0(longlong param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x498));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x520));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x510));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x500));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4f0));
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x4b0) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b0),iVar4);
      cVar1 = FUN_004113d0(uVar2,&PTR_FUN_006cb0d0);
      if (cVar1 != '\0') {
        lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b0),iVar4);
        *(undefined8 *)(lVar3 + 0x340) = 0;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4b0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4c0));
  FUN_00652b60(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

