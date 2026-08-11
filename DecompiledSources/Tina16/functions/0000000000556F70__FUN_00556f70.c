/* Ghidra address: 00556f70 */
/* Ghidra symbol: FUN_00556f70 */


void FUN_00556f70(code *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 extraout_XMM0_Qa;
  undefined1 local_1d8 [464];
  
  uVar1 = *(uint *)(param_2 + 5);
  if (uVar1 != 0) {
    puVar3 = param_2;
    if (0x1e0 < uVar1) {
      uVar1 = FUN_00556f40();
    }
    FUN_00409a70(puVar3[4],local_1d8,(longlong)(int)uVar1);
  }
  uVar2 = (*param_1)(*param_2,param_2[1],param_2[2],param_2[3]);
  param_2[6] = uVar2;
  param_2[7] = extraout_XMM0_Qa;
  return;
}

