/* Ghidra address: 01266200 */
/* Ghidra symbol: FUN_01266200 */


void FUN_01266200(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *local_res10 [3];
  longlong *local_50 [2];
  longlong local_40 [2];
  
  local_50[0] = (longlong *)0x0;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  if (param_1 != 0) {
    iVar7 = *(int *)(param_1 + 0x10);
    iVar5 = 0;
    if (-1 < iVar7 + -1) {
      do {
        plVar3 = (longlong *)FUN_00b94e60(param_1,iVar5);
        cVar1 = FUN_0198a580(plVar3);
        if (cVar1 == '\x04') {
          cVar1 = FUN_01d04d40(plVar3);
          if (((cVar1 == '\0') || ((char)plVar3[0x34] != '\x01')) ||
             (*(longlong *)(plVar3[0x35] + 8) == 0)) {
            iVar2 = FUN_01cfd2d0();
            iVar6 = 0;
            if (-1 < iVar2 + -1) {
              do {
                lVar4 = FUN_01cfd090(plVar3,iVar6);
                (**(code **)(*plVar3 + 0x2d0))(plVar3,iVar6,local_40);
                if ((*(char *)(lVar4 + 0x33) == '\x06') && (*(char *)(local_40[0] + 0x18) == '\x02')
                   ) {
                  (**(code **)(*local_res10[0] + 0x100))(local_res10[0],local_50);
                  (**(code **)(*local_50[0] + 0x108))(local_50[0],L"runonly",&LAB_012663f0);
                }
                iVar6 = iVar6 + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
          }
          else {
            FUN_01266200(*(undefined8 *)(plVar3[0x35] + 8),local_res10[0]);
          }
        }
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  FUN_0041b800(local_50);
  FUN_0041b800(local_res10);
  return;
}

