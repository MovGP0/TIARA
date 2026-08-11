/* Ghidra address: 00c60620 */
/* Ghidra symbol: FUN_00c60620 */


undefined8 FUN_00c60620(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  int *piVar3;
  undefined1 local_48 [24];
  int local_30;
  uint local_2c [3];
  undefined4 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_017956f0(lVar1);
  piVar3 = &local_30;
  FUN_017954b0(lVar1,in_stack_00000028,in_stack_00000030,local_2c,piVar3);
  uVar4 = (undefined4)((ulonglong)piVar3 >> 0x20);
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x990) + 0x328) != '\0') {
    local_2c[0] = ((int)(local_2c[0] + 2) / 4) * 4;
    local_30 = ((local_30 + 2) / 4) * 4;
  }
  (**(code **)(**(longlong **)(lVar1 + 0xd28) + 0x10))(*(longlong **)(lVar1 + 0xd28));
  FUN_00498350(local_48,local_2c[0],local_30,local_2c[0],CONCAT44(uVar4,local_30));
  uVar2 = FUN_017b6ac0(&PTR_FUN_017ad080,1,local_48);
  FUN_004ae7e0(*(undefined8 *)(lVar1 + 0xd28),uVar2);
  uVar2 = FUN_004aeac0(*(undefined8 *)(lVar1 + 0xd28),0);
  FUN_017afd00(uVar2,1);
  *(undefined4 *)(lVar1 + 0xd30) = 7;
  FUN_01795890(lVar1,local_2c[0],local_30,1,1,0);
  return 0;
}

