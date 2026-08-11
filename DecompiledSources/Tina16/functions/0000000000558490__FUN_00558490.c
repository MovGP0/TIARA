/* Ghidra address: 00558490 */
/* Ghidra symbol: FUN_00558490 */


longlong FUN_00558490(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  longlong local_res8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  local_30 = auStack_78;
  local_40 = 0;
  local_38 = 0;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_58 = param_5;
  FUN_00546070(local_res8,0,param_3,param_4);
  uVar2 = FUN_0053c520(param_5);
  *(undefined1 *)(local_res8 + 0x38) = uVar2;
  local_20 = (undefined8 *)FUN_0053c4c0(param_5);
  local_28 = local_20;
  if (local_20 != (undefined8 *)0x0) {
    local_28 = (undefined8 *)*local_20;
  }
  *(undefined8 **)(local_res8 + 0x40) = local_28;
  uVar3 = FUN_0053c4f0(param_5);
  *(undefined2 *)(local_res8 + 0x48) = uVar3;
  FUN_0053c650(&local_38,param_5);
  FUN_00414ad0(local_res8 + 0x30,local_38);
  FUN_00545c40(&local_40,param_5);
  FUN_0041b840(local_res8 + 0x28,local_40);
  FUN_0041b800(&local_40);
  FUN_00414480(&local_38);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

