/* Ghidra address: 01cfd490 */
/* Ghidra symbol: FUN_01cfd490 */


void FUN_01cfd490(longlong *param_1,longlong param_2)

{
  short sVar1;
  
  if (param_2 != 0) {
    FUN_01cfd3d0(param_1);
    sVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    if (sVar1 != 0) {
      FUN_004095f0(param_1[0x18],sVar1);
    }
  }
  return;
}

