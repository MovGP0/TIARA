/* Ghidra address: 01499d20 */
/* Ghidra symbol: FUN_01499d20 */


bool FUN_01499d20(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool local_a9;
  undefined8 local_a8;
  undefined8 local_a0 [7];
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_a8 = 0;
  local_a0[0] = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_a9 = false;
  lVar1 = *(longlong *)(param_1 + 0x700);
  iVar3 = 0;
  if (-1 < *(int *)(lVar1 + 0x4e0) + -2) {
    iVar5 = *(int *)(lVar1 + 0x4e0) + -1;
    local_a9 = false;
    do {
      iVar4 = iVar3 + 1;
      FUN_0084e320(lVar1,local_a0,0,iVar4);
      FUN_0043ea00(local_40,local_a0[0]);
      cVar2 = FUN_014937c0(param_1,iVar4);
      if (cVar2 == '\0') {
        FUN_0084e320(lVar1,&local_50,2,iVar4);
        FUN_0084e320(lVar1,&local_58,3,iVar4);
        FUN_01499870(param_1,&local_60,local_40[0]);
        FUN_01499ae0(param_1,&local_68);
        if (local_60 != 0) {
          iVar4 = FUN_00416db0(local_60,local_50);
          if (iVar4 != 0) {
            FUN_0084e3e0(lVar1,2,iVar3 + 1,local_60);
            local_a9 = true;
          }
        }
        if (local_68 != 0) {
          iVar4 = FUN_00416db0(local_68,local_58);
          if (iVar4 != 0) {
            FUN_0084e3e0(lVar1,3,iVar3 + 1,local_68);
            local_a9 = true;
          }
        }
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (local_a9) {
    FUN_0041ddd0(&local_a8,PTR_PTR_02003770);
    FUN_01493aa0(param_1,local_a8);
    *(undefined1 *)(param_1 + 0xba1) = 0;
  }
  local_a9 = !local_a9;
  FUN_00414560(&local_a8,2);
  FUN_00414560(&local_68,6);
  return local_a9;
}

