/* Ghidra address: 01804d50 */
/* Ghidra symbol: FUN_01804d50 */


void FUN_01804d50(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_01804ec0(param_1,local_20,&local_28);
  iVar1 = FUN_004170c0(L"?xml",local_20[0],1);
  if (iVar1 != 1) {
    FUN_01804cf0(param_1);
  }
  iVar1 = FUN_004170c0(L"version=",local_28,1);
  if (iVar1 != 0) {
    FUN_00416dc0(&local_30,local_28,iVar1 + 9,3);
  }
  iVar1 = FUN_004170c0(L"standalone=",local_28,1);
  iVar2 = FUN_00416db0(local_30,&LAB_01804eb4);
  if ((iVar2 == 0) && (iVar1 == 0)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  FUN_00414560(&local_30,3);
  return;
}

