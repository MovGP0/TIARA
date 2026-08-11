/* Ghidra address: 0062bdb0 */
/* Ghidra symbol: FUN_0062bdb0 */


/* WARNING: Type propagation algorithm not settling */

int FUN_0062bdb0(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  
  iVar4 = (param_2 + 7 >> 3) + param_2;
  uVar8 = param_2 + 0x3f >> 6;
  if ((((param_1 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
      (*(longlong *)(param_1 + 0x38) != 0)) &&
     ((plVar2 = *(longlong **)(param_1 + 0x28), plVar2 != (longlong *)0x0 && (*plVar2 == param_1))))
  {
    iVar5 = (int)plVar2[1];
    if (((iVar5 - 0x39U < 0x39) &&
        ((0x100400400011001U >> ((ulonglong)(iVar5 - 0x39U) & 0x3f) & 1) != 0)) ||
       ((iVar5 == 0x2a || (iVar5 == 0x29a)))) {
      iVar5 = *(int *)((longlong)plVar2 + 0x2c);
      if (iVar5 == 0) {
        iVar6 = 0;
        iVar5 = (int)plVar2[9];
      }
      else if (iVar5 == 2) {
        lVar3 = plVar2[6];
        if (lVar3 == 0) {
          iVar6 = 0x12;
          iVar5 = (int)plVar2[9];
        }
        else {
          if (*(longlong *)(lVar3 + 0x10) == 0) {
            iVar5 = 0x12;
            pcVar7 = *(char **)(lVar3 + 0x20);
          }
          else {
            iVar5 = *(int *)(lVar3 + 0x18) + 0x14;
            pcVar7 = *(char **)(lVar3 + 0x20);
          }
          if (pcVar7 != (char *)0x0) {
            do {
              iVar5 = iVar5 + 1;
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
          }
          pcVar7 = *(char **)(lVar3 + 0x30);
          if (pcVar7 != (char *)0x0) {
            do {
              iVar5 = iVar5 + 1;
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
          }
          iVar6 = iVar5 + 2;
          if (*(int *)(lVar3 + 0x3c) == 0) {
            iVar6 = iVar5;
          }
          iVar5 = (int)plVar2[9];
        }
      }
      else if (iVar5 == 1) {
        iVar6 = (uint)(*(int *)((longlong)plVar2 + 0x94) != 0) * 4 + 6;
        iVar5 = (int)plVar2[9];
      }
      else {
        iVar6 = 6;
        iVar5 = (int)plVar2[9];
      }
      if ((iVar5 == 0xf) && ((int)plVar2[0xf] == 0xf)) {
        return param_2 + 7 + (param_2 >> 0xc) + (param_2 >> 0xe) + (param_2 >> 0x19) + iVar6;
      }
      return uVar8 + 5 + iVar4 + iVar6;
    }
  }
  return iVar4 + uVar8 + 0xb;
}

