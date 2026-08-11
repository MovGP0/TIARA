/* Ghidra address: 0156d100 */
/* Ghidra symbol: FUN_0156d100 */


longlong * FUN_0156d100(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_38 [24];
  
  plVar3 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  (**(code **)(*plVar3 + 0x88))(plVar3,0x100);
  (**(code **)(*plVar3 + 0x70))(plVar3,0x80);
  lVar4 = FUN_00609e10(plVar3);
  FUN_005fdab0(*(undefined8 *)(lVar4 + 0x80),0xffffff);
  lVar4 = FUN_00609e10(plVar3);
  FUN_005fd4e0(*(undefined8 *)(lVar4 + 0x78),0);
  plVar5 = (longlong *)FUN_00609e10(plVar3);
  uVar1 = (**(code **)(*plVar3 + 0x60))(plVar3);
  uVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
  FUN_00498350(local_38,0,0,uVar1,uVar2);
  (**(code **)(*plVar5 + 0xa8))(plVar5,local_38);
  return plVar3;
}

