/* Ghidra address: 01525f60 */
/* Ghidra symbol: FUN_01525f60 */


void FUN_01525f60(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined2 local_50;
  int *local_48;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  int local_14 [3];
  
  local_30 = auStack_78;
  local_38 = 0;
  local_20 = 0;
  uVar2 = FUN_019a4600();
  local_58 = 0;
  local_50 = 0;
  local_48 = local_14;
  cVar1 = FUN_014b7d50(0xd,uVar2,1,0);
  if (cVar1 == '\0') {
    *PTR_DAT_02002ce0 = 1;
    DAT_0210ed30 = 0;
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_38,local_14[0] + 0x86);
    FUN_016fd940(local_38);
  }
  else {
    uVar2 = FUN_019a4600();
    DAT_0210ed30 = FUN_01521e20(uVar2,0,1);
  }
  uVar2 = FUN_019a4600();
  FUN_01440040(uVar2,&LAB_015260b4,0);
  FUN_00414480(&local_38);
  FUN_00414480(&local_20);
  return;
}

