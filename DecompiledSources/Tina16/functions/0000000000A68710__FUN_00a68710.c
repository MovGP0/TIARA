/* Ghidra address: 00a68710 */
/* Ghidra symbol: FUN_00a68710 */


void FUN_00a68710(longlong param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_30[0] = 0;
LAB_00a68743:
  FUN_00a63b40(param_1,0);
  FUN_00414480(local_30);
  uVar6 = 0;
  bVar1 = false;
  iVar7 = 0;
  do {
    uVar4 = (ulonglong)*(ushort *)(param_1 + 0x10);
    if (uVar4 < 0x3b) {
      if (uVar4 == 0x3a) {
LAB_00a68836:
        iVar7 = iVar7 + 1;
        if (iVar7 == 2) {
          uVar6 = 1;
        }
      }
      else if (uVar4 < 0x2c) {
        if (uVar4 == 0x2b) {
          bVar1 = true;
        }
        else if (uVar4 == 0x20) {
          iVar7 = 0;
        }
        else {
          if (uVar4 == 0x23) goto LAB_00a68836;
          if (uVar4 != 0x2a) break;
          sVar2 = FUN_00a01990(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28));
          if (sVar2 == 0x2f) {
            FUN_00a62d70(param_1,0);
          }
          *(undefined2 *)(param_1 + 0x10) = 0x20;
        }
      }
      else if (uVar4 != 0x2d) {
        if (uVar4 == 0x2e) goto LAB_00a68836;
        if (9 < uVar4 - 0x30) break;
      }
    }
    else if (uVar4 < 0x5e) {
      if (uVar4 != 0x5d) {
        if ((uVar4 == 0x3e) || (uVar4 - 0x41 < 0x1a)) goto LAB_00a68880;
        if (uVar4 != 0x5b) break;
      }
      bVar1 = true;
    }
    else if ((uVar4 != 0x5f) && (0x19 < uVar4 - 0x61)) break;
LAB_00a68880:
    iVar3 = 0;
    if (local_30[0] != 0) {
      iVar3 = *(int *)(local_30[0] + -4);
    }
    FUN_004169f0(local_30,iVar3 + 1);
    lVar5 = FUN_00414de0(local_30);
    iVar3 = 0;
    if (local_30[0] != 0) {
      iVar3 = *(int *)(local_30[0] + -4);
    }
    *(undefined2 *)(lVar5 + -2 + (longlong)iVar3 * 2) = *(undefined2 *)(param_1 + 0x10);
    FUN_00a62d70(param_1);
  } while( true );
  if (!bVar1) {
    FUN_0043ea00(&local_50,local_30[0]);
    FUN_0043e1a0(&local_48,local_50);
    FUN_00a68370(auStack_78,local_40,local_48,uVar6);
    FUN_00414b50(local_30,local_40[0]);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x78))(*(longlong **)(param_1 + 0x38));
  }
  if (*(short *)(param_1 + 0x10) != 0x2c) {
    while (((sVar2 = *(short *)(param_1 + 0x10), sVar2 != 0x7b && (sVar2 != 0x3c)) && (sVar2 != 0)))
    {
      FUN_00a62d70(param_1,0);
    }
    FUN_00414560(&local_50,3);
    FUN_00414480(local_30);
    return;
  }
  FUN_00a62d70(param_1);
  goto LAB_00a68743;
}

