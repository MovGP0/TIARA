/* Ghidra address: 00619680 */
/* Ghidra symbol: FUN_00619680 */


void FUN_00619680(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  FUN_00619730(param_1,0x80000000,0x80000000);
  if (0 < *(int *)(param_1 + 0x14)) {
    local_10 = *(undefined8 *)(param_1 + 8);
    if (*(longlong *)PTR_PTR_02002ff8 == 0) {
      FUN_004098e0(0x1a);
    }
    uVar1 = FUN_004121f0(local_10);
    FUN_00411f00(uVar1,0xffffffff);
    FUN_00412310(*(undefined8 *)(param_1 + 8));
    FUN_00412130(*(undefined8 *)(param_1 + 8));
  }
  return;
}

