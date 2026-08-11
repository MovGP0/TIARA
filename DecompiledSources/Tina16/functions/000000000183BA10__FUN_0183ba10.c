/* Ghidra address: 0183ba10 */
/* Ghidra symbol: FUN_0183ba10 */


void FUN_0183ba10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined *puVar7;
  int iVar8;
  bool bVar9;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_01836fd0(param_1,&local_20,param_2);
  lVar4 = FUN_0184f010(&PTR_FUN_01841c08,1,param_3,*(undefined8 *)(param_1 + 0x50),local_20);
  FUN_01847420(param_4,lVar4);
  uVar5 = FUN_0181e3c0(param_2,0);
  FUN_01837010(param_1,uVar5);
  uVar5 = FUN_0181e3c0(param_2,0);
  FUN_0181e5f0(uVar5,&local_28,L"text");
  uVar5 = FUN_01837350(param_1,param_3,local_28);
  *(undefined8 *)(lVar4 + 0x40) = uVar5;
  lVar6 = *(longlong *)(lVar4 + 0x40);
  puVar7 = &DAT_01843700;
  cVar2 = FUN_004113d0(lVar6,&DAT_01843700);
  if (cVar2 != '\0') {
    bVar1 = *(byte *)(lVar6 + 0x48);
    if (bVar1 < 0x10) {
      bVar9 = ((int)CONCAT62((int6)((ulonglong)puVar7 >> 0x10),1) << (bVar1 & 0x1f) & 0x485U) != 0;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) goto LAB_0183bb35;
  }
  uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,*(undefined8 *)PTR_DAT_020018c8);
  FUN_004134c0(uVar5);
LAB_0183bb35:
  uVar5 = FUN_0181e3c0(param_2,1);
  uVar5 = FUN_0183a030(param_1,uVar5,param_3);
  *(undefined8 *)(lVar4 + 0x28) = uVar5;
  FUN_01837210(param_1,*(undefined8 *)(lVar4 + 0x40),uVar5);
  iVar8 = 2;
  lVar6 = FUN_0181e3c0(param_2,2);
  iVar3 = FUN_0043e420(*(undefined8 *)(lVar6 + 0x18),L"downto");
  if (iVar3 == 0) {
    *(undefined1 *)(lVar4 + 0x30) = 1;
    iVar8 = 3;
  }
  uVar5 = FUN_0181e3c0(param_2,iVar8);
  uVar5 = FUN_0183a030(param_1,uVar5,param_3);
  *(undefined8 *)(lVar4 + 0x38) = uVar5;
  FUN_01837210(param_1,*(undefined8 *)(lVar4 + 0x40),uVar5);
  iVar3 = FUN_0181e3e0(param_2);
  if (iVar8 + 1 < iVar3) {
    uVar5 = FUN_0181e3c0(param_2,iVar8 + 1);
    FUN_0183d1c0(param_1,uVar5,param_3,lVar4);
  }
  FUN_01836fd0(param_1,&local_30,param_2);
  FUN_0184ee20(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x50),local_30);
  FUN_00414560(&local_30,3);
  return;
}

