/* Ghidra address: 013490c0 */
/* Ghidra symbol: FUN_013490c0 */


void FUN_013490c0(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 *local_60;
  undefined1 local_54 [52];
  undefined8 local_20;
  
  local_60 = auStack_98;
  FUN_00417580(local_54,&DAT_01d2e6d8);
  if (param_1 != (longlong *)0x0) {
    FUN_004b9ec0(DAT_021078a0);
    local_78 = 0;
    local_20 = FUN_01d30b30(&DAT_01d2e8e8,1,DAT_021078a0,1);
    FUN_0040d200(local_54,0x34,0);
    FUN_01d318b0(local_20,local_54);
    (**(code **)(*param_1 + 0x40))(param_1,local_20);
    iVar1 = FUN_01d31a40(local_20);
    if (iVar1 != 0) {
      uVar2 = FUN_01d31a40(local_20);
      FUN_00b047e0(uVar2);
    }
    FUN_00410f20(local_20);
  }
  FUN_00417740(local_54,&DAT_01d2e6d8);
  return;
}

