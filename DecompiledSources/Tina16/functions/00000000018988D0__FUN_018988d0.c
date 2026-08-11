/* Ghidra address: 018988d0 */
/* Ghidra symbol: FUN_018988d0 */


void FUN_018988d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 local_20;
  
  local_20 = 0;
  for (lVar1 = *(longlong *)(param_2 + 0x10); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x18)) {
    FUN_018988d0(param_1,lVar1);
    cVar3 = '\0';
    if (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x708) != 0) {
      cVar3 = (**(code **)(*(longlong *)(param_1 + 0x70) + 0x708))
                        (*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x710),
                         *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(lVar1 + 0x38),
                         *(undefined8 *)(param_1 + 0x78));
    }
    if (cVar3 == '\0') {
      FUN_0043e5a0(&local_20,*(undefined8 *)(lVar1 + 0x40));
      iVar4 = FUN_004170c0(*(undefined8 *)(param_1 + 0x40),local_20,1);
      cVar3 = 0 < iVar4;
    }
    if ((cVar3 == '\0') && (*(longlong *)(param_1 + 0x40) != 0)) {
      if ((*(longlong *)(lVar1 + 0x38) != 0) &&
         (cVar3 = FUN_006dd2b0(*(longlong *)(lVar1 + 0x38)), cVar3 == '\0')) {
        lVar2 = *(longlong *)(lVar1 + 0x38);
        *(undefined8 *)(lVar2 + 0x40) = 0;
        FUN_00414ad0(lVar1 + 0x40,*(undefined8 *)(lVar2 + 0x10));
        *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(*(longlong *)(lVar1 + 0x38) + 0x18);
        *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(*(longlong *)(lVar1 + 0x38) + 0x28);
        *(undefined4 *)(lVar1 + 0x34) = *(undefined4 *)(*(longlong *)(lVar1 + 0x38) + 0x2c);
        *(undefined8 *)(lVar1 + 0x38) = 0;
        FUN_006ded10(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x550),lVar2);
      }
    }
    else if (*(longlong *)(lVar1 + 0x38) == 0) {
      FUN_018987e0(param_1,lVar1);
    }
  }
  FUN_00414480(&local_20);
  return;
}

