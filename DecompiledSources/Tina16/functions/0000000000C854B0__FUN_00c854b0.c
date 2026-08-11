/* Ghidra address: 00c854b0 */
/* Ghidra symbol: FUN_00c854b0 */


void FUN_00c854b0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  local_50 = 0;
  local_58 = 0;
  FUN_00411a80(param_1,param_2);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb8))
            (*(longlong **)(param_1 + 0x10),L"ComponentHotkeys");
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_004b3cf0(*(undefined8 *)(param_1 + 0x38),&local_50,iVar3);
      FUN_004b5390(*(undefined8 *)(param_1 + 0x38),&local_58,iVar3);
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                (*(longlong **)(param_1 + 0x10),L"ComponentHotkeys",local_50,local_58);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
  local_30 = (undefined8 *)(param_1 + 0x30);
  uVar1 = *local_30;
  *local_30 = 0;
  FUN_00410f20(uVar1);
  local_38 = (undefined8 *)(param_1 + 8);
  uVar1 = *local_38;
  *local_38 = 0;
  FUN_00410f20(uVar1);
  local_40 = (undefined8 *)(param_1 + 0x20);
  uVar1 = *local_40;
  *local_40 = 0;
  FUN_00410f20(uVar1);
  local_48 = (undefined8 *)(param_1 + 0x18);
  uVar1 = *local_48;
  *local_48 = 0;
  FUN_00410f20(uVar1);
  FUN_00414560(&local_58,2);
  if ('\0' < param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

