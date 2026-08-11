/* Ghidra address: 0065cca0 */
/* Ghidra symbol: FUN_0065cca0 */


undefined8 FUN_0065cca0(longlong param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x488);
  puVar2 = auStack_58;
  if (*(longlong *)PTR_PTR_02002ff8 == 0) {
    FUN_004098e0(0x1a);
    puVar2 = local_30;
  }
  local_30 = puVar2;
  uVar3 = FUN_004121f0(local_18);
  FUN_00411f00(uVar3,0xffffffff);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x488);
  if (*(int *)(lVar1 + 0x10) < 1) {
    local_10 = 0;
  }
  else {
    local_20 = lVar1;
    local_10 = FUN_004aeac0(lVar1,0);
    FUN_004ae870(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x488),0);
  }
  FUN_00412130(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x488));
  return local_10;
}

