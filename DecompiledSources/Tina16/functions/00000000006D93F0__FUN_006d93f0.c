/* Ghidra address: 006d93f0 */
/* Ghidra symbol: FUN_006d93f0 */


void FUN_006d93f0(longlong param_1,char param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_238 [130];
  
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x490) + 0x10) + 0x10);
    if (param_2 != '\0') {
      if (0x80 < iVar5) {
        iVar5 = 0x80;
      }
      if (iVar5 == 0) {
        local_238[0] = -1;
        uVar2 = FUN_0065b870(param_1);
        FUN_004701a0(uVar2,0x404,1,local_238);
        uVar2 = FUN_0065b870(param_1);
        FUN_00470120(uVar2,0x40b,0,0);
      }
      else {
        iVar6 = 0;
        iVar4 = 0;
        if (-1 < iVar5 + -2) {
          iVar8 = iVar5 + -1;
          piVar7 = local_238;
          do {
            lVar3 = FUN_006d8710(*(undefined8 *)(param_1 + 0x490),iVar4);
            iVar6 = iVar6 + *(int *)(lVar3 + 0x20);
            *piVar7 = iVar6;
            iVar4 = iVar4 + 1;
            piVar7 = piVar7 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        local_238[iVar5 + -1] = -1;
        uVar2 = FUN_0065b870(param_1);
        thunk_FUN_041b2403(uVar2,0x404,(longlong)iVar5,local_238);
      }
    }
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        FUN_006d9200(param_1,iVar4,param_3);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

