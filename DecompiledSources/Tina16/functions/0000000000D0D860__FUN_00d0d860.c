/* Ghidra address: 00d0d860 */
/* Ghidra symbol: FUN_00d0d860 */


bool FUN_00d0d860(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  bool bVar5;
  longlong local_20;
  
  local_20 = 0;
  uVar2 = FUN_00cd79e0();
  FUN_00d0d770(param_1,&local_20,uVar2,0x20,0,1);
  if (*PTR_DAT_020019d8 == '\0') {
    bVar5 = false;
  }
  else {
    uVar2 = (**(code **)(param_1 + 0x38))(param_1);
    uVar4 = 0;
    if (local_20 != 0) {
      uVar4 = *(undefined4 *)(local_20 + -4);
    }
    uVar3 = FUN_00415ab0(local_20);
    iVar1 = FUN_00cd7340(uVar3,uVar2,uVar4);
    bVar5 = iVar1 == 0;
  }
  FUN_004144d0(&local_20);
  return bVar5;
}

