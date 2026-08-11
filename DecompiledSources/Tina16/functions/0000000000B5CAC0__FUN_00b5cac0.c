/* Ghidra address: 00b5cac0 */
/* Ghidra symbol: FUN_00b5cac0 */


void FUN_00b5cac0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  ushort local_52;
  undefined8 local_50;
  undefined8 local_48;
  byte local_3b;
  ushort local_3a [5];
  
  local_68 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  FUN_004b6dc0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),8);
  do {
    iVar3 = FUN_00b258c0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8));
    if ((iVar3 < 2) && (cVar2 = FUN_00b5ca90(param_1), cVar2 == '\0')) {
code_r0x00b5ce58:
      FUN_00414590(&local_68,2);
      FUN_00414590(&local_50,2);
      return;
    }
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),local_3a);
    iVar3 = FUN_00b258c0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8));
    if ((iVar3 < 1) && (cVar2 = FUN_00b5ca90(param_1), cVar2 == '\0')) goto code_r0x00b5ce58;
    FUN_00b256b0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_3b);
    bVar6 = (local_3b & 1) == 1;
    bVar7 = (local_3b & 8) == 8;
    if (bVar7) {
      FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_52);
    }
    bVar8 = (local_3b & 4) == 4;
    if (bVar8) {
      FUN_00b25740(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_58);
    }
    FUN_004144d0(&local_48);
    bVar1 = false;
    for (iVar3 = 0; iVar3 < (int)(uint)local_3a[0]; iVar3 = iVar3 + iVar4) {
      iVar5 = FUN_00b258c0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8));
      if (iVar5 == 0) {
        cVar2 = FUN_00b5ca90(param_1);
        if ((cVar2 == '\0') ||
           ((iVar5 = FUN_00b258c0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8)), iVar5 < 1 &&
            (cVar2 = FUN_00b5ca90(param_1), cVar2 == '\0')))) break;
        FUN_00b256b0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_3b);
        bVar6 = (local_3b & 1) == 1;
        iVar5 = FUN_00b258c0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8));
      }
      if (bVar6) {
        if (!bVar1) {
          FUN_00b14ea0(&local_60,&local_48);
          FUN_00414c70(&local_48,local_60);
          bVar1 = true;
        }
        iVar4 = iVar5 / 2;
        if ((int)((uint)local_3a[0] - iVar3) <= iVar5 / 2) {
          iVar4 = (uint)local_3a[0] - iVar3;
        }
        FUN_00b257a0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_50,iVar4 * 2);
      }
      else {
        iVar4 = iVar5;
        if ((int)((uint)local_3a[0] - iVar3) <= iVar5) {
          iVar4 = (uint)local_3a[0] - iVar3;
        }
        FUN_00b257a0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_50,iVar4);
        if (bVar1) {
          FUN_00b14ea0(&local_68,&local_50);
          FUN_00414c70(&local_50,local_68);
        }
      }
      FUN_004155b0(&local_48,local_50);
    }
    if (bVar1) {
      FUN_004156b0(&local_48,&DAT_00b5cecc,local_48);
    }
    else {
      FUN_004156b0(&local_48,&LAB_00b5cedc,local_48);
    }
    FUN_00b193b0(*(undefined8 *)(param_1 + 0x80),local_48);
    if (bVar7) {
      iVar3 = (uint)local_52 * 4;
      iVar5 = 0;
      do {
        while( true ) {
          if ((int)((uint)local_52 * 4) <= iVar5) goto LAB_00b5cdf2;
          iVar4 = FUN_00b258c0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8));
          if (iVar4 < 1) break;
          if (iVar4 < iVar3) {
            iVar3 = iVar4;
          }
          FUN_00b257f0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),iVar3);
          iVar5 = iVar5 + iVar3;
          iVar3 = (uint)local_52 * 4 - iVar5;
        }
        cVar2 = FUN_00b5ca90(param_1);
      } while (cVar2 != '\0');
    }
LAB_00b5cdf2:
    if ((bVar8) && (iVar5 = 0, iVar3 = local_58, 0 < local_58)) {
      do {
        iVar4 = FUN_00b258c0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8));
        if (iVar4 < 1) {
          cVar2 = FUN_00b5ca90(param_1);
          if (cVar2 == '\0') break;
        }
        else {
          if (iVar4 < iVar3) {
            iVar3 = iVar4;
          }
          FUN_00b257f0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),iVar3);
          iVar5 = iVar5 + iVar3;
          iVar3 = local_58 - iVar5;
        }
      } while (iVar5 < local_58);
    }
  } while( true );
}

