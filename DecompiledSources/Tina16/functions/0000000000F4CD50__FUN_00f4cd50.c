/* Ghidra address: 00f4cd50 */
/* Ghidra symbol: FUN_00f4cd50 */


void FUN_00f4cd50(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 local_20;
  
  plVar1 = *(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0xa10);
  iVar2 = (**(code **)(*plVar1 + 0x1a0))(plVar1,2);
  local_20 = CONCAT44(0x14,(((int)plVar1[0x13] - iVar2) - *(int *)(param_1 + 0x98)) + -0x1e);
  local_20 = FUN_0064d1f0(plVar1,&local_20);
  FUN_00806af0(param_1,local_20 & 0xffffffff);
  uVar3 = FUN_00806b40(param_1,local_20._4_4_);
  if (*(byte *)(param_1 + 0x6d8) < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << (*(byte *)(param_1 + 0x6d8) & 0x1f) &
            5U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    FUN_00f4ce40(param_1,1,5);
    FUN_0064cf60(param_1,0x446);
  }
  else {
    FUN_00f4ce40(param_1,2,5);
    FUN_0064cf60(param_1,1099);
  }
  FUN_00f50d70(param_1,0xffffffff);
  return;
}

