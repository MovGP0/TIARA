/* Ghidra address: 00a34430 */
/* Ghidra symbol: FUN_00a34430 */


bool FUN_00a34430(longlong param_1,longlong *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 local_res18 [4];
  undefined8 local_20 [2];
  uint local_c;
  
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_00a33eb0(param_1,param_4);
  if (0 < param_4) {
    (**(code **)(*param_2 + 0x18))(param_2,*(undefined8 *)(param_1 + 8),param_4);
  }
  (**(code **)(*param_2 + 0x18))(param_2,&local_c,4);
  local_c = FUN_00a32f80(local_c);
  uVar1 = FUN_00a32ea0(0xffffffff,local_res18,4);
  uVar2 = FUN_00a32ea0(uVar1,*(undefined8 *)(param_1 + 8),param_4);
  bVar3 = ~uVar2 == local_c;
  if (!bVar3) {
    FUN_0041ddd0(local_20,PTR_PTR_02004d00);
    FUN_00a39bd0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_00a2d170,local_20[0]);
  }
  FUN_00414480(local_20);
  return bVar3;
}

