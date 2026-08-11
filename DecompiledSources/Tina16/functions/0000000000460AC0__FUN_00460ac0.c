/* Ghidra address: 00460ac0 */
/* Ghidra symbol: FUN_00460ac0 */


void FUN_00460ac0(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *local_20;
  
  uVar1 = *param_1;
  if (uVar1 < 0x14) {
    uVar3 = thunk_FUN_04133565(param_1);
    FUN_004607e0(uVar3);
  }
  else if (uVar1 == 0x100) {
    *param_1 = 0;
    FUN_004144d0(param_1 + 4);
  }
  else if (uVar1 == 0x102) {
    *param_1 = 0;
    FUN_00414480(param_1 + 4);
  }
  else if (uVar1 == 0x101) {
    (*(code *)PTR_FUN_02010968)(param_1);
  }
  else if ((uVar1 & 0x2000) == 0) {
    cVar2 = FUN_0046eed0(uVar1,&local_20);
    if (cVar2 == '\0') {
      thunk_FUN_04133565(param_1);
      thunk_FUN_04125dff(param_1);
    }
    else {
      (**(code **)(*local_20 + 0x48))(local_20,param_1);
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
    }
  }
  else {
    FUN_004609c0(param_1);
  }
  return;
}

