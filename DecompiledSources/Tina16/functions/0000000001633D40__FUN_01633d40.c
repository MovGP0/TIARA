/* Ghidra address: 01633d40 */
/* Ghidra symbol: FUN_01633d40 */


void FUN_01633d40(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  uVar3 = FUN_01615c30(*(undefined8 *)(param_1 + 0x10));
  cVar1 = FUN_0161c650(uVar3,param_2);
  if (cVar1 == '\0') {
    lVar5 = *(longlong *)(param_1 + 0x10);
    if ((*(char *)(lVar5 + 8) != '\x01') && (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x1c))) {
      lVar4 = FUN_016339d0(param_1,lVar5,*(undefined8 *)(param_1 + 0x10),param_2,2);
      cVar1 = FUN_0161c650(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x58),param_2);
      if ((cVar1 == '\0') && (lVar4 == 0)) {
        uVar3 = FUN_01628df0(lVar5,4,param_2);
        FUN_01634240(param_1,uVar3);
      }
    }
    if (((*(char *)(lVar5 + 8) == '\x01') && (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x1c)))
       && (lVar4 = FUN_016339d0(param_1,lVar5,*(undefined8 *)(param_1 + 0x10),param_2,3), lVar4 == 0
          )) {
      uVar3 = FUN_01628df0(lVar5,3,param_2);
      FUN_01634240(param_1,uVar3);
    }
    uVar3 = FUN_0161bb40(param_2);
    local_40 = *(int *)(param_1 + 0x1c);
    if (local_40 <= *(int *)(param_1 + 0x20)) {
      iVar7 = (*(int *)(param_1 + 0x20) - local_40) + 1;
      do {
        lVar5 = FUN_004aeac0(uVar3,local_40);
        cVar1 = *(char *)(lVar5 + 8);
        if ((cVar1 == '2') || (cVar1 == '4')) {
          lVar4 = FUN_016339d0(param_1,lVar5,*(undefined8 *)(param_1 + 0x10),param_2,cVar1 != '2');
          if (lVar4 == 0) {
            lVar4 = FUN_01628df0(lVar5,cVar1 != '2',param_2);
            FUN_01634240(param_1,lVar4);
          }
          FUN_0161af40(lVar4,lVar5);
        }
        else if (((*(char *)(lVar5 + 8) == '5') || (*(char *)(lVar5 + 8) == '\r')) &&
                ((cVar1 = FUN_016265c0(lVar5), cVar1 == '\0' &&
                 (((cVar1 = FUN_01614240(lVar5), cVar1 == '\0' &&
                   (iVar2 = FUN_01614590(lVar5), iVar2 != 0x3ea)) &&
                  (cVar1 = FUN_01626630(lVar5), cVar1 == '\0')))))) {
          lVar4 = FUN_016339d0(param_1,lVar5,*(undefined8 *)(param_1 + 0x10),param_2,2);
          uVar6 = FUN_01612bc0(lVar5,1);
          cVar1 = FUN_0161c560(uVar6,param_2);
          if (cVar1 == '\0') {
            if (lVar4 == 0) {
              lVar4 = FUN_01628df0(lVar5,2,param_2);
              FUN_01634240(param_1,lVar4);
            }
            FUN_0161af40(lVar4,lVar5);
          }
        }
        else if (*(char *)(lVar5 + 8) == '\x0e') {
          lVar4 = FUN_016339d0(param_1,lVar5,*(undefined8 *)(param_1 + 0x10),param_2,2);
          uVar6 = FUN_01612bc0(lVar5,1);
          cVar1 = FUN_0161c560(uVar6,param_2);
          if (cVar1 == '\0') {
            if (lVar4 == 0) {
              lVar4 = FUN_01628df0(lVar5,2,param_2);
              FUN_01634240(param_1,lVar4);
            }
            FUN_0161af40(lVar4,lVar5);
          }
          lVar4 = FUN_016339d0(param_1,lVar5,*(undefined8 *)(param_1 + 0x10),param_2,3);
          uVar6 = FUN_01612bc0(lVar5,2);
          cVar1 = FUN_0161c560(uVar6,param_2);
          if (cVar1 == '\0') {
            if (lVar4 == 0) {
              lVar4 = FUN_01628df0(lVar5,3,param_2);
              FUN_01634240(param_1,lVar4);
            }
            FUN_0161af40(lVar4,lVar5);
          }
        }
        local_40 = local_40 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  FUN_00414560(&local_38,2);
  return;
}

