/* Ghidra address: 0054a550 */
/* Ghidra symbol: FUN_0054a550 */


void FUN_0054a550(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_78;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_18 = 0;
  local_20 = 0;
  puVar1 = auStack_78;
  if (*(char *)(param_1 + 0x58) == '\0') {
    uVar2 = FUN_00547190(param_1);
    local_10 = FUN_00588260(uVar2);
    local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x30);
    if (*(longlong *)PTR_PTR_02002ff8 == 0) {
      FUN_004098e0(0x1a);
    }
    uVar2 = FUN_004121f0(local_28);
    FUN_00411f00(uVar2,0xffffffff);
    FUN_0054a120(auStack_78,&local_38);
    FUN_004194b0(&local_18,local_38,&DAT_0052f6f8);
    FUN_0054a1f0(auStack_78,&local_40);
    FUN_004194b0(&local_20,local_40,&DAT_0052f6f8);
    FUN_0054a350(auStack_78,&local_48,local_18,local_20);
    FUN_004194b0(param_1 + 0x30,local_48,&DAT_0052f6f8);
    FUN_00545c40(&local_50,&local_10);
    FUN_0041b840(param_1 + 0x28,local_50);
    FUN_0054a4a0(auStack_78,&local_58);
    FUN_004194b0(param_1 + 0x48,local_58,&DAT_0052f750);
    *(undefined1 *)(param_1 + 0x58) = 1;
    FUN_00412130(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x30));
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00419430(&local_58,&DAT_0052f750);
  FUN_0041b800(&local_50);
  FUN_00417840(&local_48,&DAT_0052f6f8,3);
  FUN_00417840(&local_20,&DAT_0052f6f8,2);
  return;
}

