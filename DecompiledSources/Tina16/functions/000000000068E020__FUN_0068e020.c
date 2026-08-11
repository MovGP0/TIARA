/* Ghidra address: 0068e020 */
/* Ghidra symbol: FUN_0068e020 */


void FUN_0068e020(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_10 = 0;
  if (*(byte *)(param_1 + 0x4cc) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (*(byte *)(param_1 + 0x4cc) & 0x1f)
            & 0x18U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    uVar2 = FUN_0065b870(param_1);
    iVar1 = thunk_FUN_041b2403(uVar2,0x1a7,(longlong)param_2,0);
    if ((iVar1 == -1) || (iVar1 == -2)) {
      FUN_0041ddd0(&local_10,PTR_PTR_02004908);
      local_20 = *(undefined8 *)(param_1 + 0x10);
      local_18 = 0x11;
      uVar2 = FUN_0044d530(&PTR_FUN_004334c0,1,local_10,&local_20,0);
      FUN_004134c0(uVar2);
    }
    else {
      *(int *)(param_1 + 0x49c) = param_2;
    }
  }
  else {
    FUN_0041ddd0(&local_28,PTR_PTR_02002628);
    local_20 = *(undefined8 *)(param_1 + 0x10);
    local_18 = 0x11;
    uVar2 = FUN_0044d530(&PTR_FUN_004334c0,1,local_28,&local_20,0);
    FUN_004134c0(uVar2);
  }
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  return;
}

