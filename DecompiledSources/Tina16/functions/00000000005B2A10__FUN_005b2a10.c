/* Ghidra address: 005b2a10 */
/* Ghidra symbol: FUN_005b2a10 */


void FUN_005b2a10(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_00416db0(param_1[2],param_1[0x1a]);
  if ((iVar2 == 0) && ((param_1[1] == 0 || ((*(ushort *)(param_1[1] + 0x34) & 1) == 0)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  FUN_004d3c50(param_1,param_2);
  if (bVar1) {
    iVar2 = FUN_004d4cf0(param_1);
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0xd8))(param_1,param_2);
    }
  }
  return;
}

