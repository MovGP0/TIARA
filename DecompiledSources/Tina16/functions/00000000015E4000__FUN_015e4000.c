/* Ghidra address: 015e4000 */
/* Ghidra symbol: FUN_015e4000 */


undefined8 FUN_015e4000(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  (**(code **)(*plVar3 + 0x20))
            (plVar3,*(undefined8 *)(param_1 + 0x1a8),(ulonglong)*(ushort *)(param_1 + 0x188) / 2);
  (**(code **)(*plVar3 + 0x20))(plVar3,*(undefined8 *)(param_1 + 0x1a0),2);
  iVar1 = (**(code **)*plVar3)(plVar3);
  uVar4 = FUN_004095c0((longlong)iVar1);
  (**(code **)(*plVar3 + 0x48))(plVar3,0,0);
  uVar2 = (**(code **)*plVar3)(plVar3);
  (**(code **)(*plVar3 + 0x18))(plVar3,uVar4,uVar2);
  (**(code **)(*plVar3 + -0x20))(plVar3,1);
  return uVar4;
}

