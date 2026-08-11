/* Ghidra address: 00461700 */
/* Ghidra symbol: FUN_00461700 */


void FUN_00461700(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *local_20;
  
  if ((*param_1 & 0xbfe8) == 0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else {
    FUN_00460ac0(param_1);
  }
  uVar1 = *param_2;
  if (uVar1 < 0x14) {
    uVar3 = thunk_FUN_03f30cb2(param_1,param_2);
    FUN_004607e0(uVar3);
  }
  else if (uVar1 == 0x100) {
    *param_1 = 0x100;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    FUN_00414bf0(param_1 + 4,*(undefined8 *)(param_2 + 4));
  }
  else if (uVar1 == 0x102) {
    *param_1 = 0x102;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    FUN_00414ad0(param_1 + 4,*(undefined8 *)(param_2 + 4));
  }
  else {
    uVar1 = *param_2;
    if ((uVar1 == 0x4102) || (uVar1 == 0x4100)) {
      *param_1 = uVar1;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    }
    else if (uVar1 == 0x101) {
      *param_1 = 0x101;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      (*(code *)PTR_FUN_02010978)(param_1);
    }
    else if ((uVar1 & 0x2000) == 0) {
      cVar2 = FUN_0046eed0(uVar1,&local_20);
      if (cVar2 == '\0') {
        uVar3 = thunk_FUN_03f30cb2(param_1,param_2);
        FUN_004607e0(uVar3);
      }
      else {
        (**(code **)(*local_20 + 0x50))(local_20,param_1,param_2,0);
      }
    }
    else {
      FUN_00461520(param_1,param_2,FUN_004616f0);
    }
  }
  return;
}

