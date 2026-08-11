/* Ghidra address: 00661ae0 */
/* Ghidra symbol: FUN_00661ae0 */


longlong * FUN_00661ae0(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 local_50 [16];
  undefined8 local_40 [2];
  
  iVar2 = FUN_00654c00(*(undefined8 *)(param_1 + 0x28));
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      plVar3 = (longlong *)FUN_00654bc0(*(undefined8 *)(param_1 + 0x28),iVar2);
      if ((*(char *)((longlong)plVar3 + 0xa9) != '\0') &&
         ((cVar1 = FUN_004113d0(plVar3,&PTR_FUN_00640c18), cVar1 == '\0' ||
          (*(char *)((longlong)plVar3 + 0x391) != '\0')))) {
        local_40[0] = CONCAT44(param_2[1] - *(int *)((longlong)plVar3 + 0x94),
                               *param_2 - (int)plVar3[0x12]);
        (**(code **)(*plVar3 + 0xe0))(plVar3,local_50);
        cVar1 = FUN_00423210(local_50,local_40);
        if (cVar1 != '\0') {
          return plVar3;
        }
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return (longlong *)0x0;
}

