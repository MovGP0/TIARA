/* Ghidra address: 01637590 */
/* Ghidra symbol: FUN_01637590 */


undefined8 FUN_01637590(longlong param_1,int param_2)

{
  double dVar1;
  undefined8 uVar2;
  undefined2 local_20 [12];
  
  dVar1 = *(double *)(*(longlong *)(param_1 + 0x28) + (longlong)param_2 * 8);
  if (dVar1 == 0.0) {
    uVar2 = 0;
  }
  else if (param_2 == 0) {
    uVar2 = FUN_01698550(dVar1);
  }
  else if (param_2 == 1) {
    local_20[0] = 0x5301;
    uVar2 = FUN_016261e0(local_20);
  }
  else {
    uVar2 = FUN_016374b0(&LAB_01637638);
    if (dVar1 != 1.0) {
      uVar2 = FUN_01637560(uVar2,dVar1);
    }
  }
  return uVar2;
}

