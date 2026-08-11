/* Ghidra address: 00649d30 */
/* Ghidra symbol: FUN_00649d30 */


bool FUN_00649d30(longlong param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  int local_1c;
  
  bVar5 = false;
  if (param_1 != 0) {
    iVar2 = thunk_FUN_039b6ab1(param_1,&local_1c);
    if (iVar2 != 0) {
      iVar2 = thunk_FUN_0417a31e();
      if (local_1c == iVar2) {
        uVar3 = FUN_00416740(DAT_020122e0);
        sVar1 = thunk_FUN_04195de4(uVar3);
        if (sVar1 == DAT_020122d8) {
          lVar4 = thunk_FUN_03dc48a7(param_1,DAT_020122d8);
          bVar5 = lVar4 != 0;
        }
        else {
          lVar4 = FUN_00648560(param_1);
          bVar5 = lVar4 != 0;
        }
      }
    }
  }
  return bVar5;
}

