/* Ghidra address: 016a6500 */
/* Ghidra symbol: FUN_016a6500 */


longlong FUN_016a6500(longlong param_1,char param_2,longlong param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,longlong param_7,undefined1 param_8,
                     undefined1 param_9,undefined8 param_10,undefined1 param_11,undefined8 param_12,
                     undefined8 param_13,undefined8 param_14)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  *(undefined8 *)(local_res8 + 0x60) = param_13;
  *(undefined8 *)(local_res8 + 0x58) = param_12;
  *(undefined1 *)(local_res8 + 0x3a) = param_9;
  *(undefined1 *)(local_res8 + 0x39) = param_11;
  *(undefined1 *)(local_res8 + 0x3b) = 1;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x48) = uVar2;
  *(longlong *)(local_res8 + 0x40) = param_3;
  FUN_00416880(&local_28,*(undefined8 *)(param_3 + 0x10));
  (**(code **)(**(longlong **)(local_res8 + 0x48) + 0x78))
            (*(longlong **)(local_res8 + 0x48),local_28);
  *(undefined8 *)(local_res8 + 8) = param_4;
  *(undefined8 *)(local_res8 + 0x18) = param_6;
  *(undefined8 *)(local_res8 + 0x10) = param_5;
  if ((param_7 == 0) && (*(longlong *)(local_res8 + 0x58) != 0)) {
    *(undefined8 *)(local_res8 + 0x20) = *(undefined8 *)(*(longlong *)(local_res8 + 0x58) + 0x9f8);
  }
  else {
    *(longlong *)(local_res8 + 0x20) = param_7;
  }
  *(undefined1 *)(local_res8 + 0x38) = param_8;
  *(undefined8 *)(local_res8 + 0x28) = param_10;
  local_38 = local_res8;
  local_30 = *(undefined8 *)(local_res8 + 0x20);
  uVar2 = FUN_016982a0(&DAT_01697d58,1,*(undefined1 *)(local_res8 + 0x39),0);
  *(undefined8 *)(local_res8 + 0x50) = uVar2;
  FUN_01698480(uVar2,*(undefined8 *)(local_res8 + 0x48));
  *(undefined8 *)(local_res8 + 0x68) = param_14;
  FUN_00414480(&local_28);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

