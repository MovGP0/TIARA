/* Ghidra address: 00785dd0 */
/* Ghidra symbol: FUN_00785dd0 */


undefined8 FUN_00785dd0(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar2 = 1;
  if (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x2c8) & 4) == 0) && (*param_2 - 0x81U < 0x29)) {
    uVar2 = 0;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x2c8) & 2) != 0) {
    return uVar2;
  }
  iVar1 = *param_2;
  if (iVar1 < 0x1002) {
    if (iVar1 == 0x1001) {
      return 0;
    }
    if (iVar1 == 0xf) {
      return 0;
    }
    if (iVar1 == 0x14) {
      return 0;
    }
    uVar3 = iVar1 - 0x132;
  }
  else {
    if (iVar1 == 0x111d) {
      return 0;
    }
    uVar3 = iVar1 - 0xbd32;
  }
  if (uVar3 < 7) {
    return 0;
  }
  return uVar2;
}

