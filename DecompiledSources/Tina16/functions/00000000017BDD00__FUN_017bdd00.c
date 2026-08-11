/* Ghidra address: 017bdd00 */
/* Ghidra symbol: FUN_017bdd00 */


int FUN_017bdd00(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar3 = 0;
  cVar1 = (**(code **)(*param_1 + 0x278))(param_1);
  if (cVar1 != '\0') {
    if (*(byte *)(param_2 + 0x78) < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) <<
               (*(byte *)(param_2 + 0x78) & 0x1f) & 0x39U) != 0;
    }
    else {
      bVar4 = false;
    }
    FUN_004168e0(local_30,param_1[0x13]);
    iVar2 = FUN_01d31290(local_30[0]);
    iVar3 = FUN_01d31350(param_1[0x13]);
    if (bVar4) {
      iVar3 = iVar2;
    }
    iVar3 = iVar3 + 5;
  }
  iVar2 = FUN_01cf0700(param_1,param_2);
  FUN_00414520(local_30);
  return iVar3 + iVar2;
}

