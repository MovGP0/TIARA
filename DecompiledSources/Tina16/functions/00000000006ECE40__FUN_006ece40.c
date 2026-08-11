/* Ghidra address: 006ece40 */
/* Ghidra symbol: FUN_006ece40 */


void FUN_006ece40(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int local_a0 [15];
  int local_64 [17];
  
  uVar2 = thunk_FUN_040ef593(0);
  thunk_FUN_04172119(uVar2,local_64);
  uVar3 = FUN_005fc8c0(param_1[0x17]);
  uVar3 = thunk_FUN_041a19a1(uVar2,uVar3);
  thunk_FUN_04172119(uVar2,local_a0);
  thunk_FUN_041a19a1(uVar2,uVar3);
  thunk_FUN_041a9b5c(0,uVar2);
  if (*PTR_DAT_02003210 == '\0') {
    iVar4 = local_64[0];
    if (local_a0[0] < local_64[0]) {
      iVar4 = local_a0[0];
    }
    iVar1 = (**(code **)(*param_1 + 0x1a0))(param_1,6);
    iVar4 = iVar4 / 4 + iVar1 * 4;
  }
  else {
    if ((char)param_1[0x72] == '\0') {
      iVar4 = 6;
    }
    else {
      iVar4 = 8;
    }
    iVar1 = (**(code **)(*param_1 + 0x1a0))(param_1,6);
    iVar4 = iVar4 * iVar1;
  }
  FUN_0064cc50(param_1,local_a0[0] + iVar4);
  return;
}

