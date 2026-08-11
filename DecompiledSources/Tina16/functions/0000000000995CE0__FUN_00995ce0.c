/* Ghidra address: 00995ce0 */
/* Ghidra symbol: FUN_00995ce0 */


longlong * FUN_00995ce0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  
  plVar2 = (longlong *)FUN_0098cda0(&PTR_FUN_00926660,1);
  (**(code **)(*plVar2 + 0xf0))(plVar2,*(undefined1 *)(param_1 + 0x30));
  if (param_2 != (longlong *)0x0) {
    puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x110))(param_2);
    iVar1 = (**(code **)*puVar3)();
    iVar6 = 0;
    if (-1 < iVar1 + -1) {
      do {
        plVar4 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2);
        uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,iVar6);
        (**(code **)(*plVar2 + 0x140))(plVar2,uVar5);
        iVar6 = iVar6 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return plVar2;
}

