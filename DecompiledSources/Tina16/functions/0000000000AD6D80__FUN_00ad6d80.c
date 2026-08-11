/* Ghidra address: 00ad6d80 */
/* Ghidra symbol: FUN_00ad6d80 */


void FUN_00ad6d80(longlong param_1,undefined8 *param_2,byte *param_3,undefined8 param_4,int *param_5
                 )

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 *local_48;
  byte *local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar7 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x510) + 0x48) + 0x10
                  );
  iVar6 = 0;
  local_50 = param_1;
  local_48 = param_2;
  local_40 = param_3;
  local_38 = param_4;
  if (-1 < iVar7 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(local_50 + 0x90) + 0x510) + 0x48),iVar6);
      cVar1 = *(char *)(lVar4 + 8);
      if (cVar1 == '\x03') {
        uVar5 = FUN_00ad6c30(auStack_78,*(undefined8 *)(lVar4 + 0x28));
        if ((byte)uVar5 < 8) {
          bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << ((byte)uVar5 & 0x1f) & 0xe4U)
                  != 0;
        }
        else {
          bVar8 = false;
        }
        if (bVar8) {
          FUN_0043e1a0(local_30,*(undefined8 *)(lVar4 + 0x28));
          FUN_00414ad0(local_38,local_30[0]);
        }
      }
      else if (cVar1 == 'L') {
        iVar3 = *(int *)(lVar4 + 0x18);
        if (iVar3 < 1) {
          iVar3 = 1;
        }
        *param_5 = iVar3;
      }
      else if (cVar1 == 'Y') {
        uVar5 = *(undefined8 *)(lVar4 + 0x28);
        bVar2 = FUN_00ad6c30(auStack_78,uVar5);
        if (bVar2 < 8) {
          bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << (bVar2 & 0x1f) & 0x1eU) != 0;
        }
        else {
          bVar8 = false;
        }
        if (bVar8) {
          *local_40 = bVar2;
        }
      }
      else if (cVar1 == '^') {
        iVar3 = FUN_004170c0(&DAT_00ad6f94,*(undefined8 *)(lVar4 + 0x28),1);
        if (iVar3 < 1) {
          iVar3 = FUN_004170c0(&DAT_00ad6fa4,*(undefined8 *)(lVar4 + 0x28),1);
          if (iVar3 < 1) {
            uVar5 = FUN_00a722e0(*(undefined4 *)(lVar4 + 0x18),1);
            *local_48 = uVar5;
          }
          else {
            uVar5 = FUN_00a722e0(*(undefined4 *)(lVar4 + 0x18),3);
            *local_48 = uVar5;
          }
        }
        else {
          iVar3 = *(int *)(lVar4 + 0x18);
          if (100 < iVar3) {
            iVar3 = 100;
          }
          if (iVar3 < 0) {
            iVar3 = 0;
          }
          uVar5 = FUN_00a722e0((ulonglong)(uint)(iVar3 * 2) * 5,2);
          *local_48 = uVar5;
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00414480(local_30);
  return;
}

