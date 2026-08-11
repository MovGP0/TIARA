/* Ghidra address: 00c743e0 */
/* Ghidra symbol: FUN_00c743e0 */


void FUN_00c743e0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_38 [40];
  
  FUN_00687ed0(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0061c2b8);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_00c741c0(param_1);
    cVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
    if ((((cVar1 != '\0') && (*(longlong *)(param_2 + 0xc0) != 0)) &&
        (*(longlong *)(*(longlong *)(param_2 + 0xc0) + 0xd0) != 0)) &&
       (-1 < *(int *)(param_2 + 0x110))) {
      plVar3 = *(longlong **)(*(longlong *)(param_2 + 0xc0) + 0xd0);
      iVar2 = (**(code **)(*plVar3 + 0x90))(plVar3);
      if (*(int *)(param_2 + 0x110) < iVar2) {
        FUN_00c74300(auStack_38,*(undefined8 *)(*(longlong *)(param_2 + 0xc0) + 0xd0),
                     *(undefined4 *)(param_2 + 0x110));
      }
    }
  }
  return;
}

