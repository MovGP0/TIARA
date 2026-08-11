/* Ghidra address: 015ab000 */
/* Ghidra symbol: FUN_015ab000 */


bool FUN_015ab000(longlong param_1,undefined1 *param_2,int param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int local_24;
  
  bVar4 = param_4 == '\0';
  if (!bVar4) {
    uVar3 = (**(code **)(param_1 + 0x28))(param_1);
    uVar1 = FUN_00414ce0(uVar3);
    local_24 = 0;
    while (0 < param_3) {
      iVar2 = FUN_015aa100(*param_2,uVar3,uVar1);
      if (iVar2 < 0) {
        return bVar4;
      }
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
      if (local_24 == 0) {
        if (0x2d < iVar2) {
          return bVar4;
        }
        local_24 = (iVar2 * 4 + 2) / 3;
      }
      else if (iVar2 < 0x40) {
        local_24 = local_24 + -1;
      }
    }
    if (local_24 != 0) {
      return bVar4;
    }
  }
  return true;
}

