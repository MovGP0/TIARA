/* Ghidra address: 006485b0 */
/* Ghidra symbol: FUN_006485b0 */


undefined8 FUN_006485b0(longlong param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  int local_1c;
  
  uVar3 = 0;
  if (param_1 != 0) {
    iVar2 = thunk_FUN_039b6ab1(param_1,&local_1c);
    if (iVar2 != 0) {
      iVar2 = thunk_FUN_0417a31e();
      if (local_1c == iVar2) {
        uVar3 = FUN_00416740(DAT_020122e8);
        sVar1 = thunk_FUN_04195de4(uVar3);
        if (sVar1 == DAT_020122da) {
          uVar3 = thunk_FUN_03dc48a7(param_1,DAT_020122da);
        }
        else {
          uVar3 = FUN_00648560(param_1);
        }
      }
    }
  }
  return uVar3;
}

