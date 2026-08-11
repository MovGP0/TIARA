/* Ghidra address: 016c52d0 */
/* Ghidra symbol: FUN_016c52d0 */


void FUN_016c52d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  int local_2c;
  longlong *local_28;
  
  local_50 = auStack_78;
  local_28 = (longlong *)FUN_01d34560(&PTR_FUN_01d33528,1,10,5);
  iVar2 = *(int *)(param_3 + 0x10);
  local_2c = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar1 = FUN_01d347d0(param_3,local_2c);
      (**(code **)(*local_28 + 0x50))(local_28,uVar1);
      local_2c = local_2c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  for (local_2c = 0; local_2c < (int)local_28[2]; local_2c = local_2c + 1) {
    uVar1 = FUN_01d347d0(local_28,local_2c);
    FUN_016c5110(auStack_78,uVar1);
  }
  FUN_01d34a70(local_28);
  FUN_00410f20(local_28);
  return;
}

