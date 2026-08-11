/* Ghidra address: 01574e80 */
/* Ghidra symbol: FUN_01574e80 */


void FUN_01574e80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30 [2];
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_34 = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x10);
  FUN_004b89e0(param_2,&local_34,4);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),iVar2);
      FUN_00415dd0(&local_40,*(undefined8 *)(lVar1 + 8),0);
      FUN_01b20f60(param_2,local_40);
      FUN_00415dd0(&local_48,*(undefined8 *)(lVar1 + 0x10),0);
      FUN_01b20f60(param_2,local_48);
      FUN_004b89e0(param_2,lVar1 + 0x18,4);
      FUN_004b89e0(param_2,lVar1 + 0x1c,4);
      FUN_004b89e0(param_2,lVar1 + 0x20,4);
      FUN_004b89e0(param_2,lVar1 + 0x24);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004b89e0(param_2,param_1 + 8,4);
  FUN_004b89e0(param_2,param_1 + 0x38,1);
  FUN_004b89e0(param_2,param_1 + 0x39,1);
  FUN_00415dd0(&local_50,*(undefined8 *)(param_1 + 0x40),0);
  FUN_01b20f60(param_2,local_50);
  FUN_004b89e0(param_2,param_1 + 0x3b,1);
  local_34 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
  FUN_004b89e0(param_2,&local_34,4);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                (*(longlong **)(param_1 + 0x10),local_30,iVar2);
      FUN_00415dd0(&local_58,local_30[0],0);
      FUN_01b20f60(param_2,local_58);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414590(&local_58,4);
  FUN_00414480(local_30);
  return;
}

