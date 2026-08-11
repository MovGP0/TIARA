/* Ghidra address: 0054abe0 */
/* Ghidra symbol: FUN_0054abe0 */


void FUN_0054abe0(longlong param_1)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_30 = auStack_68;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_18 = 0;
  local_20 = 0;
  puVar1 = auStack_68;
  if (*(char *)(param_1 + 0x59) == '\0') {
    local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x30);
    puVar1 = auStack_68;
    if (*(longlong *)PTR_PTR_02002ff8 == 0) {
      FUN_004098e0(0x1a);
      puVar1 = local_30;
    }
    local_30 = puVar1;
    uVar3 = FUN_004121f0(local_28);
    FUN_00411f00(uVar3,0xffffffff);
    lVar4 = FUN_0054a100(param_1);
    local_10 = *(longlong *)(lVar4 + -0x98);
    if (local_10 == 0) {
      FUN_0054ad60(0,local_30);
      puVar1 = local_30;
    }
    else {
      FUN_0054a840(auStack_68,&local_38);
      FUN_004194b0(&local_18,local_38,&DAT_0052f648);
      FUN_0054a930(auStack_68,&local_40);
      FUN_004194b0(&local_20,local_40,&DAT_0052f648);
      uVar2 = FUN_0053c4f0(&local_10);
      *(undefined2 *)(param_1 + 0x40) = uVar2;
      FUN_0054aa90(auStack_68,&local_48,local_18,local_20);
      FUN_004194b0(param_1 + 0x38,local_48,&DAT_0052f648);
      *(undefined1 *)(param_1 + 0x59) = 1;
      FUN_00412130(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x30));
      puVar1 = local_30;
    }
  }
  local_30 = puVar1;
  FUN_00417840(&local_48,&DAT_0052f648,3);
  FUN_00417840(&local_20,&DAT_0052f648,2);
  return;
}

