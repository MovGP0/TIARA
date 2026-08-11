/* Ghidra address: 00f43cb0 */
/* Ghidra symbol: FUN_00f43cb0 */


void FUN_00f43cb0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  uVar5 = FUN_0084e390(*(longlong *)(param_1 + 0x6d0),1,
                       *(undefined4 *)(*(longlong *)(param_1 + 0x6d0) + 0x4ac));
  cVar1 = FUN_004113d0(uVar5,&PTR_FUN_0142bf08);
  if ((cVar1 != '\0') && (*PTR_DAT_020039a8 == '\0')) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x710),local_30);
    iVar2 = FUN_01d0a500(local_30[0]);
    if (iVar2 == 0) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x718),&local_38);
      iVar2 = FUN_01d0a500(local_38);
      if (iVar2 == 0) {
        lVar6 = FUN_0084e390(*(longlong *)(param_1 + 0x6d0),1,
                             *(undefined4 *)(*(longlong *)(param_1 + 0x6d0) + 0x4ac));
        FUN_01d071d0(*(undefined8 *)(param_1 + 0x740),*(undefined4 *)(lVar6 + 0x18));
        goto code_r0x00f43e50;
      }
    }
    lVar6 = FUN_0084e390(*(longlong *)(param_1 + 0x6d0),1,
                         *(undefined4 *)(*(longlong *)(param_1 + 0x6d0) + 0x4ac));
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x710),&local_40);
    uVar3 = FUN_01d0a500(local_40);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x718),&local_48);
    uVar4 = FUN_01d0a500(local_48);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_50);
    uVar5 = FUN_00f436d0(local_50,*(undefined8 *)(param_1 + 0x750));
    FUN_01d07250(*(undefined8 *)(param_1 + 0x740),*(undefined4 *)(lVar6 + 0x18),uVar3,uVar4,uVar5);
  }
code_r0x00f43e50:
  FUN_00414560(&local_50,5);
  return;
}

