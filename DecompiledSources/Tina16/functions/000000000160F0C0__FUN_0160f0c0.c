/* Ghidra address: 0160f0c0 */
/* Ghidra symbol: FUN_0160f0c0 */


undefined8 FUN_0160f0c0(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 local_20;
  
  local_20 = (char)*param_1;
  uVar1 = *param_1 >> 0x10;
  if (local_20 == '\0') {
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 0x2000) == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 7;
      }
    }
    else {
      uVar2 = 6;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

