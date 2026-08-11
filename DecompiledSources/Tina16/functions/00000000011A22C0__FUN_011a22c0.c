/* Ghidra address: 011a22c0 */
/* Ghidra symbol: FUN_011a22c0 */


void FUN_011a22c0(longlong *param_1)

{
  DAT_020c6314 = *(int *)(param_1[0xd6] + 0x98);
  DAT_020c6318 = *(int *)(param_1[0xd6] + 0x9c);
  if ((DAT_020c6314 != DAT_020c631c) || (DAT_020c6318 != DAT_020c6320)) {
    DAT_020c631c = DAT_020c6314;
    DAT_020c6320 = DAT_020c6318;
    (**(code **)(*param_1 + 0x188))(param_1);
  }
  return;
}

