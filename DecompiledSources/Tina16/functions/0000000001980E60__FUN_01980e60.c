/* Ghidra address: 01980e60 */
/* Ghidra symbol: FUN_01980e60 */


longlong FUN_01980e60(longlong param_1,char param_2,undefined8 param_3,longlong *param_4,
                     undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  uVar2 = (**(code **)(*param_4 + -0x30))(*param_4);
  *(undefined8 *)(local_res8 + 0x20) = uVar2;
  FUN_01979e40(uVar2,0xff);
  (**(code **)(**(longlong **)(local_res8 + 0x20) + 0xf8))
            (*(longlong **)(local_res8 + 0x20),param_4);
  (**(code **)(**(longlong **)(local_res8 + 0x20) + 0x100))
            (*(longlong **)(local_res8 + 0x20),param_4);
  *(undefined8 *)(local_res8 + 0x18) = param_3;
  FUN_00414ad0(local_res8 + 0x28,param_5);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

