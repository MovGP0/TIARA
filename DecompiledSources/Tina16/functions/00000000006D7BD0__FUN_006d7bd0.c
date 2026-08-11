/* Ghidra address: 006d7bd0 */
/* Ghidra symbol: FUN_006d7bd0 */


void FUN_006d7bd0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  int local_2c;
  longlong local_28;
  char local_19;
  
  local_40 = auStack_78;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  local_28 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x50);
  iVar2 = FUN_006d7630();
  local_2c = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = FUN_006d7610(param_1,local_2c);
      if (*(longlong *)(local_28 + 0x78) == lVar3) {
        uVar4 = FUN_006d7610(param_1,local_2c);
        iVar2 = FUN_006d7630(param_1);
        FUN_006d67a0(uVar4,iVar2 + -1);
        goto LAB_006d7db4;
      }
      local_2c = local_2c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_50 = FUN_006d6420(&PTR_FUN_006ad968,1,param_1);
  *(undefined8 *)(param_1 + 0x538) = local_50;
  cVar1 = FUN_004113d0(local_28,&PTR_FUN_007ee548);
  if (cVar1 != '\0') {
    FUN_0064dd90(local_28,&local_48);
    FUN_0064de00(local_50,local_48);
  }
  FUN_006d6750(*(undefined8 *)(param_1 + 0x538),param_1);
  pcVar5 = (code *)FUN_00411550(local_28,0xffca);
  (*pcVar5)(local_28,param_1,*(longlong *)(param_2 + 8) + 0x60);
  local_19 = *(char *)(local_28 + 0xa9);
  FUN_006d68c0(*(undefined8 *)(param_1 + 0x538),local_19);
  if (local_19 != '\0') {
    FUN_006d78a0(param_1,*(undefined8 *)(param_1 + 0x538));
  }
  FUN_0064c650(local_28,5);
  *(undefined8 *)(param_1 + 0x538) = 0;
LAB_006d7db4:
  FUN_00414480(&local_48);
  return;
}

