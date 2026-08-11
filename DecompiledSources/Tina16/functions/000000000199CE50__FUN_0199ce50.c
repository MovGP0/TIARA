/* Ghidra address: 0199ce50 */
/* Ghidra symbol: FUN_0199ce50 */


void FUN_0199ce50(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  int iVar5;
  int local_38;
  int local_34;
  undefined8 local_30;
  
  local_30 = 0;
  if (((param_2 != (longlong *)0x0) &&
      (cVar1 = (**(code **)(*param_2 + 0x118))(param_2), cVar1 != '\0')) &&
     (cVar1 = FUN_0198a580(param_2), cVar1 != '\x05')) {
    iVar2 = (**(code **)(*param_2 + 0x1c8))();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = (**(code **)(*param_2 + 0x210))(param_2,iVar5);
        (**(code **)(param_1 + 0x48))(&local_30,uVar3);
        (**(code **)(*param_2 + 0x1f0))(param_2,iVar5,&local_34,&local_38);
        local_34 = local_34 + -6;
        local_38 = local_38 + -7;
        plVar4 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x40) + 0x58))
                           (*(longlong **)(param_1 + 0x40),local_34,local_38);
        if ((plVar4 == (longlong *)0x0) || ((undefined **)*plVar4 != &PTR_FUN_010b5580)) {
          FUN_0199c8c0(*(undefined8 *)(param_1 + 0x40),local_34,local_38,1,local_30,0);
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00414480(&local_30);
  return;
}

