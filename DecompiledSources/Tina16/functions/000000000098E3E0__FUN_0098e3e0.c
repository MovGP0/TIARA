/* Ghidra address: 0098e3e0 */
/* Ghidra symbol: FUN_0098e3e0 */


undefined8 FUN_0098e3e0(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x1c0))(param_1);
  if ((uVar1 & 0x10) == 0) {
    if ((uVar1 & 0x20) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

