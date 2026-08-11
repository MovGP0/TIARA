/* Ghidra address: 00ddfe90 */
/* Ghidra symbol: FUN_00ddfe90 */


void FUN_00ddfe90(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00414b50(local_20,*(undefined8 *)(param_1 + 0x10));
  FUN_0064d9c0(param_1,param_2);
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x28))
              (*(longlong **)(param_1 + 0x4c0),0xfffffd42);
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x490) + 0x38);
    if ((uVar1 & 0x30) != 0) {
      if ((uVar1 & 0x10) == 0) {
        uVar3 = 0xfffffdfb;
      }
      else {
        uVar3 = 0xfffffdfa;
      }
      FUN_00ddf4a0(param_1,local_30,uVar3);
      iVar2 = FUN_00416db0(local_20[0],local_30[0]);
      if (iVar2 == 0) {
        FUN_00de0540(param_1,uVar3,param_2);
      }
    }
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

