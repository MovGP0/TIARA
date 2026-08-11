/* Ghidra address: 017c39e0 */
/* Ghidra symbol: FUN_017c39e0 */


undefined8 FUN_017c39e0(undefined8 param_1,longlong *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  local_50 = param_1;
  if (*param_2 == 0) {
    FUN_017c3750(auStack_78,&local_48);
    FUN_00414b50(&local_20,local_48);
    if (*(short *)((longlong)param_2 + 0x1c) == 0x5b) {
      FUN_00414ad0(param_2,local_20);
      *(undefined1 *)(param_2 + 1) = 0;
      FUN_017c39e0(&local_20,param_2);
    }
    FUN_00414ad0(local_50,local_20);
  }
  else if ((char)param_2[1] == '\0') {
    if (*(short *)((longlong)param_2 + 0x1c) == 0x5d) {
      FUN_00414480(param_2);
      *(undefined1 *)(param_2 + 1) = 0;
      FUN_017c39e0(local_50,param_2);
    }
    else {
      FUN_017c3750(auStack_78,&local_38);
      FUN_00414b50(&local_20,local_38);
      if (local_20 == 0) {
        FUN_017c3910(auStack_78,L"1 Missing group subrange ID");
      }
      if (*(short *)((longlong)param_2 + 0x1c) == 0x2d) {
        FUN_017c3750(auStack_78,&local_40);
        FUN_00414b50(&local_28,local_40);
        if (local_28 == 0) {
          FUN_017c3910(auStack_78,L"2 Missing group subrange ID #2");
        }
        iVar2 = FUN_0043fc50(local_20,0xffffffff);
        iVar3 = FUN_0043fc50(local_28,0xffffffff);
        if ((iVar2 == -1) || (iVar3 == -1)) {
          FUN_017c3910(auStack_78,L"5 Subrange IDs must be numeric values");
        }
        else {
          if (iVar3 < iVar2) {
            FUN_017c3910(auStack_78,L"4 Subrange ID #1 must be less than subrange ID #2");
          }
          *(int *)((longlong)param_2 + 0xc) = iVar2;
          *(int *)(param_2 + 2) = (iVar3 - iVar2) + 1;
          *(undefined4 *)((longlong)param_2 + 0x14) = 0;
          *(undefined1 *)(param_2 + 1) = 1;
          FUN_017c39e0(local_50,param_2);
        }
      }
      else {
        uVar1 = *(short *)((longlong)param_2 + 0x1c) - 0x28;
        if (uVar1 < 0x40) {
          bVar4 = (1L << ((byte)uVar1 & 0x3f) & 0x20000000000010U) != 0;
        }
        else {
          bVar4 = false;
        }
        if (bVar4) {
          FUN_00416ba0(local_50,*param_2,local_20);
        }
        else {
          FUN_017c3910(auStack_78,L"3 Inproper group termination");
        }
      }
    }
  }
  else {
    FUN_0043f750(&local_30,*(int *)((longlong)param_2 + 0xc) + *(int *)((longlong)param_2 + 0x14));
    FUN_00416ba0(local_50,*param_2,local_30);
    *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + 1;
    *(bool *)(param_2 + 1) = *(int *)((longlong)param_2 + 0x14) < (int)param_2[2];
  }
  FUN_00414560(&local_48,6);
  return local_50;
}

