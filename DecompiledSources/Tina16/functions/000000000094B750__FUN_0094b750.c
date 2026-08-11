/* Ghidra address: 0094b750 */
/* Ghidra symbol: FUN_0094b750 */


void FUN_0094b750(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  bool bVar3;
  
  bVar1 = (**(code **)(*param_2 + 0x168))(param_2);
  if (bVar1 < 0x10) {
    bVar3 = ((ushort)((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) << (bVar1 & 0x1f)) &
            *(ushort *)(param_1 + 0x10)) != 0;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    uVar2 = FUN_0044d490(&PTR_FUN_00900d18,1,L"Hierarchy request error.");
    FUN_004134c0(uVar2);
  }
  return;
}

