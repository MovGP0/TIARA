/* Ghidra address: 006fb710 */
/* Ghidra symbol: FUN_006fb710 */


void FUN_006fb710(longlong param_1,int param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  int local_78;
  undefined1 *local_60;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [8];
  byte local_38;
  longlong *local_30;
  longlong *local_20;
  
  local_60 = auStack_98;
  if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
    lVar3 = FUN_007017d0(param_1,0x417,(longlong)param_2,local_40);
    if (lVar3 != 0) {
      local_20 = local_30;
      cVar2 = FUN_004113d0(local_30,&PTR_FUN_006cb0d0);
      if ((cVar2 == '\0') && ((bool)*(char *)((longlong)local_20 + 0xa9) != ((local_38 & 8) == 0)))
      {
        FUN_006fc420(param_1,param_2);
      }
      lVar3 = FUN_0064fcf0(param_1,0x41d,(longlong)param_2,&local_50);
      if (lVar3 != 0) {
        cVar2 = FUN_004113d0(local_20,&PTR_FUN_006cb0d0);
        if (cVar2 != '\0') {
          (**(code **)(*local_20 + 0x1b0))(local_20);
        }
        cVar2 = FUN_004113d0(local_20,&PTR_FUN_006cb0d0);
        if (cVar2 == '\0') {
          cVar2 = FUN_004113d0(local_20,&PTR_FUN_00640c18);
          if (cVar2 != '\0') {
            FUN_0065b830(param_1);
          }
          FUN_0064d040(local_20,&local_50);
          iVar1 = *(int *)((longlong)local_20 + 0x9c);
          if (iVar1 < local_44 - local_4c) {
            local_54 = ((local_44 - local_4c) - iVar1) / 2;
            local_78 = iVar1;
            (**(code **)(*local_20 + 400))
                      (local_20,local_50,local_4c + local_54,local_48 - local_50);
          }
        }
        else {
          FUN_0064d040(local_20,&local_50);
        }
        cVar2 = FUN_004113d0(local_20,&PTR_FUN_006cb0d0);
        if (cVar2 != '\0') {
          (**(code **)(*local_20 + 0x1b8))(local_20);
        }
      }
    }
  }
  return;
}

