/* Ghidra address: 014c4dc0 */
/* Ghidra symbol: FUN_014c4dc0 */


void FUN_014c4dc0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_38;
  undefined8 local_30;
  longlong local_28 [3];
  
  local_38 = 0;
  local_30 = 0;
  local_28[1] = 0;
  local_28[0] = 0;
  while (*(char *)(param_1 + 0x1a) == '\0') {
    uVar3 = FUN_014c0b50();
    cVar1 = FUN_014c1800(uVar3,*(undefined8 *)(param_1 + 0x48),local_28,0,0);
    if ((cVar1 != '\0') && (local_28[0] != 0)) {
      (**(code **)**(undefined8 **)(param_1 + 0x50))(*(undefined8 **)(param_1 + 0x50));
      FUN_004b3880(DAT_0210eb90,&local_30);
      FUN_00416ad0(&local_30,local_28[0]);
      FUN_004b50b0(DAT_0210eb90,local_30);
      iVar2 = (**(code **)(*DAT_0210eb90 + 0x28))(DAT_0210eb90);
      (**(code **)(*DAT_0210eb90 + 0x18))(DAT_0210eb90,&local_38,iVar2 + -1);
      if (local_38 == 0) {
        iVar2 = (**(code **)(*DAT_0210eb90 + 0x28))(DAT_0210eb90);
        (**(code **)(*DAT_0210eb90 + 0x98))(DAT_0210eb90,iVar2 + -1);
      }
      (**(code **)(**(longlong **)(param_1 + 0x50) + 8))(*(longlong **)(param_1 + 0x50));
    }
    FUN_004d1e10(500);
  }
  FUN_00414560(&local_38,4);
  return;
}

