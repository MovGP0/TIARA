/* Ghidra address: 00f50d70 */
/* Ghidra symbol: FUN_00f50d70 */


void FUN_00f50d70(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  ushort local_42;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  *(undefined1 *)(param_1 + 0x6e1) = 0;
  *(undefined4 *)(param_1 + 0x6e4) = param_2;
  FUN_00f4d0d0(local_30,*(undefined8 *)(param_1 + 0x700),param_2,*(undefined1 *)(param_1 + 0x6d8),
               &local_42,1);
  if (local_30[0] == 0) {
    FUN_00414b50(local_30,L"\"-=?\"");
    local_42 = 0x501;
  }
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined2 *)((longlong)plVar2 + 0x2c) = 0x7c;
  FUN_004b50b0(plVar2,local_30[0]);
  iVar1 = (**(code **)(*plVar2 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_004b3cf0(plVar2,&local_38,iVar3);
      FUN_004b5390(plVar2,&local_40,iVar3);
      FUN_00f4cf20(param_1,iVar3,local_38,local_40);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00f4ce40(param_1,local_42 & 0xff,local_42 >> 8);
  FUN_00410f20(plVar2);
  FUN_00414560(&local_40,3);
  return;
}

