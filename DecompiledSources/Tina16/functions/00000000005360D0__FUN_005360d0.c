/* Ghidra address: 005360d0 */
/* Ghidra symbol: FUN_005360d0 */


bool FUN_005360d0(undefined8 *param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if (((byte *)*param_1 == (byte *)0x0) || (param_1[1] == 0)) {
    return true;
  }
  uVar2 = (ulonglong)*(byte *)*param_1;
  if (uVar2 < 0x12) {
    if (uVar2 == 0x11) {
      iVar1 = FUN_00537db0();
      return iVar1 == 0;
    }
    if (uVar2 == 7) {
      return param_1[2] == 0;
    }
    if (uVar2 == 8) {
      return param_1[2] == 0;
    }
    if (uVar2 == 0xf) {
      plVar3 = (longlong *)(**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1]);
      return *plVar3 == 0;
    }
  }
  else {
    if (uVar2 == 0x13) {
      return param_1[2] == 0;
    }
    if (uVar2 - 0x14 < 2) {
      return param_1[2] == 0;
    }
  }
  return false;
}

