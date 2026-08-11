/* Ghidra address: 013faba0 */
/* Ghidra symbol: FUN_013faba0 */


void FUN_013faba0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),1,*(undefined4 *)(param_1 + 0x98));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,*(undefined4 *)(param_1 + 0x9c));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,*(undefined4 *)(param_1 + 0x98));
  lVar3 = FUN_019a45d0();
  iVar6 = *(int *)(lVar3 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar4 = FUN_00b94e60(lVar3,iVar5);
      FUN_013faae0(auStack_58,uVar4);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x6e0) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x6e0) + 0x18))
                ((longlong *)**(undefined8 **)(param_1 + 0x6e0),local_30,iVar5);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
      iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_30[0]);
      if (-1 < iVar2) {
        FUN_0068bd10(*(undefined8 *)(param_1 + 0x6b0),iVar2,1);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_0064cf60(param_1,0x4a5);
  FUN_00414480(local_30);
  return;
}

