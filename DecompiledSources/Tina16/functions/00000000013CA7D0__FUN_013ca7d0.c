/* Ghidra address: 013ca7d0 */
/* Ghidra symbol: FUN_013ca7d0 */


void FUN_013ca7d0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  (**(code **)(*(longlong *)*param_2 + 0x90))((longlong *)*param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x878) + 0x18))
                (*(longlong **)(param_1 + 0x878),local_30,iVar3);
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x30))
                        (*(longlong **)(param_1 + 0x878),iVar3);
      (**(code **)(*(longlong *)*param_2 + 0x80))((longlong *)*param_2,local_30[0],uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_30);
  return;
}

