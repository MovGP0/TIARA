/* Ghidra address: 00995620 */
/* Ghidra symbol: FUN_00995620 */


longlong * FUN_00995620(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [36];
  int local_64;
  undefined1 *local_60;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  int local_2c;
  longlong *local_28;
  undefined8 local_20;
  
  local_60 = auStack_88;
  puVar1 = auStack_88;
  if (param_2 == (longlong *)0x0) {
    uVar3 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
    FUN_004134c0(uVar3);
    puVar1 = local_60;
  }
  local_60 = puVar1;
  local_28 = (longlong *)FUN_0098cda0(&PTR_FUN_00926660,1);
  (**(code **)(*local_28 + 0xf0))(local_28,(char)param_1[6]);
  iVar2 = (**(code **)(*param_2 + 0x118))();
  local_64 = iVar2 + -1;
  local_2c = 0;
  if (-1 < local_64) {
    do {
      local_64 = iVar2;
      local_38 = (**(code **)(*param_2 + 0x110))(param_2,local_2c);
      if (local_38 != 0) {
        local_40 = (**(code **)(*param_1 + 0x40))(param_1,local_38);
        local_48 = FUN_00995530(auStack_88,local_40);
        local_20 = FUN_00995460(auStack_88,local_48);
        (**(code **)(*local_28 + 0x160))(local_28,local_20);
        FUN_00410f20(local_20);
      }
      local_2c = local_2c + 1;
      local_64 = local_64 + -1;
      iVar2 = local_64;
    } while (local_64 != 0);
  }
  FUN_00410f20(param_2);
  return local_28;
}

