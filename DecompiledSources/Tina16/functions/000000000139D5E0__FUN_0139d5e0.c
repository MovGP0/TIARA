/* Ghidra address: 0139d5e0 */
/* Ghidra symbol: FUN_0139d5e0 */


char FUN_0139d5e0(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  char cVar9;
  bool bVar10;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c [3];
  
  cVar9 = '\0';
  if ((((param_2 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x280) == 0)) ||
      (cVar1 = (**(code **)(*param_2 + 0xc0))(param_2), cVar1 == '\0')) &&
     ((param_2 != (longlong *)0x0 && (param_2 != *(longlong **)(param_1 + 0x218))))) {
    uVar4 = FUN_0198a580(param_2);
    if ((byte)uVar4 < 8) {
      bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 0x3aU) != 0
      ;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      cVar1 = FUN_0198a580(param_2);
      if (cVar1 == '\x05') {
        iVar3 = (**(code **)(*param_2 + 0x1c8))();
        iVar7 = 0;
        if (-1 < iVar3 + -1) {
          do {
            cVar1 = (**(code **)(*param_2 + 0x1d8))(param_2,iVar7);
            if (cVar1 == '\0') {
              (**(code **)(*param_2 + 0x1f0))(param_2,iVar7,local_3c,&local_40);
              local_58 = local_3c[0];
              local_54 = local_40;
              iVar6 = *(int *)(param_1 + 0x214);
              if (-1 < iVar6 + -1) {
                piVar5 = (int *)(param_1 + 0x144);
                do {
                  if ((local_3c[0] == *piVar5) && (local_40 == piVar5[1])) {
                    cVar9 = '\x01';
                  }
                  piVar5 = piVar5 + 2;
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
              }
            }
            iVar7 = iVar7 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else {
        iVar3 = (**(code **)(*param_2 + 0x1c8))();
        iVar7 = 0;
        if (-1 < iVar3 + -1) {
          do {
            cVar1 = (**(code **)(*param_2 + 0x1d8))(param_2,iVar7);
            if (cVar1 == '\0') {
              (**(code **)(*param_2 + 0x1f0))(param_2,iVar7,local_3c,&local_40);
              local_58 = local_3c[0];
              local_54 = local_40;
              cVar1 = FUN_00b958b0(param_1 + 0x220,&local_58);
              if (cVar1 != '\0') {
                cVar9 = '\x01';
              }
              iVar6 = *(int *)(param_1 + 0x214);
              if (-1 < iVar6 + -1) {
                piVar5 = (int *)(param_1 + 0x144);
                do {
                  if ((local_58 == *piVar5) && (local_54 == piVar5[1])) {
                    cVar9 = '\x01';
                  }
                  piVar5 = piVar5 + 2;
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
              }
            }
            iVar7 = iVar7 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        if (cVar9 == '\0') {
          uVar4 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
          (**(code **)(*param_2 + 0x68))(param_2,uVar4,&local_50);
          cVar1 = FUN_0198a580(param_2);
          if ((cVar1 == '\x04') && (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x68))
          {
            FUN_00b95880(&local_50,0xfffffffd,0xfffffffd);
          }
          iVar3 = *(int *)(param_1 + 0x214);
          if (-1 < iVar3 + -1) {
            lVar8 = param_1 + 0x144;
            do {
              cVar1 = FUN_00b958b0(&local_50,lVar8);
              if (cVar1 != '\0') {
                cVar9 = '\x01';
              }
              lVar8 = lVar8 + 8;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
        if ((cVar9 == '\0') &&
           ((((FUN_00b95740(&local_50,param_1 + 0x220), local_50 != 0 || (local_4c != 0)) ||
             (local_48 != 0)) || (local_44 != 0)))) {
          cVar9 = '\x01';
        }
      }
    }
  }
  return cVar9;
}

