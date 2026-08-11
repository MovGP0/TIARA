/* Ghidra address: 005b2c40 */
/* Ghidra symbol: FUN_005b2c40 */


void FUN_005b2c40(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  
  param_2 = param_2 & 0xffffffff;
  if ((char)param_2 != *(char *)((longlong)param_1 + 0xd9)) {
    if (param_1[0x18] != 0) {
      cVar1 = *(char *)(param_1[0x18] + 0xb0);
      if (cVar1 == '\x01') {
        *(char *)((longlong)param_1 + 0xd9) = (char)param_2;
        return;
      }
      if (cVar1 == '\x02') {
        param_2 = CONCAT71((int7)(param_2 >> 8),1);
      }
    }
    iVar2 = FUN_004d4cf0();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = FUN_004d4cc0(param_1,iVar5);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_005af7a8);
        if (cVar1 != '\0') {
          plVar4 = (longlong *)FUN_004d4cc0(param_1,iVar5);
          (**(code **)(*plVar4 + 0xb8))(plVar4,param_2);
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(char *)((longlong)param_1 + 0xd9) = (char)param_2;
    (**(code **)(*param_1 + 0x88))(param_1);
  }
  return;
}

