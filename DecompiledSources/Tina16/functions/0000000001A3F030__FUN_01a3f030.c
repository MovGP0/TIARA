/* Ghidra address: 01a3f030 */
/* Ghidra symbol: FUN_01a3f030 */


undefined1 FUN_01a3f030(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_128 [40];
  undefined8 local_100;
  undefined8 local_f8;
  wchar_t *local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  int local_7c;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  undefined8 local_28;
  longlong *local_20;
  
  local_d0 = auStack_128;
  local_100 = 0;
  local_f8 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_29 = 1;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_28 = FUN_01b21190(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x28),0x2c,0);
  FUN_01a57ac0(param_1);
  (**(code **)(*local_20 + 0x10))(local_20,*(undefined8 *)(*(longlong *)(param_1 + 0x7f0) + 8));
  (**(code **)(*local_20 + 0x88))(local_20,local_28);
  FUN_004b37d0(local_20,&local_40);
  FUN_00414ad0(param_1 + 0x838,local_40);
  FUN_004b4b10(*(undefined8 *)(param_1 + 0x8e0),*(undefined8 *)(param_1 + 0x838));
  FUN_00416ba0(&local_e0,L"%s: ",*(undefined8 *)(param_1 + 0x2b28));
  local_f0 = L"Local";
  local_e8 = 0x11;
  FUN_00442f70(&local_d8,local_e0,&local_f0,0);
  local_7c = (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0xb0))
                       (*(longlong **)(param_1 + 0x8e0),local_d8);
  if (0 < local_7c) {
    (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0xa0))
              (*(longlong **)(param_1 + 0x8e0),local_7c,0);
  }
  if (param_3 != '\0') {
    FUN_01a4fea0(param_1);
    if (*(longlong *)(*(longlong *)(param_1 + 0x2968) + 8) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0x18))
                (*(longlong **)(param_1 + 0x8e0),&local_f8,0);
      FUN_00414ad0(*(longlong *)(param_1 + 0x2968) + 8,local_f8);
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x2968) + 8) != 0) {
      FUN_01a54900(param_1);
    }
  }
  FUN_004b37d0(*(undefined8 *)(param_1 + 0x8e0),&local_100);
  FUN_00414ad0(param_1 + 0x838,local_100);
  FUN_01a513b0(param_1,L"ModelList",*(undefined8 *)(param_1 + 0x838));
  FUN_01a3ffa0(param_1);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414560(&local_100,2);
  FUN_00414560(&local_e0,2);
  FUN_00414560(&local_60,6);
  return local_29;
}

