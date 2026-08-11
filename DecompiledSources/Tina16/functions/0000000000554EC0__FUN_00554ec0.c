/* Ghidra address: 00554ec0 */
/* Ghidra symbol: FUN_00554ec0 */


undefined8 FUN_00554ec0(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_20 = auStack_48;
  local_28 = 0;
  puVar1 = auStack_48;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x30);
    puVar1 = auStack_48;
    if (*(longlong *)PTR_PTR_02002ff8 == 0) {
      FUN_004098e0(0x1a);
      puVar1 = local_20;
    }
    local_20 = puVar1;
    uVar2 = FUN_004121f0(local_18);
    FUN_00411f00(uVar2,0xffffffff);
    if (*(longlong *)(param_1 + 0x28) == 0) {
      local_10 = FUN_00547190(param_1);
      local_10 = local_10 + 8;
      FUN_00545c40(&local_28,&local_10);
      FUN_0041b840(param_1 + 0x28,local_28);
    }
    FUN_00412130(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x30));
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00546240(param_1,param_2);
  FUN_0041b800(&local_28);
  return param_2;
}

