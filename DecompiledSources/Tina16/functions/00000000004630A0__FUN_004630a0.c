/* Ghidra address: 004630a0 */
/* Ghidra symbol: FUN_004630a0 */


uint FUN_004630a0(ushort *param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  uVar1 = *param_1;
  if (uVar1 < 0x12) {
    if (uVar1 == 0x11) {
      return (uint)(byte)param_1[4];
    }
    if (uVar1 == 0) {
      return 0;
    }
    if (uVar1 == 1) {
      if (DAT_01dc436a != '\0') {
        FUN_00460110(1,0x13);
      }
      return 0;
    }
    if (uVar1 == 0xb) {
      return (int)(short)param_1[4];
    }
  }
  else {
    if (uVar1 == 0x12) {
      return (uint)param_1[4];
    }
    if (uVar1 == 0x13) {
      return *(uint *)(param_1 + 4);
    }
  }
  local_20 = auStack_48;
  uVar2 = FUN_004634b0(param_1);
  if (0xffffffff < uVar2) {
    uVar2 = FUN_00410a90();
  }
  return (uint)uVar2;
}

