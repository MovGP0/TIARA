/* Ghidra address: 00984470 */
/* Ghidra symbol: FUN_00984470 */


void FUN_00984470(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_0097f900(&PTR_FUN_00921860,1,param_1);
  *(longlong **)(param_1 + 0x98) = plVar1;
  (**(code **)(*plVar1 + 0x98))(plVar1,*(undefined8 *)(param_1 + 0x78));
  uVar2 = FUN_00973570(&PTR_FUN_009224b8,1,param_1);
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  uVar2 = FUN_00976870(&PTR_FUN_00923338,1,param_1);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x80) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x80) = *(undefined8 *)(param_1 + 0x90);
  return;
}

