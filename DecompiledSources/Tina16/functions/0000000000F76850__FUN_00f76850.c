/* Ghidra address: 00f76850 */
/* Ghidra symbol: FUN_00f76850 */


void FUN_00f76850(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_00f767f0(*(undefined8 *)(param_1 + 0x110),L"Wires");
  iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x20) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x110) + 0x20),iVar3);
      *(undefined8 *)(param_1 + 0xd0) = uVar2;
      cVar1 = FUN_00f6f8e0(*(undefined8 *)(param_1 + 0xd0));
      if (cVar1 != '\0') {
        uVar2 = FUN_004113f0(*(undefined8 *)(param_1 + 0xd0),&PTR_FUN_00f6a950);
        *(undefined8 *)(param_1 + 200) = uVar2;
        FUN_0043f750(&local_28,*(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x3c));
        FUN_0043f750(&local_30,*(undefined4 *)(*(longlong *)(param_1 + 200) + 0x138));
        FUN_0043f750(&local_38,*(undefined4 *)(*(longlong *)(param_1 + 200) + 0x140));
        FUN_00f61140(&local_40,*(undefined1 *)(*(longlong *)(param_1 + 200) + 0x144));
        FUN_00416cd0(&local_20,8,L"wire: ",local_28,L", start comp.: ",local_30,L", end comp.: ",
                     local_38,L", end o. int. conn.:",local_40);
        FUN_00f767f0(*(undefined8 *)(param_1 + 0x110),local_20);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00f767f0(*(undefined8 *)(param_1 + 0x110),0);
  FUN_00f767f0(*(undefined8 *)(param_1 + 0x110),L"Components");
  iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x20) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x110) + 0x20),iVar3);
      *(undefined8 *)(param_1 + 0xd0) = uVar2;
      cVar1 = FUN_00f6f8f0(*(undefined8 *)(param_1 + 0xd0));
      if (cVar1 != '\0') {
        FUN_0043f750(&local_50,*(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x3c));
        FUN_00f6f1e0(*(undefined8 *)(param_1 + 0xd0),&local_58);
        FUN_00416cd0(&local_48,4,L"component: ",local_50,L", pins: ",local_58);
        FUN_00f767f0(*(undefined8 *)(param_1 + 0x110),local_48);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00f767f0(*(undefined8 *)(param_1 + 0x110),0);
  FUN_00414560(&local_58,8);
  return;
}

