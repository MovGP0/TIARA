/* Ghidra address: 00462fa0 */
/* Ghidra symbol: FUN_00462fa0 */


ushort FUN_00462fa0(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  uVar1 = *param_1;
  if (uVar1 < 0xc) {
    if (uVar1 == 0xb) {
      return param_1[4];
    }
    if (uVar1 == 0) {
      return 0;
    }
    if (uVar1 == 1) {
      if (DAT_01dc436a != '\0') {
        local_20 = auStack_48;
        FUN_00460110(1,0x12);
      }
      return 0;
    }
  }
  else {
    if (uVar1 == 0x11) {
      return (ushort)(byte)param_1[4];
    }
    if (uVar1 == 0x12) {
      return param_1[4];
    }
  }
  uVar2 = FUN_00462650(param_1);
  if (0xffff < uVar2) {
    uVar2 = FUN_00410a90();
  }
  return (ushort)uVar2;
}

