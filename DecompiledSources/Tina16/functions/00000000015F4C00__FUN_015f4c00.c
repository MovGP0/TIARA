/* Ghidra address: 015f4c00 */
/* Ghidra symbol: FUN_015f4c00 */


undefined1 FUN_015f4c00(longlong param_1)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  longlong local_res8 [4];
  undefined1 local_9;
  uint uVar4;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  uVar4 = 0;
  if (local_res8[0] != 0) {
    uVar4 = *(uint *)(local_res8[0] + -4);
  }
  uVar2 = 1;
  uVar3 = (ushort)uVar4;
  do {
    if (uVar3 == 0) {
      local_9 = 1;
LAB_015f4c6d:
      FUN_00414480(local_res8);
      return local_9;
    }
    sVar1 = *(short *)(local_res8[0] + -2 + (ulonglong)uVar2 * 2);
    if ((sVar1 == 0x55) || (sVar1 == 0x58)) {
      local_9 = 0;
      goto LAB_015f4c6d;
    }
    uVar2 = uVar2 + 1;
    uVar3 = (short)uVar4 - 1;
    uVar4 = (uint)uVar3;
  } while( true );
}

