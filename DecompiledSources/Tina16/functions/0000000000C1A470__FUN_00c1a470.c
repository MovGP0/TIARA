/* Ghidra address: 00c1a470 */
/* Ghidra symbol: FUN_00c1a470 */


void FUN_00c1a470(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 local_40 [2];
  longlong local_30;
  
  local_40[0] = 0;
  local_30 = 0;
  uVar3 = *param_2;
  (**(code **)(uVar3 + 0x38))(param_2,local_40);
  FUN_00415dd0(&local_30,local_40[0],0);
  uVar4 = 0;
  if (local_30 != 0) {
    uVar4 = *(uint *)(local_30 + -4);
  }
  lVar1 = FUN_00415ab0(local_30);
  for (; 0 < (int)uVar4; uVar4 = uVar4 - (int)(uVar2 & 0xff)) {
    if ((int)uVar4 < 0x100) {
      uVar2 = (ulonglong)uVar4;
    }
    else {
      uVar2 = CONCAT71((int7)(uVar3 >> 8),0xff);
    }
    FUN_00c1a380(param_1,uVar2 & 0xffffffff);
    (**(code **)(*param_1 + 0x20))(param_1,lVar1,uVar2 & 0xff);
    uVar3 = uVar2 & 0xff;
    lVar1 = lVar1 + uVar3;
  }
  FUN_00c1a380(param_1,0);
  FUN_00414480(local_40);
  FUN_004144d0(&local_30);
  return;
}

