/* Ghidra address: 01955640 */
/* Ghidra symbol: FUN_01955640 */


void FUN_01955640(longlong param_1,undefined4 param_2)

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
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0191c328);
      if (cVar1 != '\0') {
        plVar4 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x80) + 0x20))
                           (*(longlong **)(param_1 + 0x80),iVar5);
        (**(code **)(*plVar4 + 0x2c0))(plVar4,param_2);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x208) = param_2;
  return;
}

