/* Ghidra address: 014ce930 */
/* Ghidra symbol: FUN_014ce930 */


void FUN_014ce930(longlong param_1,longlong *param_2,byte param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_40;
  char local_31;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_30[0] = 0;
  iVar1 = (**(code **)(*param_2 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,local_30,iVar3);
      FUN_00416ba0(&local_40,local_30[0],&DAT_014cea64);
      FUN_01b24510(local_40,*(undefined8 *)(param_1 + 0x30),&local_31);
      if (local_31 == '\0') break;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (local_31 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x88))(*(longlong **)(param_1 + 0x48),param_2);
  }
  if ((param_3 & local_31 == '\0') != 0) {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"JSSim: SendMsgs failed");
    FUN_004134c0(uVar2);
  }
  FUN_00414480(&local_40);
  FUN_00414480(local_30);
  return;
}

