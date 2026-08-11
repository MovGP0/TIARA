/* Ghidra address: 016ee0e0 */
/* Ghidra symbol: FUN_016ee0e0 */


void FUN_016ee0e0(undefined8 param_1,longlong param_2,int param_3,double param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_3;
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x1c0) + lVar2 * 8);
  if (param_4 < 0.0) {
    param_4 = *(double *)(param_2 + 0x720);
  }
  FUN_016edc70(param_4,uVar1,uVar1,
               *(double *)(param_2 + 0x3c0) *
               *(double *)(*(longlong *)(param_2 + 0x180) + lVar2 * 8),
               *(undefined8 *)(*(longlong *)(param_2 + 0x1b8) + lVar2 * 8),param_4);
  return;
}

