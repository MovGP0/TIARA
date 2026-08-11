/* Ghidra address: 018a54b0 */
/* Ghidra symbol: FUN_018a54b0 */


longlong FUN_018a54b0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  
  local_30 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_01892ed0(local_res8,0,param_3);
  uVar2 = FUN_018a4df0(&PTR_FUN_018a4560,1);
  *(undefined8 *)(local_res8 + 0x528) = uVar2;
  *(longlong *)(local_res8 + 0x210) = local_res8;
  *(code **)(local_res8 + 0x208) = FUN_018a7630;
  *(undefined4 *)(local_res8 + 0x4ec) = 0x808080;
  *(undefined4 *)(local_res8 + 0x504) = 0x606060;
  *(undefined4 *)(local_res8 + 0x4e8) = 0x3cc7ff;
  *(undefined8 *)(local_res8 + 0x548) = 0x3ff0000000000000;
  *(undefined2 *)(local_res8 + 0x4f0) = *(undefined2 *)PTR_DAT_02004070;
  *(undefined4 *)(local_res8 + 0x4a8) = 300;
  *(undefined4 *)(local_res8 + 0x4ac) = 8;
  local_58 = 0;
  FUN_00498350(&local_40,0,0,0);
  *(undefined8 *)(local_res8 + 0x554) = local_40;
  *(undefined8 *)(local_res8 + 0x55c) = uStack_38;
  *(undefined1 *)(local_res8 + 0x540) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

