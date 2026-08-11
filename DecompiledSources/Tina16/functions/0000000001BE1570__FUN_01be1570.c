/* Ghidra address: 01be1570 */
/* Ghidra symbol: FUN_01be1570 */


longlong FUN_01be1570(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  code *local_30;
  longlong local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_01bd5500(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x579) = 1;
  FUN_0069fae0(local_res8,0);
  *(undefined4 *)(local_res8 + 0x5c8) = 4000;
  *(undefined1 *)(local_res8 + 0x5d8) = 1;
  *(undefined1 *)(local_res8 + 0x578) = 1;
  FUN_01be1430(local_res8);
  *(undefined4 *)(local_res8 + 0x5f0) = 0x96;
  *(undefined1 *)(local_res8 + 0x618) = 1;
  *(undefined1 *)(local_res8 + 0x619) = 1;
  (**(code **)(**(longlong **)(local_res8 + 0xb8) + 0x10))
            (*(longlong **)(local_res8 + 0xb8),
             *(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x110));
  uVar2 = FUN_00742bf0(&PTR_FUN_007334d8,1,0);
  *(undefined8 *)(local_res8 + 0x570) = uVar2;
  FUN_00742eb0(uVar2,0);
  local_28 = local_res8;
  local_30 = FUN_01be50b0;
  FUN_00742ef0(*(undefined8 *)(local_res8 + 0x570),&local_30);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

