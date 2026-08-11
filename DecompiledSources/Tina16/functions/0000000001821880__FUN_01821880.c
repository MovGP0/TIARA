/* Ghidra address: 01821880 */
/* Ghidra symbol: FUN_01821880 */


char FUN_01821880(longlong param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  char local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  short *local_20;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20 = (short *)0x0;
  local_28 = 0;
  local_59 = '\0';
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x84);
  if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xa8) + -2 + (longlong)iVar3 * 2) ==
      **(short **)(*(longlong *)(param_1 + 0x70) + 0xa0)) {
    do {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0x84);
      *piVar1 = *piVar1 + 1;
      if ((*(char *)(param_1 + 0x4f) == '\0') ||
         (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xa8) + -2 +
                    (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0x84) * 2) != 0x5c)) {
        sVar2 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xa8) + -2 +
                          (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0x84) * 2);
        if (sVar2 == **(short **)(*(longlong *)(param_1 + 0x70) + 0xa0)) {
          if ((*(char *)(param_1 + 0x4f) != '\0') ||
             (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xa8) + -2 +
                        (longlong)(*(int *)(*(longlong *)(param_1 + 0x70) + 0x84) + 1) * 2) !=
              **(short **)(*(longlong *)(param_1 + 0x70) + 0xa0))) break;
          FUN_00416780(&local_50,**(undefined2 **)(*(longlong *)(param_1 + 0x70) + 0xa0));
          FUN_00416ad0(param_1 + 0x40,local_50);
          piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0x84);
          *piVar1 = *piVar1 + 1;
        }
        else {
          FUN_00416780(&local_58,sVar2);
          FUN_00416ad0(param_1 + 0x40,local_58);
        }
      }
      else {
        FUN_00416780(&local_28,
                     *(undefined2 *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xa8) + -2 +
                      (longlong)(*(int *)(*(longlong *)(param_1 + 0x70) + 0x84) + 1) * 2));
        FUN_0043e1a0(&local_20,local_28);
        sVar2 = *local_20;
        if (sVar2 == 0x6e) {
          FUN_00416ad0(param_1 + 0x40,&DAT_01821d08);
          piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0x84);
          *piVar1 = *piVar1 + 1;
        }
        else if (sVar2 == 0x72) {
          FUN_00416ad0(param_1 + 0x40,&DAT_01821d18);
          piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0x84);
          *piVar1 = *piVar1 + 1;
        }
        else if (sVar2 == 0x78) {
          piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0x84);
          *piVar1 = *piVar1 + 2;
          iVar4 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x84);
          local_59 = FUN_01821fe0(*(undefined8 *)(param_1 + 0x70));
          if (local_59 == '\0') {
            *(int *)(*(longlong *)(param_1 + 0x70) + 0x84) = iVar4;
          }
          else {
            FUN_00416dc0(&local_38,*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xa8),iVar4,
                         *(int *)(*(longlong *)(param_1 + 0x70) + 0x84) - iVar4);
            FUN_00416ba0(&local_30,&DAT_01821d28,local_38);
            uVar6 = FUN_0043fc00(local_30);
            FUN_00416780(&local_40,uVar6);
            FUN_00416ad0(param_1 + 0x40,local_40);
          }
          piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0x84);
          *piVar1 = *piVar1 + -1;
        }
        else {
          FUN_00416780(&local_48,
                       *(undefined2 *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xa8) + -2 +
                        (longlong)(*(int *)(*(longlong *)(param_1 + 0x70) + 0x84) + 1) * 2));
          FUN_00416ad0(param_1 + 0x40,local_48);
          piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0x84);
          *piVar1 = *piVar1 + 1;
        }
      }
      cVar5 = FUN_0043e100(*(undefined2 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xa8) + -2 +
                            (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0x84) * 2),
                           &DAT_01821d2c);
    } while (cVar5 == '\0');
    if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xa8) + -2 +
                  (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0x84) * 2) ==
        **(short **)(*(longlong *)(param_1 + 0x70) + 0xa0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0x84);
      *piVar1 = *piVar1 + 1;
      local_59 = '\x01';
    }
    else {
      *(int *)(*(longlong *)(param_1 + 0x70) + 0x84) = iVar3;
    }
  }
  FUN_00414560(&local_58,8);
  return local_59;
}

