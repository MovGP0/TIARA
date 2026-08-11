/* Ghidra address: 01953c40 */
/* Ghidra symbol: FUN_01953c40 */


longlong * FUN_01953c40(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  cVar1 = (**(code **)(*param_1 + 0x200))(param_1,param_2,param_3);
  if ((cVar1 != '\0') ||
     (iVar2 = (**(code **)(*(longlong *)param_1[0x10] + 0x30))((longlong *)param_1[0x10]),
     plVar4 = (longlong *)0x0, 0 < iVar2)) {
    iVar2 = (**(code **)(*(longlong *)param_1[0x10] + 0x30))((longlong *)param_1[0x10]);
    if ((iVar2 == 0) ||
       (cVar1 = (**(code **)(*param_1 + 0x200))(param_1,param_2,param_3), plVar5 = (longlong *)0x0,
       cVar1 != '\0')) {
      plVar5 = param_1;
    }
    iVar2 = (**(code **)(*(longlong *)param_1[0x10] + 0x30))((longlong *)param_1[0x10]);
    iVar2 = iVar2 + -1;
    plVar4 = plVar5;
    if (-1 < iVar2) {
      do {
        uVar3 = (**(code **)(*(longlong *)param_1[0x10] + 0x20))((longlong *)param_1[0x10],iVar2);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01918c28);
        if (cVar1 != '\0') {
          plVar4 = (longlong *)
                   (**(code **)(*(longlong *)param_1[0x10] + 0x20))((longlong *)param_1[0x10],iVar2)
          ;
          plVar4 = (longlong *)(**(code **)(*plVar4 + 0x218))(plVar4,param_2,param_3,param_4);
          if ((plVar4 != (longlong *)0x0) &&
             (cVar1 = FUN_004113d0(plVar4,&PTR_FUN_01933ed0), cVar1 == '\0')) break;
        }
        iVar2 = iVar2 + -1;
        plVar4 = plVar5;
      } while (iVar2 != -1);
    }
  }
  if ((plVar4 == param_1) &&
     ((param_4 == param_1 ||
      (cVar1 = (**(code **)(*param_1 + 0x230))(param_1,param_4), cVar1 == '\0')))) {
    plVar4 = (longlong *)0x0;
  }
  return plVar4;
}

