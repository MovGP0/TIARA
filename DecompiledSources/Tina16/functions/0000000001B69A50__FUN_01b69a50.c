/* Ghidra address: 01b69a50 */
/* Ghidra symbol: FUN_01b69a50 */


void FUN_01b69a50(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xcf0) + 0x260))(*(longlong **)(param_1 + 0xcf0));
  iVar1 = iVar1 + 9;
  if ((iVar1 < 0) || (0x15 < iVar1)) {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"MsgOffset out of tMessages range");
    FUN_004134c0(uVar2);
  }
  else {
    FUN_010e4210(param_1,iVar1,0);
  }
  return;
}

