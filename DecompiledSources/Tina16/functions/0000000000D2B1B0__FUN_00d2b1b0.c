/* Ghidra address: 00d2b1b0 */
/* Ghidra symbol: FUN_00d2b1b0 */


void FUN_00d2b1b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 *local_30;
  
  local_30 = auStack_68;
  puVar1 = (undefined8 *)(PTR_DAT_02002bf8 + 8);
  *(undefined8 *)PTR_DAT_02002bf8 = *(undefined8 *)(param_1 + 0x98);
  *puVar1 = *(undefined8 *)(param_1 + 0xa0);
  plVar3 = (longlong *)FUN_00d2a9d0(param_1);
  local_48 = 0;
  (**(code **)(*plVar3 + 0x18))(plVar3,param_2,param_3,param_4);
  puVar2 = PTR_DAT_02002bf8;
  *(undefined8 *)PTR_DAT_02002bf8 = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  return;
}

