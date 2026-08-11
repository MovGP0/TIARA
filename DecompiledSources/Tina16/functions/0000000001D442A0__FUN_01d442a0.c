/* Ghidra address: 01d442a0 */
/* Ghidra symbol: FUN_01d442a0 */


void FUN_01d442a0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00414480(local_20);
  iVar2 = 1;
  do {
    uVar1 = FUN_01d447a0(*(undefined8 *)(param_1 + 0x30),param_3,iVar2);
    uVar1 = FUN_01d438c0(uVar1);
    FUN_00416780(local_30,uVar1);
    FUN_00416ad0(local_20,local_30[0]);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 10);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
            (*(longlong **)(param_1 + 0x38),&LAB_01d44384,param_2,local_20[0]);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

