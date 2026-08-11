/* Ghidra address: 01b98c30 */
/* Ghidra symbol: FUN_01b98c30 */


void FUN_01b98c30(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined7 uVar7;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = FUN_01b95130(param_2);
    if (cVar1 == '\0') {
      if (param_3 == 0) {
        iVar3 = FUN_006decb0(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550));
        do {
          iVar3 = iVar3 + -1;
          if (iVar3 < 0) break;
          plVar5 = (longlong *)
                   FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550),iVar3);
        } while (plVar5 == param_2);
        if (iVar3 < 0) {
          return;
        }
        param_3 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550),iVar3);
      }
      uVar6 = FUN_01b95130(param_3);
      uVar7 = (undefined7)((ulonglong)uVar6 >> 8);
      if ((char)uVar6 == '\0') {
        if (param_4 == '\0') {
          uVar2 = (undefined4)CONCAT71(uVar7,4);
        }
        else {
          lVar4 = FUN_006dd3e0(param_3);
          if (lVar4 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = (undefined4)CONCAT71((int7)((ulonglong)lVar4 >> 8),4);
            param_3 = lVar4;
          }
        }
      }
      else {
        uVar2 = (undefined4)CONCAT71(uVar7,2);
      }
    }
    else if (param_3 == 0) {
      uVar2 = 0;
    }
    else {
      lVar4 = FUN_01b95130(param_3);
      if ((char)lVar4 == '\0') {
        lVar4 = FUN_006dd390(param_3);
        param_3 = lVar4;
      }
      if (param_4 == '\0') {
        uVar2 = (undefined4)CONCAT71((int7)((ulonglong)lVar4 >> 8),4);
      }
      else {
        lVar4 = FUN_006dd3e0(param_3);
        if (lVar4 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = (undefined4)CONCAT71((int7)((ulonglong)lVar4 >> 8),4);
          param_3 = lVar4;
        }
      }
    }
    (**(code **)(*param_2 + 0x20))(param_2,param_3,uVar2);
  }
  return;
}

