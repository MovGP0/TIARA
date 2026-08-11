/* Ghidra address: 01b924a0 */
/* Ghidra symbol: FUN_01b924a0 */


void FUN_01b924a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  lVar1 = *(longlong *)(param_1 + 0x750);
  if (lVar1 != 0) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e0),local_20);
    lVar1 = FUN_019a26a0(lVar1,local_20[0]);
    FUN_01768da0(*(undefined8 *)(param_1 + 0x778),lVar1);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),*(undefined8 *)(lVar1 + 0x10));
    FUN_00414480(param_1 + 0x760);
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_28,0x85e);
    uVar2 = FUN_00416740(local_28);
    FUN_0080d2f0(*(undefined8 *)PTR_DAT_02004030,uVar2,L"TINA - Macro Properties",0);
  }
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

