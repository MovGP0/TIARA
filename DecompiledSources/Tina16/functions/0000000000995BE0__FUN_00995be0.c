/* Ghidra address: 00995be0 */
/* Ghidra symbol: FUN_00995be0 */


longlong * FUN_00995be0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  
  plVar3 = (longlong *)FUN_0098cda0(&PTR_FUN_00926660,1);
  (**(code **)(*plVar3 + 0xf0))(plVar3,*(undefined1 *)(param_1 + 0x30));
  if ((param_2 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*param_2 + 0x168))(param_2), cVar1 == '\x01')) {
    puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x100))(param_2);
    iVar2 = (**(code **)*puVar4)();
    iVar7 = 0;
    if (-1 < iVar2 + -1) {
      do {
        plVar5 = (longlong *)(**(code **)(*param_2 + 0x100))(param_2);
        uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,iVar7);
        plVar5 = (longlong *)FUN_004113f0(uVar6,&PTR_FUN_00909bd0);
        cVar1 = (**(code **)(*plVar5 + 0x2c0))(plVar5);
        if (cVar1 == '\x02') {
          plVar5 = (longlong *)(**(code **)(*param_2 + 0x100))(param_2);
          uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,iVar7);
          (**(code **)(*plVar3 + 0x140))(plVar3,uVar6);
        }
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return plVar3;
}

