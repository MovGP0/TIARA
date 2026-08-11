/* Ghidra address: 0162fb60 */
/* Ghidra symbol: FUN_0162fb60 */


void FUN_0162fb60(int param_1,undefined8 param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  if (param_4 == '\0') {
    sVar3 = 0;
  }
  else {
    sVar3 = (short)*(undefined4 *)(*(longlong *)(param_3 + 0x13988) + 0x5f0);
  }
  if (*(char *)(param_3 + 8) != '\0') {
    lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x20) + 0x98);
    if (*(longlong *)(param_3 + 0x38) == 0) {
      FUN_01613110(L"SetStateVariable");
    }
    lVar2 = FUN_0163e750(*(undefined8 *)(param_3 + 0x20));
    if ((int)(uint)*(ushort *)(lVar2 + 10) < param_1) {
      FUN_01613110(L"SetStateVariable");
    }
    FUN_016eeca0(lVar2,*(longlong *)(param_3 + 0x38) + 0x1b8,0,
                 (ushort)*(byte *)(lVar1 + 0x10) + sVar3 + (short)param_1,param_2,0);
  }
  FUN_00414480(local_30);
  return;
}

