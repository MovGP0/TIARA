/* Ghidra address: 00462e80 */
/* Ghidra symbol: FUN_00462e80 */


ushort FUN_00462e80(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
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
        FUN_00460110(1,2);
      }
      return 0;
    }
    if (uVar1 == 2) {
      return param_1[4];
    }
  }
  else {
    if (uVar1 == 0x10) {
      return (short)(char)param_1[4];
    }
    if (uVar1 == 0x11) {
      return (ushort)(byte)param_1[4];
    }
  }
  local_20 = auStack_48;
  iVar2 = FUN_00462650(param_1);
  if (0xffff < iVar2 + 0x8000U) {
    iVar2 = FUN_00410a90();
  }
  return (ushort)iVar2;
}

