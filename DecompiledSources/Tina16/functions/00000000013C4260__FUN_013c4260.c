/* Ghidra address: 013c4260 */
/* Ghidra symbol: FUN_013c4260 */


void FUN_013c4260(undefined8 param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_006d5120(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0) + 0x10);
  lVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,uVar2);
  uVar4 = (**(code **)(**(longlong **)(lVar3 + 0xd8) + 0x30))(*(longlong **)(lVar3 + 0xd8),0);
  uVar4 = FUN_01ce8a10(uVar4,0);
  DAT_02108440 = FUN_01abd060(uVar4);
  FUN_01abc400(DAT_02108440,param_1);
  return;
}

