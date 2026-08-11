/* Ghidra address: 00c5ff10 */
/* Ghidra symbol: FUN_00c5ff10 */


undefined8 FUN_00c5ff10(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  int *piVar4;
  undefined4 uVar5;
  undefined1 local_48 [24];
  int local_30;
  uint local_2c [3];
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_017956f0(lVar1);
  piVar4 = &local_30;
  FUN_017954b0(lVar1,in_stack_00000028,in_stack_00000030,local_2c,piVar4);
  uVar2 = (undefined4)((ulonglong)piVar4 >> 0x20);
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x990) + 0x328) != '\0') {
    local_2c[0] = ((int)(local_2c[0] + 2) / 4) * 4;
    local_30 = ((local_30 + 2) / 4) * 4;
  }
  (**(code **)(**(longlong **)(lVar1 + 0xd28) + 0x10))(*(longlong **)(lVar1 + 0xd28));
  uVar3 = CONCAT44(uVar2,local_30);
  FUN_00498350(local_48,local_2c[0],local_30,local_2c[0],uVar3);
  uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uVar2 = FUN_01799a70(lVar1);
  uVar3 = FUN_017b1980(&PTR_FUN_017a8d10,1,local_48,uVar2,
                       CONCAT44(uVar5,*(undefined4 *)(*(longlong *)(lVar1 + 0xc48) + 0x4a8)));
  FUN_004ae7e0(*(undefined8 *)(lVar1 + 0xd28),uVar3);
  uVar3 = FUN_004aeac0(*(undefined8 *)(lVar1 + 0xd28),0);
  FUN_017afd00(uVar3,1);
  *(undefined4 *)(lVar1 + 0xd30) = 1;
  FUN_01795890(lVar1,local_2c[0],local_30,1,1,0);
  return 0;
}

