/* Ghidra address: 0109ef40 */
/* Ghidra symbol: FUN_0109ef40 */


void FUN_0109ef40(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  for (iVar2 = 0;
      (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1660) + 0x3548) + 0x38) != 0 &&
      (iVar2 < 200)); iVar2 = iVar2 + 1) {
    thunk_FUN_0419965d(10);
    FUN_0109f130(param_1,*(undefined8 *)PTR_DAT_02004030);
  }
  if (199 < iVar2) {
    uVar1 = FUN_00b89270();
    FUN_0041ddd0(&local_28,PTR_PTR_02005230);
    FUN_00b8e650(uVar1,&local_20,L"HDLStrings.Msg_TimeoutDbg",local_28);
    FUN_0072d730(local_20,0xffffffff,0xffffffff);
  }
  FUN_00414560(&local_28,2);
  return;
}

