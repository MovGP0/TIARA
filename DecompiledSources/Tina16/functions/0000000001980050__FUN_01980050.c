/* Ghidra address: 01980050 */
/* Ghidra symbol: FUN_01980050 */


longlong FUN_01980050(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  uVar2 = FUN_018066d0(&PTR_FUN_01805e80,1);
  *(undefined8 *)(local_res8 + 8) = uVar2;
  FUN_0046f180(&local_38);
  FUN_00461840(local_res8 + 0x10,&local_38);
  *(undefined4 *)(local_res8 + 0x28) = 0xffffffff;
  *(undefined8 *)(local_res8 + 0x30) = 0;
  *(undefined1 *)(local_res8 + 0x48) = 0;
  *(undefined1 *)(local_res8 + 0x49) = 0;
  *(undefined4 *)(local_res8 + 0x4c) = 0;
  *(undefined4 *)(local_res8 + 0x50) = 0;
  FUN_00460ba0(&local_38);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

