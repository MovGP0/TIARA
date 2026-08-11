/* Ghidra address: 0123ac70 */
/* Ghidra symbol: FUN_0123ac70 */


void FUN_0123ac70(undefined8 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 local_res8 [4];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong *local_40;
  longlong *local_38;
  longlong local_30 [2];
  
  local_58 = 0;
  local_60 = 0;
  local_50[0] = 0;
  local_30[0] = 0;
  local_38 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00bac3d0(&local_38);
  (**(code **)(*local_38 + 0x170))(local_38,local_res8[0]);
  (**(code **)(*local_38 + 0xd8))(local_38,local_50,L"filter");
  FUN_0041b890(&local_40,local_50[0],&DAT_0123affe);
  (**(code **)(*local_40 + 0x100))(local_40,local_30,L"Type");
  iVar1 = FUN_0043fc50(local_30[0],0);
  *param_2 = iVar1;
  (**(code **)(*local_40 + 0x100))(local_40,local_30,L"Active");
  iVar1 = FUN_0043fc50(local_30[0],0);
  param_2[1] = iVar1;
  (**(code **)(*local_40 + 0x100))(local_40,local_30,L"Opamp");
  iVar1 = FUN_0043fc50(local_30[0],0);
  param_2[2] = iVar1;
  (**(code **)(*local_40 + 0x100))(local_40,local_30,L"Build");
  iVar1 = FUN_0043fc50(local_30[0],0);
  param_2[3] = iVar1;
  iVar1 = 0;
  piVar2 = param_2 + 4;
  do {
    FUN_0043f750(&local_60,iVar1);
    FUN_00416ba0(&local_58,L"FloatEdit",local_60);
    (**(code **)(*local_40 + 0x100))(local_40,local_30,local_58);
    if (local_30[0] == 0) {
      piVar2[0] = 0;
      piVar2[1] = 0;
    }
    else {
      uVar3 = FUN_00b8f030(local_30[0]);
      *(undefined8 *)piVar2 = uVar3;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar1 != 6);
  iVar1 = *param_2;
  if (iVar1 == 0) {
    *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 0x26) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 0x2a) = *(undefined8 *)(param_2 + 10);
  }
  else if (iVar1 == 1) {
    *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 0x26) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_2 + 0x2a) = *(undefined8 *)(param_2 + 8);
  }
  else if (iVar1 == 2) {
    *(undefined8 *)(param_2 + 0x2e) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 0x2c) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 0x32) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_2 + 0x34) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_2 + 0x36) = *(undefined8 *)(param_2 + 0xe);
  }
  else if (iVar1 == 3) {
    *(undefined8 *)(param_2 + 0x2c) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 0x2e) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 0x32) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_2 + 0x36) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_2 + 0x34) = *(undefined8 *)(param_2 + 0xe);
  }
  FUN_00414560(&local_60,2);
  FUN_0041b800(local_50);
  FUN_0041b800(&local_40);
  FUN_0041b800(&local_38);
  FUN_00414480(local_30);
  FUN_00414480(local_res8);
  return;
}

