/* Ghidra address: 0040d150 */
/* Ghidra symbol: FUN_0040d150 */


int FUN_0040d150(undefined *param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = *(ushort *)(param_1 + 8);
  if ((uVar1 < 0xd7b1) || (0xd7b3 < uVar1)) {
    if (param_1 != &DAT_020060b8) {
      FUN_00409930(0x67);
    }
  }
  else {
    if ((uVar1 & 0xd7b2) == 0xd7b2) {
      iVar2 = (**(code **)(param_1 + 0x28))(param_1);
    }
    if (iVar2 == 0) {
      iVar2 = (**(code **)(param_1 + 0x38))(param_1);
    }
    if (iVar2 != 0) {
      FUN_00409930(iVar2);
    }
  }
  return iVar2;
}

