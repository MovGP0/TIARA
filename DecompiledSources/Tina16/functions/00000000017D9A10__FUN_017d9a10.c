/* Ghidra address: 017d9a10 */
/* Ghidra symbol: FUN_017d9a10 */


undefined8 * FUN_017d9a10(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  short sVar3;
  
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_3 * 0x18);
  sVar3 = *(short *)(plVar1[1] + (longlong)param_4 * 2);
  if (sVar3 < 0) {
    puVar2 = (undefined8 *)(PTR_DAT_020025e0 + 8);
    *param_2 = *(undefined8 *)PTR_DAT_020025e0;
    param_2[1] = *puVar2;
  }
  else {
    FUN_00409a70(*plVar1 + (longlong)sVar3 * 0x18,param_2,0x10);
  }
  return param_2;
}

