/* Ghidra address: 013491e0 */
/* Ghidra symbol: FUN_013491e0 */


undefined1 FUN_013491e0(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 *local_50;
  undefined1 local_45 [52];
  undefined1 local_11;
  undefined8 local_10;
  
  local_50 = auStack_88;
  FUN_00417580(local_45,&DAT_01d2e6d8);
  local_11 = 0;
  lVar3 = (**(code **)*DAT_021078a0)(DAT_021078a0);
  if (lVar3 != 0) {
    local_68 = 0;
    local_10 = FUN_01d30b30(&DAT_01d2e8e8,1,DAT_021078a0,0x40);
    FUN_004b6dc0(DAT_021078a0,0);
    FUN_01d317c0(local_10,local_45);
    uVar4 = FUN_01cc3bb0(&PTR_FUN_01cb5bc0,1,local_10);
    *param_1 = uVar4;
    iVar1 = FUN_01d31a40(local_10);
    if (iVar1 != 0) {
      uVar2 = FUN_01d31a40(local_10);
      FUN_00b047e0(uVar2);
    }
    FUN_00410f20(local_10);
    local_11 = 1;
  }
  FUN_00417740(local_45,&DAT_01d2e6d8);
  return local_11;
}

