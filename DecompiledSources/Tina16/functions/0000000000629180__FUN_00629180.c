/* Ghidra address: 00629180 */
/* Ghidra symbol: FUN_00629180 */


undefined4 FUN_00629180(longlong *param_1,ulonglong param_2,char param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_20;
  
  local_20 = 0;
  if ((param_2 == 0) && (param_3 == '\0')) {
    uVar1 = FUN_0062d630(param_1 + 6);
    FUN_00627e40(uVar1);
    param_1[6] = (longlong)(param_1 + 0x11);
    *(undefined4 *)(param_1 + 7) = 0;
    FUN_004b6dc0(param_1[1],param_1[2]);
    param_1[3] = param_1[2];
  }
  else if ((((longlong)param_2 < 0) || (param_3 != '\x01')) &&
          ((param_2 == *(uint *)((longlong)param_1 + 0x4c) || (param_3 != '\0')))) {
    if ((param_2 == 0) && (param_3 == '\x02')) {
      FUN_00419260(&local_20,&DAT_00406578,1,0x2000);
      do {
        iVar3 = (**(code **)(*param_1 + 0x28))(param_1,local_20,0,0x2000);
      } while (0 < iVar3);
    }
    else {
      uVar2 = FUN_0044d490(&PTR_FUN_00627b88,1,L"Invalid ZStream operation!");
      FUN_004134c0(uVar2);
    }
  }
  else {
    if (param_3 == '\0') {
      param_2 = param_2 - *(uint *)((longlong)param_1 + 0x4c);
    }
    if (0 < (longlong)param_2) {
      FUN_00419260(&local_20,&DAT_00406578,1,0x2000);
      iVar3 = (int)((longlong)param_2 / 0x2000);
      if (0 < iVar3) {
        do {
          FUN_004b8420(param_1,&local_20,0x2000);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      FUN_004b8420(param_1,&local_20,(longlong)param_2 % 0x2000);
    }
  }
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x4c);
  FUN_00419430(&local_20,&DAT_00406578);
  return uVar1;
}

