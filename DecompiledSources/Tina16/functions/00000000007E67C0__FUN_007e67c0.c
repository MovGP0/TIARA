/* Ghidra address: 007e67c0 */
/* Ghidra symbol: FUN_007e67c0 */


undefined8 FUN_007e67c0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_438 [32];
  undefined2 local_418 [516];
  
  local_418[0] = 0;
  if (param_1[0x11] != 0) {
    uVar2 = (**(code **)(*param_1 + 0x90))(param_1);
    FUN_007e66b0(auStack_438,uVar2);
  }
  if (param_1[0x17] != 0) {
    uVar2 = FUN_00416740(param_1[0x17]);
    iVar1 = FUN_004426c0(uVar2,local_418);
    if (iVar1 == 0) {
      return 0;
    }
  }
  FUN_00416830(param_1 + 0x17,local_418,0x200);
  return 1;
}

