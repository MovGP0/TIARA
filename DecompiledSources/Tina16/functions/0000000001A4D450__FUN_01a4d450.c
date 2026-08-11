/* Ghidra address: 01a4d450 */
/* Ghidra symbol: FUN_01a4d450 */


undefined2 FUN_01a4d450(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_004170c0(&DAT_01a4d594,local_res10[0],1);
  if (0 < iVar1) {
    FUN_004170c0(L"pass",local_res10[0],1);
  }
  uVar2 = 0x4c;
  iVar1 = FUN_004170c0(L"high",local_res10[0],1);
  if ((0 < iVar1) && (iVar1 = FUN_004170c0(L"pass",local_res10[0],1), 0 < iVar1)) {
    uVar2 = 0x48;
  }
  iVar1 = FUN_004170c0(L"band",local_res10[0],1);
  if ((0 < iVar1) && (iVar1 = FUN_004170c0(L"pass",local_res10[0],1), 0 < iVar1)) {
    uVar2 = 0x50;
  }
  iVar1 = FUN_004170c0(L"band",local_res10[0],1);
  if ((0 < iVar1) && (iVar1 = FUN_004170c0(L"stop",local_res10[0],1), 0 < iVar1)) {
    uVar2 = 0x53;
  }
  FUN_00414480(local_res10);
  return uVar2;
}

