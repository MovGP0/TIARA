/* Ghidra address: 0153ba10 */
/* Ghidra symbol: FUN_0153ba10 */


bool FUN_0153ba10(undefined1 param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  longlong local_58;
  bool local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_49 = false;
  local_58 = param_2;
  if (param_2 == 0) {
    local_58 = FUN_019a4600();
  }
  if (local_58 != 0) {
    cVar2 = FUN_019a1cf0(local_58);
    cVar3 = FUN_015f23e0(local_58);
    cVar4 = FUN_019a1aa0(local_58,&local_19,&local_1b,&local_1a);
    if (PTR_DAT_020030c0[0x5d] != '\0') {
      if ((cVar2 == '\0') && (cVar3 == '\0')) {
        cVar4 = '\x01';
      }
      else {
        cVar4 = '\0';
      }
    }
    if (cVar4 == '\0') {
      uVar5 = FUN_00b89270();
      FUN_0041ddd0(&local_38,PTR_LAB_020025c0);
      FUN_00b8e650(uVar5,local_30,L"Sched_c.sAnaNotAllowedTxt",local_38);
      FUN_016fd940(local_30[0]);
    }
    else {
      if (PTR_DAT_020030c0[0x5d] == '\0') {
        FUN_01603f40(local_58,1,0);
      }
      else {
        cVar2 = FUN_019a1cf0(local_58);
        cVar3 = FUN_015f23e0(local_58);
        if ((cVar2 == '\0') && (cVar3 == '\0')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) {
          uVar5 = FUN_00b89270();
          FUN_0041ddd0(&local_48,PTR_LAB_020025c0);
          FUN_00b8e650(uVar5,&local_40,L"Sched_c.sAnaNotAllowedTxt",local_48);
          FUN_016fd940(local_40);
          goto LAB_0153bb8c;
        }
        cVar2 = FUN_015267a0(1);
        local_49 = cVar2 == '\0';
      }
      FUN_0153af00(param_1,0);
    }
  }
LAB_0153bb8c:
  FUN_00414560(&local_48,4);
  return local_49;
}

