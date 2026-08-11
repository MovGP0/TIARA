/* Ghidra address: 01c79370 */
/* Ghidra symbol: FUN_01c79370 */


void FUN_01c79370(longlong param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_2b8 [32];
  undefined *local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_250 [88];
  undefined1 local_1f8 [88];
  undefined1 local_1a0 [256];
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 local_79 [81];
  longlong *local_28;
  undefined8 local_20;
  
  local_90 = auStack_2b8;
  local_280 = 0;
  local_288 = 0;
  local_268 = 0;
  local_270 = 0;
  local_278 = 0;
  local_258 = 0;
  local_260 = 0;
  local_98 = 0;
  local_a0 = 0;
  uVar3 = FUN_00b89270();
  FUN_00b8e520(uVar3,&local_98,0x59a);
  uVar3 = FUN_00b89270();
  FUN_00b8e520(uVar3,&local_a0,0x59f);
  local_20 = FUN_01b913f0(local_98,local_a0);
  FUN_0040e780(local_1a0,*(undefined1 *)(param_1 + 0x1828),1);
  FUN_00415020(local_79,local_1a0,0x50);
  FUN_00414ff0(local_1f8,&DAT_01c796a4);
  FUN_00415110(local_1f8,local_79,0x51);
  FUN_00414ff0(local_250,local_1f8);
  FUN_00415110(local_250,&DAT_01c796a6,0x55);
  FUN_00415020(local_79,local_250,0x50);
  FUN_004169a0(&local_260,local_79);
  FUN_00416ba0(&local_258,*(undefined8 *)(param_1 + 0x1818),local_260);
  cVar1 = FUN_012bf4f0(&local_28,local_258);
  if (cVar1 != '\0') {
    if (param_2 == '\0') {
      (**(code **)(*local_28 + 200))(local_28,0);
      FUN_0043f750(&local_270,*(int *)(param_1 + 0x17e4) + 1);
      uVar2 = FUN_01b1d2f0();
      FUN_0043f750(&local_278,uVar2);
      local_298 = &DAT_01c796c8;
      local_290 = local_278;
      FUN_00416cd0(&local_268,4,&DAT_01c796b8,local_270);
      (**(code **)(*local_28 + 200))(local_28,local_268);
    }
    else {
      (**(code **)(*local_28 + 200))(local_28,0);
      uVar2 = FUN_01b1d2f0();
      FUN_0043f750(&local_288,uVar2);
      FUN_00416ba0(&local_280,L"[END] ",local_288);
      (**(code **)(*local_28 + 200))(local_28,local_280);
    }
    FUN_00410f20(local_28);
  }
  FUN_01b91530(local_20);
  FUN_00414560(&local_288,7);
  FUN_00414560(&local_a0,2);
  return;
}

