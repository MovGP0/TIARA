/* Ghidra address: 014822e0 */
/* Ghidra symbol: FUN_014822e0 */


undefined1 FUN_014822e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 local_29;
  undefined4 *local_28;
  int local_20;
  int local_1c;
  longlong local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_28 = (undefined4 *)0x0;
  local_29 = 0;
  FUN_00419430(&local_28,&DAT_004066f0);
  FUN_00419260(&local_28,&DAT_004066f0,1,2);
  *local_28 = 5;
  local_28[1] = 4;
  FUN_004194b0(&local_18,local_28,&DAT_004066f0);
  cVar1 = FUN_01488350(param_2,param_3,&local_10);
  if (cVar1 != '\0') {
    cVar1 = FUN_014883d0(local_10,L"pin_count",&local_20);
    if (cVar1 == '\0') {
      local_29 = 0;
    }
    else if (local_20 < 2) {
      local_29 = 0;
    }
    else {
      cVar1 = FUN_014883d0(local_10,L"classID",&local_1c);
      if (cVar1 != '\0') {
        iVar3 = 0;
        if (local_18 != 0) {
          iVar3 = (int)*(undefined8 *)(local_18 + -8);
        }
        iVar2 = 0;
        if (iVar3 - 1U < 0x80000000) {
          do {
            if (local_1c == *(int *)(local_18 + (longlong)iVar2 * 4)) {
              local_29 = 0;
              goto LAB_014823ff;
            }
            iVar2 = iVar2 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      local_29 = 1;
    }
  }
LAB_014823ff:
  FUN_00419430(&local_28,&DAT_004066f0);
  FUN_00419430(&local_18,&DAT_004066f0);
  return local_29;
}

