/* Ghidra address: 01142a60 */
/* Ghidra symbol: FUN_01142a60 */


void FUN_01142a60(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  double local_58;
  int local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  byte *local_28;
  int local_1c;
  longlong local_18;
  undefined8 local_10;
  
  local_30 = auStack_78;
  local_38 = 0;
  local_18 = FUN_007fc180(&PTR_FUN_00c53a28,1,*(undefined8 *)PTR_DAT_02004030);
  local_28 = (byte *)(param_1 + 0x780);
  uVar1 = FUN_00b89270();
  FUN_00b8e520(uVar1,&local_38,0x10f);
  FUN_00c54370(local_18,local_38);
  *(undefined1 *)(local_18 + 0x6c1) = 0;
  FUN_008059a0(local_18);
  local_10 = FUN_0113e810(&DAT_0113e408,1,PTR_DAT_02004010[0x81a],0);
  local_50 = 1 << (*local_28 & 0x1f);
  local_58 = 1.0 / ((double)local_50 * *(double *)(local_28 + 9));
  local_48 = *(undefined8 *)(param_1 + 0x798);
  local_40 = 0;
  local_1c = local_50;
  FUN_0113eac0(local_10,*(undefined8 *)(param_1 + 0x770),*(undefined8 *)(param_1 + 0x778),
               *(undefined8 *)(local_28 + 1));
  FUN_0113edb0(local_10,*local_28,*(undefined8 *)(param_1 + 0x798));
  FUN_00410f20(local_10);
  FUN_00410f20(local_18);
  FUN_00414480(&local_38);
  return;
}

