/* Ghidra address: 010b3780 */
/* Ghidra symbol: FUN_010b3780 */


void FUN_010b3780(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int local_3c [3];
  
  FUN_01d313e0(*param_2,*(undefined8 *)(param_1 + 0x10));
  FUN_01d324e0(*param_2,*(undefined8 *)(param_1 + 0x20));
  local_3c[0] = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  FUN_01d311c0(*param_2,local_3c,4);
  iVar5 = 0;
  iVar6 = local_3c[0];
  if (-1 < local_3c[0] + -1) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar5);
      FUN_01d313e0(*param_2,*(undefined8 *)(lVar3 + 0x30));
      uVar4 = FUN_010af3b0(lVar3);
      FUN_01d324e0(*param_2,uVar4);
      FUN_01d313e0(*param_2,*(undefined8 *)(lVar3 + 0x38));
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_3c[0] = (**(code **)**(undefined8 **)(param_1 + 0x30))(*(undefined8 **)(param_1 + 0x30));
  FUN_01d311c0(*param_2,local_3c,4);
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  uVar2 = (**(code **)*puVar1)(puVar1);
  FUN_01d326d0(*param_2,puVar1,uVar2);
  FUN_01d311c0(*param_2,param_1 + 0x28,6);
  if (*(char *)(*param_2 + 0x78) == '\0') {
    FUN_01d31630(*param_2,*(undefined8 *)(param_1 + 0x40));
  }
  return;
}

