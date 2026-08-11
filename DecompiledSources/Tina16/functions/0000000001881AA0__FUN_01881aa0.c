/* Ghidra address: 01881aa0 */
/* Ghidra symbol: FUN_01881aa0 */


void FUN_01881aa0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 local_40 [2];
  longlong *local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = (longlong *)0x0;
  FUN_01880030(param_1);
  uVar2 = FUN_0187fce0(param_1);
  uVar3 = FUN_0041b800(local_30);
  cVar1 = FUN_00452370(uVar2,&DAT_01881bc8,uVar3);
  if ((cVar1 != '\0') && (lVar4 = (**(code **)(*local_30[0] + 0x18))(local_30[0]), lVar4 != 0)) {
    iVar7 = *(int *)(lVar4 + 0x10);
    iVar6 = 0;
    if (-1 < iVar7 + -1) {
      do {
        lVar5 = FUN_004aeac0(lVar4,iVar6);
        if (lVar5 == 0) {
          if (iVar6 == 0) {
            (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))(*(longlong **)(param_1 + 0x20),0);
          }
        }
        else {
          uVar2 = FUN_004aeac0(lVar4,iVar6);
          FUN_00410ae0(uVar2,local_40);
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))
                    (*(longlong **)(param_1 + 0x20),local_40[0]);
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  FUN_00414480(local_40);
  FUN_0041b800(local_30);
  return;
}

