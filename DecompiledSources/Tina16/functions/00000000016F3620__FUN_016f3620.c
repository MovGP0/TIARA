/* Ghidra address: 016f3620 */
/* Ghidra symbol: FUN_016f3620 */


void FUN_016f3620(longlong param_1,undefined8 param_2,char param_3)

{
  double dVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  
  local_20 = auStack_48;
  local_18 = FUN_00b92140(0);
  if (param_3 == '\b') {
    FUN_00dcf670(param_1,param_2,8);
    FUN_00dcf730(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0x118),
                 *(undefined8 *)(param_1 + 0x120));
  }
  else {
    FUN_00dcf740(param_1,param_2,param_3,0);
    FUN_00dcfad0(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0x118));
  }
  FUN_017d9ab0(*(undefined8 *)(param_1 + 0xd8),1);
  *(int *)(param_1 + 0x1208) = *(int *)(param_1 + 0x1208) + 1;
  dVar1 = (double)FUN_00b92140(local_18);
  *(double *)PTR_DAT_02001dd0 = dVar1 + *(double *)PTR_DAT_02001dd0;
  return;
}

