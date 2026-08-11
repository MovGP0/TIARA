/* Ghidra address: 00c60060 */
/* Ghidra symbol: FUN_00c60060 */


undefined8 FUN_00c60060(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  int *piVar5;
  undefined4 uVar6;
  undefined1 local_48 [24];
  int local_30;
  uint local_2c;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_017956f0(lVar1);
  piVar5 = &local_30;
  FUN_017954b0(lVar1,in_stack_00000028,in_stack_00000030,&local_2c,piVar5);
  uVar2 = (undefined4)((ulonglong)piVar5 >> 0x20);
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x990) + 0x328) != '\0') {
    local_2c = ((int)(local_2c + 2) / 4) * 4;
    local_30 = ((local_30 + 2) / 4) * 4;
  }
  (**(code **)(**(longlong **)(lVar1 + 0xd28) + 0x10))(*(longlong **)(lVar1 + 0xd28));
  uVar4 = CONCAT44(uVar2,local_30);
  FUN_00498350(local_48,local_2c,local_30,local_2c,uVar4);
  uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uVar2 = FUN_01799a70(lVar1);
  uVar3 = FUN_01799b40(lVar1);
  uVar4 = FUN_017b2230(&PTR_FUN_017a9680,1,*(undefined1 *)(param_1 + 0x20),local_48,
                       CONCAT44(uVar6,uVar2),uVar3,
                       *(undefined4 *)(*(longlong *)(lVar1 + 0xc48) + 0x4a8));
  FUN_004ae7e0(*(undefined8 *)(lVar1 + 0xd28),uVar4);
  uVar4 = FUN_004aeac0(*(undefined8 *)(lVar1 + 0xd28),0);
  FUN_017afd00(uVar4,1);
  *(undefined4 *)(lVar1 + 0xd30) = 7;
  FUN_01795890(lVar1,local_2c,local_30,1,1,uVar3 & 0xffffff00);
  return 0;
}

