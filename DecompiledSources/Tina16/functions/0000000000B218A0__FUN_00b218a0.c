/* Ghidra address: 00b218a0 */
/* Ghidra symbol: FUN_00b218a0 */


void FUN_00b218a0(undefined8 *param_1,ushort param_2,ushort param_3,ushort param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ushort local_2f;
  ushort local_2d;
  undefined1 local_2b;
  undefined1 local_2a;
  
  iVar4 = FUN_00b22360(*param_1);
  iVar4 = iVar4 + -1;
  if (-1 < iVar4) {
    do {
      FUN_00b22330(*param_1,&local_2f,iVar4);
      bVar2 = false;
      bVar1 = false;
      if ((param_2 <= local_2f) && (local_2f <= param_3)) {
        iVar5 = (uint)local_2f + ((uint)param_4 - (uint)param_2);
        if (iVar5 < 0) {
          local_2f = 0;
        }
        else if (iVar5 < 0x10000) {
          local_2f = local_2f + (param_4 - param_2);
        }
        else {
          bVar2 = true;
        }
        bVar1 = true;
      }
      if ((param_2 <= local_2d) && (local_2d <= param_3)) {
        iVar5 = (uint)local_2d + ((uint)param_4 - (uint)param_2);
        if (iVar5 < 0) {
          bVar2 = true;
        }
        else if (iVar5 < 0x10000) {
          local_2d = local_2d + (param_4 - param_2);
        }
        else {
          local_2d = 0xffff;
        }
        bVar1 = true;
      }
      if (((!bVar1) && ((uint)local_2f <= (uint)param_4)) &&
         ((uint)param_4 == (uint)local_2d || (uint)param_4 < (uint)local_2d)) {
        cVar3 = FUN_00b14cb0(param_4 - 1);
        if (cVar3 == '\0') {
          bVar2 = true;
        }
        else {
          local_2d = param_4 - 1;
        }
      }
      iVar5 = (uint)param_3 + ((uint)param_4 - (uint)param_2);
      if (((!bVar1) && ((int)(uint)local_2f <= iVar5)) && (iVar5 <= (int)(uint)local_2d)) {
        cVar3 = FUN_00b14cb0(iVar5 + 1);
        if (cVar3 == '\0') {
          bVar2 = true;
        }
        else {
          local_2f = (short)iVar5 + 1;
        }
      }
      if (!bVar1) {
        if (((local_2f < param_4) || (param_2 < local_2f)) ||
           ((local_2d < param_4 || (param_2 < local_2d)))) {
          if ((((local_2f < param_2) || (param_4 < local_2f)) || (local_2d < param_2)) ||
             (param_4 < local_2d)) goto LAB_00b21ab5;
        }
        bVar2 = true;
      }
LAB_00b21ab5:
      if ((bVar2) || (local_2d < local_2f)) {
        FUN_00b22460(*param_1,iVar4);
      }
      else {
        FUN_00b22370(*param_1,iVar4,local_2f,local_2d,local_2b,local_2a);
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  return;
}

