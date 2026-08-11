/* Ghidra address: 019540a0 */
/* Ghidra symbol: FUN_019540a0 */


void FUN_019540a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x20))
                        (*(longlong **)(param_1 + 0x80),iVar5);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0191af60);
      if (cVar1 != '\0') {
        plVar4 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x80) + 0x20))
                           (*(longlong **)(param_1 + 0x80),iVar5);
        FUN_01950de0(plVar4,param_8);
        cVar1 = (**(code **)(*plVar4 + 0x2a8))(plVar4);
        if (cVar1 == '\0') {
          FUN_01954820(plVar4,param_2,param_3,param_4,param_5,param_6,param_7,0x1fffffff);
        }
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

