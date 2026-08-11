/* Ghidra address: 004aa3e0 */
/* Ghidra symbol: FUN_004aa3e0 */


void FUN_004aa3e0(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  puVar1 = auStack_38;
  if (*(longlong *)PTR_PTR_02002ff8 == 0) {
    FUN_004098e0(0x1a);
    puVar1 = local_10;
  }
  local_10 = puVar1;
  uVar2 = FUN_004121f0(param_1);
  FUN_00411f00(uVar2,0xffffffff);
  FUN_004ef3d0(*(undefined8 *)(param_1 + 8));
  FUN_00412130(param_1);
  return;
}

