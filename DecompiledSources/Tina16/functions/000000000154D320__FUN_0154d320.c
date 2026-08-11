/* Ghidra address: 0154d320 */
/* Ghidra symbol: FUN_0154d320 */


undefined1 FUN_0154d320(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_51;
  undefined8 local_50;
  char *local_48;
  undefined1 local_40 [12];
  undefined1 local_34 [4];
  undefined8 local_30;
  
  local_50 = 0;
  local_30 = 0;
  if (*(char *)(param_1 + 0x94f) == '\0') {
    if (*(char *)(param_1 + 0x957) == '\0') {
      local_51 = 0;
      cVar2 = FUN_0198a580(param_2);
      if ((cVar2 == '\x04') && (sVar3 = (**(code **)(*param_2 + 0xf8))(param_2), sVar3 == 4)) {
        (**(code **)(*param_2 + 0x288))(param_2,&local_50);
        FUN_0043e130(&local_30,local_50);
        (**(code **)(*param_2 + 0x2d0))(param_2,1,&local_48);
        local_51 = *local_48 == '\0';
      }
    }
    else {
      if (*(char *)(param_1 + 0x958) != '\0') {
        iVar4 = (**(code **)(*param_2 + 0x1c8))();
        bVar1 = false;
        iVar6 = 0;
        if (-1 < iVar4 + -1) {
          do {
            iVar5 = (**(code **)(*param_2 + 0x210))(param_2,iVar6);
            if (((bVar1) ||
                (cVar2 = FUN_00e147f0(*(undefined8 *)(param_1 + 0x9c8),iVar5), cVar2 != '\0')) ||
               ((iVar5 != 0 &&
                (cVar2 = FUN_00e14cc0(*(undefined8 *)(param_1 + 0x9c8),iVar5,1,local_40,local_34,0),
                cVar2 != '\0')))) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            iVar6 = iVar6 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        if (!bVar1) {
          local_51 = 0;
          goto LAB_0154d4ad;
        }
      }
      local_51 = 1;
    }
  }
  else {
    local_51 = FUN_015f2360(param_2);
  }
LAB_0154d4ad:
  FUN_00414480(&local_50);
  FUN_00414480(&local_30);
  return local_51;
}

