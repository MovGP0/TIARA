/* Ghidra address: 00b21b20 */
/* Ghidra symbol: FUN_00b21b20 */


void FUN_00b21b20(undefined8 *param_1,byte param_2,byte param_3,byte param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined2 local_2f;
  undefined2 local_2d;
  byte local_2b;
  byte local_2a;
  
  iVar4 = FUN_00b22360(*param_1);
  iVar4 = iVar4 + -1;
  if (-1 < iVar4) {
    do {
      FUN_00b22330(*param_1,&local_2f,iVar4);
      bVar2 = false;
      bVar1 = false;
      if ((param_2 <= local_2b) && (local_2b <= param_3)) {
        iVar5 = (uint)local_2b + ((uint)param_4 - (uint)param_2);
        if (iVar5 < 0) {
          local_2b = 0;
        }
        else if (iVar5 < 0x100) {
          local_2b = local_2b + (param_4 - param_2);
        }
        else {
          bVar2 = true;
        }
        bVar1 = true;
      }
      if ((param_2 <= local_2a) && (local_2a <= param_3)) {
        iVar5 = (uint)local_2a + ((uint)param_4 - (uint)param_2);
        if (iVar5 < 0) {
          bVar2 = true;
        }
        else if (iVar5 < 0x100) {
          local_2a = local_2a + (param_4 - param_2);
        }
        else {
          local_2a = 0xff;
        }
        bVar1 = true;
      }
      if (((!bVar1) && (local_2b <= param_4)) && (param_4 <= local_2a)) {
        cVar3 = FUN_00b14cd0(param_4 - 1);
        if (cVar3 == '\0') {
          bVar2 = true;
        }
        else {
          local_2a = param_4 - 1;
        }
      }
      if (((!bVar1) &&
          ((int)(uint)local_2b <= (int)((uint)param_3 + ((uint)param_4 - (uint)param_2)))) &&
         ((int)((uint)param_3 + ((uint)param_4 - (uint)param_2)) <= (int)(uint)local_2a)) {
        cVar3 = FUN_00b14cd0((uint)param_3 + ((uint)param_4 - (uint)param_2) + 1);
        if (cVar3 == '\0') {
          bVar2 = true;
        }
        else {
          local_2b = param_3 + (param_4 - param_2) + 1;
        }
      }
      if ((!bVar1) &&
         ((((param_4 <= local_2b && (local_2b <= param_2)) &&
           ((param_4 <= local_2a && (local_2a <= param_2)))) ||
          ((((param_2 <= local_2b && (local_2b <= param_4)) && (param_2 <= local_2a)) &&
           (local_2a <= param_4)))))) {
        bVar2 = true;
      }
      if ((bVar2) || (local_2a < local_2b)) {
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

