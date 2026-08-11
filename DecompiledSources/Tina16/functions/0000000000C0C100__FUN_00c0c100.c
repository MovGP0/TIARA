/* Ghidra address: 00c0c100 */
/* Ghidra symbol: FUN_00c0c100 */


void FUN_00c0c100(longlong param_1,undefined1 param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int extraout_var;
  bool bVar5;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  local_20 = 0;
  if ((*(uint *)(param_1 + 0x63a) & 0x40) != 0) {
    iVar3 = FUN_00c11030(param_1,*(undefined4 *)(param_1 + 0x4cc));
    iVar4 = FUN_00bfaa50(param_1);
    if (iVar3 == iVar4) {
      FUN_00bfaa10(param_1);
      (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                (*(longlong **)(param_1 + 0x4e8),&local_20,extraout_var + -1);
      iVar3 = 1;
      cVar2 = FUN_00c10e70(param_1);
      if (cVar2 == '\0') {
        iVar4 = 0;
        if (local_20 != 0) {
          iVar4 = *(int *)(local_20 + -4);
        }
      }
      else {
        iVar4 = FUN_00c0c080();
        iVar4 = iVar4 + -1;
      }
      while( true ) {
        if (iVar4 < iVar3) {
          bVar5 = false;
        }
        else {
          uVar1 = *(ushort *)(local_20 + -2 + (longlong)iVar3 * 2);
          if (uVar1 < 0x100) {
            bVar5 = ((byte)(&DAT_00c0c2f8)[(longlong)(ulonglong)uVar1 >> 3] >>
                     ((ulonglong)uVar1 & 7) & 1) != 0;
          }
          else {
            bVar5 = false;
          }
        }
        if (!bVar5) break;
        iVar3 = iVar3 + 1;
      }
      iVar4 = FUN_00bfaa10(param_1);
      if ((iVar4 + -1 <= iVar3 + -1) && (iVar4 != 1)) {
        iVar3 = 1;
      }
      goto LAB_00c0c218;
    }
  }
  iVar3 = 1;
LAB_00c0c218:
  cVar2 = FUN_00c10e70(param_1);
  if (cVar2 == '\0') {
    local_30 = FUN_00bfaa10(param_1);
    local_38 = FUN_00bb7750(iVar3,*(undefined4 *)(param_1 + 0x4cc));
    FUN_00c0a550(param_1,&local_30,&local_38,param_2);
  }
  else {
    local_24 = FUN_00bfaa50(param_1);
    local_30 = FUN_00bb7750(iVar3,*(undefined4 *)(param_1 + 0x4cc));
    local_28 = FUN_00c0ec90(param_1,&local_30);
    local_30 = FUN_00bfaa10(param_1);
    local_38 = FUN_00c0ee50(param_1,&local_28);
    FUN_00c0a550(param_1,&local_30,&local_38,param_2);
  }
  FUN_00414480(&local_20);
  return;
}

