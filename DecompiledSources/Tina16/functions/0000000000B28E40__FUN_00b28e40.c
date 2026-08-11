/* Ghidra address: 00b28e40 */
/* Ghidra symbol: FUN_00b28e40 */


void FUN_00b28e40(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined8 unaff_RBX;
  bool bVar9;
  undefined8 local_60 [2];
  ushort local_4c;
  undefined1 local_4a [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_60[0] = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  uVar4 = FUN_00415ab0(param_2);
  FUN_00409a70(uVar4,local_4a,2);
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  FUN_00415ad0(local_30,param_2,3,iVar2 + -2);
  iVar2 = FUN_00415a60(local_30[0],&DAT_00b291d4);
  if (iVar2 == 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
    iVar8 = 0;
    if (-1 < iVar2 + -2) {
      iVar2 = iVar2 + -1;
      do {
        uVar4 = *(undefined8 *)(param_1 + 8);
        uVar5 = FUN_004aeac0(uVar4,iVar8 + 1);
        FUN_004aedb0(uVar4,iVar8,uVar5);
        iVar8 = iVar8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_004aedb0(*(longlong *)(param_1 + 8),*(int *)(*(longlong *)(param_1 + 8) + 0x10) + -1,
                 *(undefined8 *)(param_1 + 0x18));
  }
  else {
    lVar6 = FUN_00b282a0(&DAT_00b260d0,1);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 8),lVar6);
    FUN_00414bf0(lVar6 + 0x28,param_2);
    iVar2 = FUN_00415a60(local_30[0],&LAB_00b291e4);
    if (iVar2 == 0) {
      FUN_00414520(lVar6 + 8);
      *(undefined1 *)(lVar6 + 0x21) = 1;
    }
    else {
      uVar4 = FUN_00414df0(local_30);
      FUN_00409a70(uVar4,&local_4c,2);
      bVar9 = *(char *)(local_30[0] + 2) == '\x01';
      if (bVar9) {
        FUN_00415ad0(&local_38,local_30[0],4,(uint)local_4c * 2);
        uVar3 = 0;
        if (local_30[0] != 0) {
          uVar3 = *(undefined4 *)(local_30[0] + -4);
        }
        FUN_00415ad0(local_30,local_30[0],(uint)local_4c * 2 + 4,uVar3);
      }
      else {
        FUN_00415ad0(&local_38,local_30[0],4,local_4c);
        uVar3 = 0;
        if (local_30[0] != 0) {
          uVar3 = *(undefined4 *)(local_30[0] + -4);
        }
        FUN_00415ad0(local_30,local_30[0],local_4c + 4,uVar3);
      }
      FUN_00b27160(&local_40,local_38,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar9) & 0xffffffff
                  );
      FUN_00414b90(lVar6 + 8,local_40);
      while (local_30[0] != 0) {
        uVar4 = FUN_00414df0(local_30);
        FUN_00409a70(uVar4,&local_4c,2);
        cVar1 = *(char *)(local_30[0] + 2);
        FUN_00416660(&local_48,local_4c);
        if (cVar1 == '\x01') {
          lVar7 = FUN_00414df0(local_30);
          uVar4 = FUN_00415f70(local_48);
          FUN_00409a70(lVar7 + 3,uVar4,(uint)local_4c * 2);
          uVar3 = 0;
          if (local_30[0] != 0) {
            uVar3 = *(undefined4 *)(local_30[0] + -4);
          }
          FUN_00415ad0(local_30,local_30[0],(uint)local_4c * 2 + 4,uVar3);
        }
        else {
          FUN_00415ad0(local_60,local_30[0],4,local_4c);
          FUN_00b15390(&local_48,local_60[0]);
          uVar3 = 0;
          if (local_30[0] != 0) {
            uVar3 = *(undefined4 *)(local_30[0] + -4);
          }
          FUN_00415ad0(local_30,local_30[0],local_4c + 4,uVar3);
        }
        FUN_00b28800(lVar6,local_48);
      }
    }
  }
  FUN_004144d0(local_60);
  FUN_004145c0(&local_48,2);
  FUN_00414590(&local_38,2);
  return;
}

