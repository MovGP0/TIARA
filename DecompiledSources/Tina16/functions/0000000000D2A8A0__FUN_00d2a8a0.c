/* Ghidra address: 00d2a8a0 */
/* Ghidra symbol: FUN_00d2a8a0 */


void FUN_00d2a8a0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_28 = 0;
  puVar1 = (undefined8 *)(PTR_DAT_02002bf8 + 8);
  *(undefined8 *)PTR_DAT_02002bf8 = *(undefined8 *)(param_1 + 0x90);
  *puVar1 = *(undefined8 *)(param_1 + 0x98);
  uVar3 = FUN_00d2a4f0(param_1);
  local_38 = 1;
  FUN_00d0d680(uVar3,&local_28,param_2,0);
  FUN_00414bf0(param_1 + 0x88,local_28);
  puVar2 = PTR_DAT_02002bf8;
  *(undefined8 *)PTR_DAT_02002bf8 = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  FUN_004144d0(&local_28);
  return;
}

