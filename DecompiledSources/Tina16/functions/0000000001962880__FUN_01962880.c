/* Ghidra address: 01962880 */
/* Ghidra symbol: FUN_01962880 */


void FUN_01962880(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  *(ushort *)(param_1 + 0x38c) = *(ushort *)(param_1 + 0x38c) | 0x1000;
  uVar1 = FUN_0195ce10(param_1);
  plVar2 = (longlong *)FUN_0194e140(uVar1);
  *(longlong **)(param_1 + 0x360) = plVar2;
  (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_1 + 0x210));
  plVar2 = (longlong *)FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(longlong **)(param_1 + 0x368) = plVar2;
  (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_1 + 0x78));
  plVar2 = (longlong *)FUN_01958b10(&PTR_FUN_01921868,1);
  *(longlong **)(param_1 + 0x370) = plVar2;
  (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_1 + 0x1c0));
  *(undefined1 *)(param_1 + 0x378) = *(undefined1 *)(param_1 + 0xc5);
  return;
}

