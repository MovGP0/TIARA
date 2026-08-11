/* Ghidra address: 015670c0 */
/* Ghidra symbol: FUN_015670c0 */


void FUN_015670c0(longlong param_1,longlong param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code *local_48;
  undefined8 local_40;
  
  local_48 = (code *)*param_4;
  local_40 = param_4[1];
  iVar8 = *(int *)(param_2 + 0x10);
  iVar6 = 0;
  if (-1 < iVar8 + -1) {
    do {
      plVar5 = (longlong *)FUN_00b94e60(param_2,iVar6);
      if (((plVar5 != (longlong *)0x0) && (cVar1 = FUN_0198a580(plVar5), cVar1 == '\x04')) &&
         ((**(code **)(*plVar5 + 0xf8))(plVar5), (char)plVar5[0xac] == '\0')) {
        cVar1 = FUN_01d40110(plVar5);
        if (cVar1 == '\0') {
          cVar1 = FUN_01d04d40(plVar5);
          if ((((cVar1 == '\0') ||
               (((char)plVar5[0x34] != '\x02' && ((char)plVar5[0x34] != '\x04')))) ||
              ((param_3 & 1) == 0)) || (*(longlong *)(plVar5[0x35] + 8) == 0)) {
            cVar1 = FUN_01d04d40(plVar5);
            if (((cVar1 == '\0') ||
                (((cVar1 = (char)plVar5[0x34], cVar1 != '\x01' && (cVar1 != '\x02')) &&
                 (cVar1 != '\x04')))) || (*(longlong *)(plVar5[0x35] + 8) == 0)) {
              (*local_48)(local_40,plVar5,0xffffffff);
            }
            else {
              FUN_015670c0(param_1,*(undefined8 *)(plVar5[0x35] + 8),param_3,&local_48);
            }
          }
          else {
            (*local_48)(local_40,plVar5);
          }
        }
        else {
          iVar3 = FUN_01d01940(plVar5);
          iVar3 = iVar3 + (uint)*(ushort *)((longlong)plVar5 + 0xf4);
          uVar4 = FUN_01d03160(plVar5);
          cVar1 = FUN_01d3d5c0(uVar4);
          if ((cVar1 == '\0') && (sVar2 = FUN_01d03160(plVar5), sVar2 != 0x2903)) {
            if (10 < iVar3) {
              *(undefined1 *)(param_1 + 0x709) = 1;
            }
            iVar7 = 1;
            if (0 < iVar3) {
              do {
                (*local_48)(local_40,*(undefined8 *)(plVar5[0x2d] + 0x5b + (longlong)iVar7 * 99));
                iVar7 = iVar7 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            *(undefined1 *)(param_1 + 0x709) = 0;
          }
          else {
            (*local_48)(local_40,plVar5);
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}

