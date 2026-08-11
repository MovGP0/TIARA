/* Ghidra address: 0108d670 */
/* Ghidra symbol: FUN_0108d670 */


void FUN_0108d670(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_007fc180(&PTR_FUN_0106c288,1,*(undefined8 *)PTR_DAT_02004030);
  uVar2 = FUN_010b3ad0(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xad8));
  *(undefined1 *)(plVar4 + 0xe3) = uVar2;
  iVar3 = (**(code **)(*plVar4 + 0x2d0))(plVar4);
  if (iVar3 == 1) {
    (**(code **)(**(longlong **)(param_1 + 0x4d40) + 0xd8))
              (*(longlong **)(param_1 + 0x4d40),plVar4[0xe1]);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xac8) + 0x30);
    (**(code **)(*plVar1 + 8))(plVar1,0);
    FUN_004b9f40(*(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x30),plVar4[0xe2]);
    *(undefined1 *)(param_1 + 0x4d48) = 1;
    *(undefined1 *)(param_1 + 0x4d49) = 1;
    FUN_010b2840(*(undefined8 *)(param_1 + 0xac8),0);
  }
  FUN_00410f20(plVar4);
  return;
}

