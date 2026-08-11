/* Ghidra address: 00cb0940 */
/* Ghidra symbol: FUN_00cb0940 */


undefined8 FUN_00cb0940(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 *local_28;
  undefined8 *local_20;
  
  local_40 = auStack_88;
  local_48 = 0;
  local_2c = thunk_FUN_04118f82(1);
  cVar2 = FUN_00440a20(param_2,1);
  if (cVar2 == '\0') {
    FUN_0041ddd0(&local_48,PTR_PTR_02002b88);
    local_50 = 0x11;
    local_68 = 0;
    local_58 = param_2;
    uVar3 = FUN_0044d530(&PTR_FUN_00ca68e8,1,local_48,&local_58);
    FUN_004134c0(uVar3);
  }
  local_28 = (undefined8 *)FUN_00874b00(&PTR_FUN_0086eb08,1,param_2);
  (**(code **)(*param_1 + 0x168))(param_1,local_28,0,0);
  local_38 = (**(code **)*local_28)(local_28);
  puVar1 = local_28;
  local_20 = local_28;
  local_28 = (undefined8 *)0x0;
  FUN_00410f20(puVar1);
  thunk_FUN_04118f82(local_2c);
  FUN_00414480(&local_48);
  return local_38;
}

