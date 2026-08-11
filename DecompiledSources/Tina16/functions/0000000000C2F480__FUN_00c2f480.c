/* Ghidra address: 00c2f480 */
/* Ghidra symbol: FUN_00c2f480 */


void FUN_00c2f480(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00c2e100(param_1,param_2);
  uVar1 = FUN_00c1a3b0(param_2);
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 10) {
    FUN_0040d200(param_1 + 3,0xb,0);
  }
  else if (uVar1 < 0xb) {
    FUN_0041ddd0(local_20,PTR_PTR_02002cc8);
    FUN_00c1a320(local_20[0]);
  }
  FUN_00c1a3e0(param_2,param_1 + 3,0xb);
  (**(code **)(*param_2 + 0x48))(param_2,uVar1 - 0xb,1);
  (**(code **)(*param_1 + 0x58))(param_1,param_2);
  FUN_00414480(local_20);
  return;
}

