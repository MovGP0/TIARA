/* Ghidra address: 0068aae0 */
/* Ghidra symbol: FUN_0068aae0 */


int FUN_0068aae0(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  bool bVar3;
  int local_14;
  undefined8 local_10;
  
  local_10 = 0;
  local_14 = -1;
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x38) + 0x4cc);
  if (bVar1 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (bVar1 & 0x1f) & 0x18U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    uVar2 = FUN_0065b870(*(longlong *)(param_1 + 0x38));
    local_14 = FUN_00470120(uVar2,0x180,0,param_2);
    if (local_14 < 0) {
      FUN_0041ddd0(&local_10,PTR_PTR_02002460);
      uVar2 = FUN_0044d490(&PTR_FUN_00472738,1,local_10);
      FUN_004134c0(uVar2);
    }
  }
  FUN_00414480(&local_10);
  return local_14;
}

