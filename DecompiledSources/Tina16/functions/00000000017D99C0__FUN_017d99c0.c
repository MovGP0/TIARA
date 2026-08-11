/* Ghidra address: 017d99c0 */
/* Ghidra symbol: FUN_017d99c0 */


undefined8 FUN_017d99c0(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  short sVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 0x18);
  sVar2 = *(short *)(plVar1[1] + (longlong)param_3 * 2);
  if (sVar2 < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*plVar1 + (longlong)sVar2 * 0x18);
  }
  return uVar3;
}

