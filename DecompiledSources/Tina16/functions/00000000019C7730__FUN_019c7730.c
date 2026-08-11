/* Ghidra address: 019c7730 */
/* Ghidra symbol: FUN_019c7730 */


undefined8
FUN_019c7730(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined8 local_res20;
  undefined8 local_40;
  longlong local_38;
  longlong local_30 [2];
  
  local_40 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414480(param_2);
  if ((param_3 != 0) && (cVar1 = FUN_01486310(param_3,L"components",local_30), cVar1 != '\0')) {
    iVar6 = *(int *)(*(longlong *)(local_30[0] + 0x10) + 0x10);
    uVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        lVar4 = *(longlong *)(local_30[0] + 0x10);
        if (*(uint *)(lVar4 + 0x10) <= uVar5) {
          FUN_00594f90();
        }
        uVar3 = FUN_004113f0(*(undefined8 *)(*(longlong *)(lVar4 + 8) + (longlong)(int)uVar5 * 8),
                             &LAB_00f23b78);
        FUN_014860e0(uVar3,&local_40,&PTR_DAT_019c7918,0);
        iVar2 = FUN_00416db0(local_40,local_res20);
        if (iVar2 == 0) {
          cVar1 = FUN_01486310(uVar3,L"pins",&local_38);
          if (((cVar1 != '\0') && (-1 < (int)param_5)) &&
             (lVar4 = *(longlong *)(local_38 + 0x10), (int)param_5 < *(int *)(lVar4 + 0x10))) {
            if (*(uint *)(lVar4 + 0x10) <= param_5) {
              FUN_00594f90();
            }
            lVar4 = FUN_004113f0(*(undefined8 *)
                                  (*(longlong *)(lVar4 + 8) + (longlong)(int)param_5 * 8),
                                 &LAB_00f23b78);
            if (lVar4 != 0) {
              FUN_014860e0(lVar4,param_2,L"name",0);
            }
          }
          break;
        }
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  FUN_00414480(&local_40);
  FUN_00414480(&local_res20);
  return param_2;
}

