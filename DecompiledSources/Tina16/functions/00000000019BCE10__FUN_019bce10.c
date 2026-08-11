/* Ghidra address: 019bce10 */
/* Ghidra symbol: FUN_019bce10 */


void FUN_019bce10(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  longlong local_30;
  
  local_30 = 0;
  local_38 = 0;
  while( true ) {
    FUN_00419260(&local_30,&DAT_019bcdc0,1,(longlong)*(int *)(*(longlong *)(*param_2 + 0x10) + 0x10)
                );
    iVar5 = *(int *)(*(longlong *)(*param_2 + 0x10) + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar2 = FUN_00f33510(*param_2,iVar4);
        uVar2 = FUN_004113f0(uVar2,&LAB_00f23b78);
        FUN_019bc710(param_1,&local_48,uVar2,param_3);
        puVar1 = (undefined8 *)(local_30 + (longlong)iVar4 * 0x10);
        *puVar1 = local_48;
        puVar1[1] = uStack_40;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    lVar3 = 0;
    if (local_30 != 0) {
      lVar3 = *(longlong *)(local_30 + -8);
    }
    FUN_019bca10(param_1,&local_38,local_30,lVar3 + -1);
    lVar3 = 0;
    if (local_38 != 0) {
      lVar3 = *(longlong *)(local_38 + -8);
    }
    if (lVar3 == 0) break;
    iVar5 = 0;
    if (local_38 != 0) {
      iVar5 = (int)*(undefined8 *)(local_38 + -8);
    }
    iVar4 = 0;
    if (iVar5 - 1U < 0x80000000) {
      do {
        uVar2 = FUN_00f33510(*param_2,*(undefined4 *)
                                       (*(longlong *)(local_38 + (longlong)iVar4 * 8) + 4));
        uVar2 = FUN_004113f0(uVar2,&LAB_00f23b78);
        FUN_019bcb80(param_1,uVar2,param_4,param_4);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  FUN_00419430(&local_38,&DAT_019bb718);
  FUN_00419430(&local_30,&DAT_019bcdc0);
  return;
}

