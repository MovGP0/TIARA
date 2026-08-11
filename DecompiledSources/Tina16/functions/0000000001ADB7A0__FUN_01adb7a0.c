/* Ghidra address: 01adb7a0 */
/* Ghidra symbol: FUN_01adb7a0 */


void FUN_01adb7a0(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4,
                 undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  (**(code **)(*(longlong *)*param_5 + 0x90))((longlong *)*param_5);
  if (param_2 != 0) {
    iVar2 = (**(code **)(*param_4 + 0x28))();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        if ((param_3 == 0) || (cVar1 = FUN_00821920(param_3,iVar5), cVar1 != '\0')) {
          uVar4 = (**(code **)(*param_4 + 0x30))(param_4,iVar5);
          iVar3 = (**(code **)(**(longlong **)(param_2 + 8) + 0x48))
                            (*(longlong **)(param_2 + 8),uVar4);
          if (iVar3 != -1) {
            (**(code **)(*param_4 + 0x18))(param_4,local_30,iVar5);
            FUN_01ce7b20(local_30);
            uVar4 = (**(code **)(*param_4 + 0x30))(param_4,iVar5);
            (**(code **)(*(longlong *)*param_5 + 0x80))((longlong *)*param_5,local_30[0],uVar4);
          }
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00414480(local_30);
  return;
}

