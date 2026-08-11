/* Ghidra address: 01966370 */
/* Ghidra symbol: FUN_01966370 */


bool FUN_01966370(longlong param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double extraout_XMM0_Qa;
  double dVar3;
  
  dVar3 = *(double *)(*(longlong *)(param_1 + 0x50) + 0xb0) /
          *(double *)(*(longlong *)(param_1 + 0x50) + 0xa8);
  dVar1 = (double)FUN_019508b0(*(undefined8 *)(param_1 + 0x50));
  dVar2 = (double)FUN_01950860(*(undefined8 *)(param_1 + 0x50));
  FUN_0040c660(dVar3);
  FUN_0040bcd0();
  return 0.0 <= (dVar3 * (param_2 - dVar1) - (param_3 - dVar2)) * extraout_XMM0_Qa;
}

