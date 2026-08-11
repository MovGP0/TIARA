/* Ghidra address: 017c5a30 */
/* Ghidra symbol: FUN_017c5a30 */


ulonglong FUN_017c5a30(int param_1,int param_2,longlong *param_3,int *param_4,char param_5,
                      undefined8 param_6,longlong param_7,undefined4 param_8)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 unaff_R13;
  ulonglong uVar8;
  undefined7 uVar9;
  
  iVar3 = 0;
  *param_4 = 0;
  uVar9 = (undefined7)((ulonglong)unaff_R13 >> 8);
  uVar8 = CONCAT71(uVar9,7);
  if (param_3 == (longlong *)0x0) {
    cVar1 = FUN_01995600(param_6,0,0);
    if (cVar1 == '\0') {
      FUN_01d426b0(2000,&LAB_017c5eec);
    }
    plVar7 = (longlong *)FUN_01995660(param_6,0,0);
    while ((plVar7 != (longlong *)0x0 && (*param_4 == 0))) {
      iVar3 = iVar3 + 1;
      sVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      uVar9 = (undefined7)(uVar8 >> 8);
      if (sVar2 == 0xf) {
        iVar4 = (**(code **)(*plVar7 + 0x210))(plVar7,0);
        iVar5 = (**(code **)(*plVar7 + 0x210))(plVar7);
        if (((iVar4 == param_1) && (iVar5 == param_2)) || ((iVar4 == param_2 && (iVar5 == param_1)))
           ) {
          *param_4 = iVar3;
          uVar8 = CONCAT71(uVar9,5);
        }
      }
      else {
        sVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        if (sVar2 == 0xd) {
          iVar4 = (**(code **)(*plVar7 + 0x210))(plVar7,0);
          iVar5 = (**(code **)(*plVar7 + 0x210))(plVar7);
          if ((((iVar4 == param_1) && (iVar5 == param_2)) ||
              ((iVar4 == param_2 && (iVar5 == param_1)))) && (*param_4 = iVar3, param_5 == '\x01'))
          {
            uVar8 = CONCAT71(uVar9,6);
          }
        }
        else {
          sVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
          if (((sVar2 == 0x10) || (sVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7), sVar2 == 0xd9)) ||
             (sVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7), sVar2 == 0xda)) {
            iVar4 = (**(code **)(*plVar7 + 0x210))(plVar7,0);
            iVar5 = (**(code **)(*plVar7 + 0x210))(plVar7);
            if (((iVar4 == param_1) && (iVar5 == param_2)) ||
               ((iVar4 == param_2 && (iVar5 == param_1)))) {
              *param_4 = iVar3;
              uVar8 = CONCAT71(uVar9,3);
            }
          }
          else {
            sVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
            if ((sVar2 == 0xe) || (sVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7), sVar2 == 0x43)) {
              iVar4 = (**(code **)(*plVar7 + 0x210))(plVar7,0);
              iVar5 = (**(code **)(*plVar7 + 0x210))(plVar7);
              if ((((iVar4 == param_1) && (iVar5 == param_2)) ||
                  ((iVar4 == param_2 && (iVar5 == param_1)))) &&
                 (*param_4 = iVar3, param_5 == '\x01')) {
                uVar8 = CONCAT71(uVar9,4);
              }
            }
            else {
              sVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
              if ((((sVar2 == 9) ||
                   ((sVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7), sVar2 == 0x6b ||
                    (sVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7), sVar2 == 200)))) ||
                  (sVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7), sVar2 == 0xd2)) ||
                 (sVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7), sVar2 == 0xdc)) {
                iVar4 = (**(code **)(*plVar7 + 0x210))(plVar7,0);
                iVar5 = (**(code **)(*plVar7 + 0x210))(plVar7);
                if ((((iVar4 == param_1) && (iVar5 == param_2)) ||
                    ((iVar4 == param_2 && (iVar5 == param_1)))) &&
                   (*param_4 = iVar3, param_5 == '\x01')) {
                  uVar8 = CONCAT71(uVar9,2);
                }
              }
              else {
                sVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
                if ((sVar2 == 0x24) ||
                   (sVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7), sVar2 == 0x6c)) {
                  iVar4 = (**(code **)(*plVar7 + 0x210))(plVar7,0);
                  iVar5 = (**(code **)(*plVar7 + 0x210))(plVar7);
                  if ((((iVar4 == param_1) && (iVar5 == param_2)) ||
                      ((iVar4 == param_2 && (iVar5 == param_1)))) &&
                     (*param_4 = iVar3, param_5 == '\x01')) {
                    uVar8 = CONCAT71(uVar9,1);
                  }
                }
              }
            }
          }
        }
      }
      FUN_01995800(param_6,0,0);
      plVar7 = (longlong *)FUN_01995660(param_6);
    }
    goto LAB_017c5edd;
  }
  uVar6 = (**(code **)(*param_3 + 0xf8))(param_3);
  uVar6 = uVar6 & 0xffff;
  if (uVar6 < 0x6c) {
    if (uVar6 == 0x6b) goto LAB_017c5afe;
    if (uVar6 < 0x10) {
      if (uVar6 == 0xf) {
        uVar8 = CONCAT71(uVar9,5);
      }
      else {
        if (uVar6 == 9) goto LAB_017c5afe;
        if (uVar6 != 0xd) {
          if (uVar6 != 0xe) goto LAB_017c5b21;
          goto LAB_017c5b1c;
        }
        uVar8 = CONCAT71(uVar9,6);
      }
    }
    else {
      if (uVar6 == 0x10) goto LAB_017c5b12;
      if (uVar6 != 0x43) goto LAB_017c5b21;
LAB_017c5b1c:
      uVar8 = CONCAT71(uVar9,4);
    }
  }
  else {
    if (uVar6 < 0xd3) {
      if (uVar6 != 0xd2) {
        if (uVar6 - 0xa6 < 2) goto LAB_017c5b12;
        if (uVar6 - 0xa6 != 0x22) goto LAB_017c5b21;
      }
    }
    else {
      if (uVar6 - 0xd9 < 2) {
LAB_017c5b12:
        uVar8 = CONCAT71(uVar9,3);
        goto LAB_017c5b24;
      }
      if (uVar6 - 0xd9 != 3) {
LAB_017c5b21:
        uVar8 = CONCAT71(uVar9,7);
        goto LAB_017c5b24;
      }
    }
LAB_017c5afe:
    if (param_5 == '\x01') {
      uVar8 = CONCAT71(uVar9,2);
    }
  }
LAB_017c5b24:
  if (param_7 != 0) {
    iVar3 = FUN_014b8310(param_7,param_8,param_3);
    *param_4 = iVar3;
  }
LAB_017c5edd:
  return uVar8 & 0xffffffff;
}

