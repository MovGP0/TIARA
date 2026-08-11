/* Ghidra address: 01432300 */
/* Ghidra symbol: FUN_01432300 */


longlong FUN_01432300(longlong param_1,char param_2,longlong *param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  int local_24;
  undefined8 local_20 [2];
  
  local_30 = auStack_58;
  local_38 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  (**(code **)(*param_3 + 0x2d0))(param_3,param_4,local_20);
  FUN_00b08760(local_res8,0,local_20[0],param_4);
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x20) = uVar2;
  *(undefined1 *)(local_res8 + 0x28) = 2;
  *(undefined1 *)(local_res8 + 0x38) = 1;
  local_24 = 0;
  do {
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_38,local_24 + 0x220);
    (**(code **)(**(longlong **)(local_res8 + 0x20) + 0x78))
              (*(longlong **)(local_res8 + 0x20),local_38);
    local_24 = local_24 + 1;
  } while (local_24 != 0xb);
  (**(code **)(**(longlong **)(local_res8 + 0x20) + 0x78))
            (*(longlong **)(local_res8 + 0x20),L"PS_EXP");
  (**(code **)(**(longlong **)(local_res8 + 0x20) + 0x78))
            (*(longlong **)(local_res8 + 0x20),L"PS_SFFM");
  (**(code **)(**(longlong **)(local_res8 + 0x20) + 0x78))
            (*(longlong **)(local_res8 + 0x20),L"PS_PULSE");
  *(longlong **)(local_res8 + 8) = param_3;
  FUN_00414480(&local_38);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

