/* Ghidra address: 00e10880 */
/* Ghidra symbol: FUN_00e10880 */


undefined1 FUN_00e10880(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_41 = 0;
  *param_4 = 1;
  FUN_00414ad0(param_2,L"std_logic");
  lVar3 = FUN_00e0ffc0(param_1);
  iVar2 = *(int *)(lVar3 + 0x10);
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar4 = FUN_004aeac0(lVar3,iVar5);
      iVar1 = FUN_00e0f7b0(lVar4);
      if (iVar1 == param_3) {
        FUN_00416ba0(param_2,*(undefined8 *)(lVar4 + 0x20),*(undefined8 *)(lVar4 + 0x28));
        FUN_0043e130(&local_30,*(undefined8 *)(lVar4 + 0x18));
        iVar2 = FUN_00416db0(local_30,&DAT_00e10a38);
        if (iVar2 == 0) {
          *param_4 = 1;
        }
        else {
          FUN_0043e130(&local_38,*(undefined8 *)(lVar4 + 0x18));
          iVar2 = FUN_00416db0(local_38,&DAT_00e10a4c);
          if (iVar2 == 0) {
            *param_4 = 2;
          }
          else {
            FUN_0043e130(&local_40,*(undefined8 *)(lVar4 + 0x18));
            iVar2 = FUN_00416db0(local_40,L"INOUT");
            if (iVar2 == 0) {
              *param_4 = 3;
            }
          }
        }
        local_41 = 1;
        break;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_40,3);
  return local_41;
}

