/* Ghidra address: 00546160 */
/* Ghidra symbol: FUN_00546160 */


void FUN_00546160(longlong param_1,byte param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_58;
  FUN_00411a80(param_1,param_2);
  lVar1 = *(longlong *)(param_1 + 0x18);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x38) != 0)) {
    local_10 = *(undefined8 *)(lVar1 + 0x30);
    if (*(longlong *)PTR_PTR_02002ff8 == 0) {
      FUN_004098e0(0x1a);
    }
    uVar2 = FUN_004121f0(local_10);
    FUN_00411f00(uVar2,0xffffffff);
    FUN_0055efe0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x38),local_30,
                 *(undefined8 *)(param_1 + 8));
    FUN_00412130(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x30));
  }
  FUN_00410ef0(param_1,param_2 & 0xfc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

