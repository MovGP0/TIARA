/* Ghidra address: 00baf6a0 */
/* Ghidra symbol: FUN_00baf6a0 */


void FUN_00baf6a0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *local_30 [2];
  
  local_30[0] = (longlong *)0x0;
  cVar1 = FUN_00baeff0(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x40))(param_2);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))();
    iVar3 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))
                  (*(longlong **)(param_1 + 0x30),local_30,iVar3);
        (**(code **)(*local_30[0] + 200))(local_30[0],param_2);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    (**(code **)(*param_2 + 0x48))(param_2);
  }
  FUN_0041b800(local_30);
  return;
}

