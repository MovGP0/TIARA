/* Ghidra address: 007d6390 */
/* Ghidra symbol: FUN_007d6390 */


void FUN_007d6390(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = (**(code **)(*param_1 + 0x90))(param_1);
  if (iVar1 <= param_2) {
    FUN_0041ddd0(local_20,PTR_PTR_020025e8);
    uVar2 = FUN_0044d490(&PTR_FUN_00472870,1,local_20[0]);
    FUN_004134c0(uVar2);
  }
  if (param_1[0x14] != 0) {
    uVar2 = FUN_007d56e0(param_1);
    thunk_FUN_041a5831(uVar2,param_2);
  }
  (**(code **)(*param_1 + 0x98))(param_1);
  FUN_00414480(local_20);
  return;
}

