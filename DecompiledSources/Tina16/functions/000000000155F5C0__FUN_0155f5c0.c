/* Ghidra address: 0155f5c0 */
/* Ghidra symbol: FUN_0155f5c0 */


void FUN_0155f5c0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  
  plVar1 = (longlong *)FUN_01571dc0(&PTR_FUN_0156e288,1);
  while (0 < *(int *)(*(longlong *)(param_1 + 0x750) + 0x10)) {
    FUN_0155f520(auStack_48);
    local_20 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x750),local_24);
    uVar2 = FUN_01571260(&DAT_0156d6c8,1,local_20);
    (**(code **)(*plVar1 + 0x50))(plVar1,uVar2);
    FUN_01d34870(*(undefined8 *)(param_1 + 0x750),local_24);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x750));
  *(longlong **)(param_1 + 0x750) = plVar1;
  return;
}

