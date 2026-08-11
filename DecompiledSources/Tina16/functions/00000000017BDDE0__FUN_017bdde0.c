/* Ghidra address: 017bdde0 */
/* Ghidra symbol: FUN_017bdde0 */


void FUN_017bdde0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined2 local_1a;
  
  FUN_01cf0710(param_1,param_2);
  iVar3 = FUN_01d31a40(*param_2);
  if (iVar3 == 0) {
    cVar2 = (**(code **)(*param_1 + 0x278))(param_1);
    if (cVar2 != '\0') {
      local_1a = (undefined2)param_1[0x14];
      FUN_01d311c0(*param_2,&local_1a,2);
      local_1a = *(undefined2 *)((longlong)param_1 + 0xa4);
      FUN_01d311c0(*param_2,&local_1a,2);
      FUN_01d311c0(*param_2,param_1 + 0x15,1);
      bVar1 = *(byte *)(*param_2 + 0x78);
      if (bVar1 < 8) {
        bVar4 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        FUN_01d31630(*param_2,param_1[0x13]);
      }
      else {
        FUN_01d313e0(*param_2,param_1[0x13]);
      }
    }
  }
  return;
}

