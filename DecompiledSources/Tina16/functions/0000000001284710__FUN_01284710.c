/* Ghidra address: 01284710 */
/* Ghidra symbol: FUN_01284710 */


undefined1 FUN_01284710(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined8 local_res10 [3];
  undefined1 local_95;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  local_95 = 0;
  cVar2 = FUN_01275c10(local_res10[0],L"parameter[@idx=\"43\"]",5,&local_40);
  iVar6 = 1;
  pbVar7 = PTR_DAT_02004b98 + 1;
  do {
    uVar4 = (uint)*pbVar7;
    FUN_00414b50(&local_30,*(undefined8 *)(pbVar7 + 0x1f));
    bVar1 = pbVar7[2];
    if (cVar2 == '\0') {
      if (uVar4 < 0x22) {
        iVar5 = uVar4 - 1;
      }
      else {
        iVar5 = uVar4 - 2;
      }
    }
    else {
      iVar5 = uVar4 - 1;
    }
    FUN_0043f750(&local_38,iVar5);
    if ((byte)(bVar1 - 1) == 0xff) {
      FUN_00416cd0(&local_50,3,L"parameter[@idx=\"",local_38,&LAB_01284d14);
      cVar3 = FUN_01275c10(local_res10[0],local_50,5,&local_40);
      if (cVar3 != '\0') {
        cVar3 = FUN_01152490(&local_40,iVar6);
        if (cVar3 == '\0') {
          *(undefined8 *)(param_1 + 0x552 + (longlong)iVar6 * 8) = local_40;
          goto LAB_01284c0c;
        }
      }
      FUN_00416cd0(&local_58,3,L"parameter[@idx=\"",local_30,&LAB_01284d14);
      cVar3 = FUN_01275c10(local_res10[0],local_58,5,&local_40);
      if (cVar3 != '\0') {
        cVar3 = FUN_01152490(&local_40,iVar6);
        if (cVar3 == '\0') {
          *(undefined8 *)(param_1 + 0x552 + (longlong)iVar6 * 8) = local_40;
          goto LAB_01284c0c;
        }
      }
      FUN_00416cd0(&local_60,3,L"parameter[@idx=\"",local_30,&LAB_01284d14);
      FUN_01276000(local_res10[0],local_60,5,param_1 + 0x552 + (longlong)iVar6 * 8);
      local_95 = 1;
    }
    else if ((byte)(bVar1 - 1) < 2) {
      FUN_00416cd0(&local_68,3,L"parameter[@idx=\"",local_38,&LAB_01284d14);
      cVar3 = FUN_01275c10(local_res10[0],local_68,2,&local_44);
      if (cVar3 != '\0') {
        cVar3 = FUN_01152490(&local_44,iVar6);
        if (cVar3 == '\0') {
          *(double *)(param_1 + 0x552 + (longlong)iVar6 * 8) = (double)local_44;
          goto LAB_01284c0c;
        }
      }
      FUN_00416cd0(&local_70,3,L"parameter[@idx=\"",local_30,&LAB_01284d14);
      cVar3 = FUN_01275c10(local_res10[0],local_70,2,&local_44);
      if (cVar3 != '\0') {
        cVar3 = FUN_01152490(&local_44,iVar6);
        if (cVar3 == '\0') {
          *(double *)(param_1 + 0x552 + (longlong)iVar6 * 8) = (double)local_44;
          goto LAB_01284c0c;
        }
      }
      local_44 = FUN_0040c770(*(undefined8 *)(param_1 + 0x552 + (longlong)iVar6 * 8));
      FUN_00416cd0(&local_78,3,L"parameter[@idx=\"",local_30,&LAB_01284d14);
      FUN_01276000(local_res10[0],local_78,0,&local_44);
      local_95 = 1;
    }
    else if (bVar1 == 3) {
      FUN_00416cd0(&local_80,3,L"parameter[@idx=\"",local_38,&LAB_01284d14);
      cVar3 = FUN_01275c10(local_res10[0],local_80,7,&local_30);
      if (cVar3 == '\0') {
        FUN_00416cd0(&local_88,3,L"parameter[@idx=\"",local_30,&LAB_01284d14);
        cVar3 = FUN_01275c10(local_res10[0],local_88,7,&local_30);
        if (cVar3 != '\0') {
          iVar5 = FUN_0043fc50(local_30,0);
          *(double *)(param_1 + 0x552 + (longlong)iVar6 * 8) = (double)iVar5;
        }
      }
    }
    else if (bVar1 == 4) {
      FUN_00416cd0(&local_90,3,L"parameter[@idx=\"",local_30,&LAB_01284d14);
      cVar3 = FUN_01275c10(local_res10[0],local_90,7,&local_30);
      if (cVar3 != '\0') {
        iVar5 = FUN_0043fc50(local_30,3);
        *(double *)(param_1 + 0x552 + (longlong)iVar6 * 8) = (double)iVar5;
      }
    }
LAB_01284c0c:
    iVar6 = iVar6 + 1;
    pbVar7 = pbVar7 + 0x28;
    if (iVar6 == 0x2e) {
      FUN_00414560(&local_90,9);
      FUN_00414560(&local_38,2);
      FUN_0041b800(local_res10);
      return local_95;
    }
  } while( true );
}

