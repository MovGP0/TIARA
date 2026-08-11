/* Ghidra address: 00c5a220 */
/* Ghidra symbol: FUN_00c5a220 */


int FUN_00c5a220(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_a0 [15];
  int local_64 [17];
  
  uVar2 = thunk_FUN_040ef593(0);
  thunk_FUN_04172119(uVar2,local_64);
  uVar3 = FUN_005fc8c0(param_1[0x17]);
  uVar3 = thunk_FUN_041a19a1(uVar2,uVar3);
  thunk_FUN_04172119(uVar2,local_a0);
  thunk_FUN_041a19a1(uVar2,uVar3);
  thunk_FUN_041a9b5c(0,uVar2);
  if (local_a0[0] < local_64[0]) {
    local_64[0] = local_a0[0];
  }
  iVar1 = (**(code **)(*param_1 + 0x1a0))(param_1,6);
  return local_a0[0] + local_64[0] / 4 + iVar1 * 4 + 2;
}

