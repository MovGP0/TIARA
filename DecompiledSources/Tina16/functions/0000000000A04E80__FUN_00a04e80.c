/* Ghidra address: 00a04e80 */
/* Ghidra symbol: FUN_00a04e80 */


void FUN_00a04e80(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),uVar1,6);
  FUN_004147f0(local_20,uVar1,6,0);
  FUN_0061d840(local_30,local_20[0]);
  FUN_00414c70(local_20,local_30[0]);
  iVar2 = FUN_00415a60(local_20[0],"GIF87A");
  if (iVar2 != 0) {
    iVar2 = FUN_00415a60(local_20[0],"GIF89A");
    if (iVar2 != 0) {
      FUN_00a074d0(1);
    }
  }
  FUN_004144d0(local_30);
  FUN_004144d0(local_20);
  return;
}

