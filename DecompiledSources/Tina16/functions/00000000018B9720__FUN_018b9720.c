/* Ghidra address: 018b9720 */
/* Ghidra symbol: FUN_018b9720 */


longlong * FUN_018b9720(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)0x0;
  if ((*(byte *)(param_2 + 0x1a) & 2) == 0) {
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0xb8),param_2);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0xb0),0);
  }
  else {
    plVar5 = (longlong *)(**(code **)(*param_2 + -0x30))(*param_2);
    (**(code **)(*plVar5 + 0x78))(plVar5,0xff,param_3);
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_01929d50);
    if (cVar1 != '\0') {
      *(undefined1 *)((longlong)param_2 + 0x2c5) = 0;
    }
    FUN_0194f9a0(plVar5,param_2);
    if (cVar1 != '\0') {
      *(undefined1 *)((longlong)param_2 + 0x2c5) = 1;
    }
    (**(code **)(*plVar5 + 0x50))(plVar5,param_2[2]);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0xb8),param_2);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0xb0),plVar5);
    iVar2 = (**(code **)(*(longlong *)param_2[0x10] + 0x30))();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = (**(code **)(*(longlong *)param_2[0x10] + 0x20))((longlong *)param_2[0x10],iVar4);
        FUN_018b9720(param_1,uVar3,plVar5);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return plVar5;
}

