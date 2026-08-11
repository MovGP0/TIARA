/* Ghidra address: 00c2fae0 */
/* Ghidra symbol: FUN_00c2fae0 */


void FUN_00c2fae0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  uVar1 = FUN_00c1a3b0(param_2);
  while (uVar1 = uVar1 & 0xff, uVar1 != 0) {
    uVar2 = FUN_00c1a3b0(param_2);
    iVar3 = uVar1 - 1;
    if ((uVar2 & 7) == 1) {
      if (iVar3 < 2) {
        FUN_0041ddd0(local_20,PTR_PTR_020050a0);
        FUN_00c1a320(local_20[0]);
      }
      FUN_00c1a3e0(param_2,param_1 + 0x28,2);
      iVar3 = uVar1 - 3;
    }
    else if ((uVar2 & 7) == 2) {
      if (iVar3 < 4) {
        FUN_0041ddd0(&local_28,PTR_PTR_020050a0);
        FUN_00c1a320(local_28);
      }
      FUN_00c1a3e0(param_2,param_1 + 0x2c,4);
      iVar3 = uVar1 - 5;
    }
    if (0 < iVar3) {
      (**(code **)(*param_2 + 0x48))(param_2,iVar3,1);
    }
    uVar1 = FUN_00c1a3b0(param_2);
  }
  FUN_00414560(&local_28,2);
  return;
}

