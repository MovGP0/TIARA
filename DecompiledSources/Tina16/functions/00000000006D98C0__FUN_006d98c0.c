/* Ghidra address: 006d98c0 */
/* Ghidra symbol: FUN_006d98c0 */


undefined8 FUN_006d98c0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if ((((*(char *)((longlong)param_1 + 0x4ac) != '\0') &&
       ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)) &&
      (cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a62a8), cVar1 != '\0')) &&
     (cVar1 = (**(code **)(*param_1 + 0x270))(param_1), cVar1 == '\0')) {
    if ((char)param_1[0x95] == '\0') {
      bVar3 = *(int *)(*(longlong *)(param_1[0x92] + 0x10) + 0x10) == 0;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_006d8dc0(param_1,*(undefined8 *)(param_2 + 0xf8));
    }
    else {
      uVar2 = FUN_006d8710(param_1[0x92],0);
      FUN_006d85c0(uVar2,*(undefined8 *)(param_2 + 0xf8));
    }
    return 1;
  }
  uVar2 = FUN_004d4480(param_1,param_2);
  return uVar2;
}

