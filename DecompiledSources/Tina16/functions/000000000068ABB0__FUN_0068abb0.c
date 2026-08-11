/* Ghidra address: 0068abb0 */
/* Ghidra symbol: FUN_0068abb0 */


void FUN_0068abb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 local_10;
  
  local_10 = 0;
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x38) + 0x4cc);
  if (bVar1 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (bVar1 & 0x1f) & 0x18U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (!bVar4) {
    uVar3 = FUN_0065b870(*(longlong *)(param_1 + 0x38));
    iVar2 = FUN_00470120(uVar3,0x181,(longlong)(int)param_2,param_3);
    if (iVar2 < 0) {
      FUN_0041ddd0(&local_10,PTR_PTR_02002460);
      uVar3 = FUN_0044d490(&PTR_FUN_00472738,1,local_10);
      FUN_004134c0(uVar3);
    }
  }
  FUN_00414480(&local_10);
  return;
}

