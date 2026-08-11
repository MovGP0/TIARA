/* Ghidra address: 00fc7870 */
/* Ghidra symbol: FUN_00fc7870 */


double FUN_00fc7870(longlong param_1,double param_2)

{
  int iVar1;
  double dVar2;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  local_60[0] = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  dVar2 = *(double *)(param_1 + 0xc68) / 6.0;
  if (param_2 <= (1.0 / dVar2) * 65536.0) {
    FUN_00468860(&local_50,dVar2 * param_2);
    iVar1 = FUN_00462650(&local_50);
    FUN_00f61040(local_60,0x10000 - iVar1);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_60[0]);
    param_2 = (1.0 / dVar2) * (double)iVar1;
  }
  FUN_00414480(local_60);
  FUN_00460ba0(&local_50);
  return 1.0 / param_2;
}

