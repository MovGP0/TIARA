/* Ghidra address: 0080f500 */
/* Ghidra symbol: FUN_0080f500 */


undefined4 FUN_0080f500(longlong param_1,undefined4 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar3 = *(longlong *)(DAT_02012670 + 0xd0);
  if (lVar3 == 0) {
LAB_0080f53a:
    lVar2 = *(longlong *)(param_1 + 0xa8);
    if ((lVar2 != lVar3) && (lVar2 != 0)) {
      lVar3 = FUN_0064fca0(lVar2,param_2,0,param_3);
      if (lVar3 == 1) goto LAB_0080f565;
    }
    uVar4 = 0;
  }
  else {
    lVar2 = FUN_0064fca0(lVar3,param_2,0,param_3);
    if (lVar2 != 1) goto LAB_0080f53a;
LAB_0080f565:
    uVar4 = (undefined4)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  if ((char)uVar4 == '\0') {
    cVar1 = FUN_004113d0(param_3,&PTR_FUN_0061c2b8);
    if ((((cVar1 != '\0') && (*(char *)((longlong)param_3 + 0xd9) != '\0')) &&
        (*(char *)((longlong)param_3 + 0xc9) != '\0')) &&
       ((*(ushort *)((longlong)param_3 + 0x34) & 0x10) == 0)) {
      (**(code **)(*param_3 + 0xe8))(param_3,param_3[0x13] != 0);
    }
  }
  return uVar4;
}

