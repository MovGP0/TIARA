/* Ghidra address: 00a5b2b0 */
/* Ghidra symbol: FUN_00a5b2b0 */


undefined8 FUN_00a5b2b0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ushort local_32;
  undefined8 local_30;
  
  local_30 = 0;
  local_48 = param_1;
  local_40 = param_2;
  iVar1 = FUN_004170c0(&DAT_00a5b454,param_2,1);
  if (((iVar1 == 0) && (iVar1 = FUN_004170c0(&DAT_00a5b464,local_40,1), iVar1 == 0)) &&
     (iVar1 = FUN_004170c0(&LAB_00a5b474,local_40,1), iVar1 == 0)) {
    FUN_0043e1a0(local_48,local_40);
  }
  else {
    iVar1 = 0;
    if (local_40 != 0) {
      iVar1 = *(int *)(local_40 + -4);
    }
    FUN_004169f0(local_48,iVar1);
    iVar5 = 1;
    if (0 < iVar1) {
      do {
        uVar3 = *(ushort *)(local_40 + -2 + (longlong)iVar5 * 2);
        uVar4 = (ulonglong)uVar3;
        if (uVar4 < 0x29) {
          if (uVar4 == 0x28) {
            if (uVar3 == local_32) {
              FUN_00a5b260(auStack_68);
            }
            else {
              FUN_00a5b200(auStack_68,0x28);
            }
          }
          else if ((uVar4 == 0x22) || (uVar4 == 0x27)) {
            FUN_00a5b200(auStack_68,uVar4);
          }
        }
        else if (uVar4 == 0x29) {
          if (uVar3 == local_32) {
            FUN_00a5b260(auStack_68);
          }
        }
        else if ((uVar4 - 0x41 < 0x1a) && (local_32 == 0)) {
          uVar3 = uVar3 | 0x20;
        }
        lVar2 = FUN_00414de0(local_48);
        *(ushort *)(lVar2 + -2 + (longlong)iVar5 * 2) = uVar3;
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00414480(&local_30);
  return local_48;
}

