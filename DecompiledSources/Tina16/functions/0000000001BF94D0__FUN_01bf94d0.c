/* Ghidra address: 01bf94d0 */
/* Ghidra symbol: FUN_01bf94d0 */


void FUN_01bf94d0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = FUN_01bf94c0(param_1);
  lVar2 = FUN_01bf95d0(uVar1);
  if (param_2 == lVar2) {
    FUN_0041ddd0(local_20,PTR_PTR_02005398);
    uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,local_20[0]);
    FUN_004134c0(uVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != param_2) {
    if (lVar2 != 0) {
      uVar1 = FUN_01bf94c0(param_1);
      uVar1 = FUN_01bf95d0(uVar1);
      FUN_004d2d90(lVar2,uVar1);
    }
    *(longlong *)(param_1 + 0x18) = param_2;
    if (param_2 != 0) {
      uVar1 = FUN_01bf94c0(param_1);
      uVar1 = FUN_01bf95d0(uVar1);
      FUN_004d26c0(param_2,uVar1);
    }
  }
  FUN_00414480(local_20);
  return;
}

