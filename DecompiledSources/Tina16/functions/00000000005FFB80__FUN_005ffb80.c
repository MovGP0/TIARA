/* Ghidra address: 005ffb80 */
/* Ghidra symbol: FUN_005ffb80 */


void FUN_005ffb80(longlong *param_1,byte param_2)

{
  undefined8 uVar1;
  
  param_2 = param_2 & ~*(byte *)(param_1 + 0xd);
  if (param_2 != 0) {
    if ((param_2 & 1) != 0) {
      (**(code **)(*param_1 + 0x138))(param_1);
      if (param_1[0xc] == 0) {
        uVar1 = FUN_0044d710(&PTR_FUN_00472870,1,PTR_PTR_02002ae0);
        FUN_004134c0(uVar1);
      }
    }
    if ((param_2 & 2) != 0) {
      FUN_005ffc30(param_1);
    }
    if ((param_2 & 4) != 0) {
      FUN_005ffc70(param_1);
    }
    if ((param_2 & 8) != 0) {
      FUN_005ffcb0(param_1);
    }
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | param_2;
  }
  return;
}

