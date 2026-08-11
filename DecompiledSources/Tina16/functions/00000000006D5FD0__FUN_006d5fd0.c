/* Ghidra address: 006d5fd0 */
/* Ghidra symbol: FUN_006d5fd0 */


undefined4 FUN_006d5fd0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  undefined4 local_40;
  
  uVar2 = 0xffffffff;
  (**(code **)(*param_1 + 0xe0))(param_1,&local_54);
  local_6c = local_54;
  uStack_64 = uStack_4c;
  local_5c = param_2;
  local_58 = param_3;
  cVar1 = FUN_00423210(&local_6c,&local_5c);
  if (cVar1 != '\0') {
    local_44 = param_2;
    local_40 = param_3;
    uVar3 = FUN_0065b870(param_1);
    uVar2 = thunk_FUN_041b2403(uVar3,0x130d,0,&local_44);
  }
  return uVar2;
}

