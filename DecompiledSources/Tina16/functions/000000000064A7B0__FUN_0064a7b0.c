/* Ghidra address: 0064a7b0 */
/* Ghidra symbol: FUN_0064a7b0 */


void FUN_0064a7b0(char param_1)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 *local_50;
  longlong local_48;
  undefined1 local_39;
  longlong *local_38;
  char local_29;
  undefined8 local_28;
  undefined8 *local_20;
  
  local_50 = auStack_88;
  local_38 = (longlong *)0x0;
  local_29 = 0;
  if (DAT_02012300 == (undefined8 *)0x0) {
    return;
  }
  if (*(char *)((longlong)DAT_02012300 + 9) != '\0') {
    return;
  }
  DAT_02012348 = DAT_02012300;
  *(undefined1 *)((longlong)DAT_02012300 + 9) = 1;
  *(char *)(DAT_02012300 + 6) = param_1;
  FUN_00648f10(DAT_02012300,DAT_02012310);
  if (DAT_0201232c == '\x02') {
    local_38 = (longlong *)FUN_004113f0(DAT_02012300,&PTR_FUN_00637e70);
    (**(code **)(*local_38 + 0x68))(local_38);
    *(bool *)(local_38 + 0x12) = local_38[4] == 0;
  }
  if (DAT_02012300[4] != 0) {
    cVar1 = FUN_004113d0(DAT_02012300[4],&PTR_FUN_0063d930);
    if (cVar1 != '\0') {
      local_28 = DAT_02012300[5];
      goto LAB_0064a8bb;
    }
  }
  local_28 = DAT_02012300[3];
LAB_0064a8bb:
  cVar1 = FUN_0064a710(auStack_88);
  if ((cVar1 == '\0') ||
     ((((DAT_0201232c != '\x02' || ((char)local_38[0x12] == '\0')) &&
       ((DAT_0201232c == '\0' || (cVar1 = FUN_00649e70(1), cVar1 == '\0')))) || (param_1 == '\0'))))
  {
    local_29 = '\0';
  }
  else {
    local_29 = '\x01';
  }
  if (DAT_0201232c == '\x02') {
    if ((local_29 != '\0') && ((char)local_38[0x12] != '\0')) {
      local_48 = FUN_007f9b70(local_38[10],1);
      if ((local_48 != 0) && (*(longlong *)(local_48 + 0x4c0) == local_38[10])) {
        FUN_00801e40(local_48,0);
      }
      FUN_0064fca0(DAT_020122f8,0xb03a,0,DAT_02012300);
    }
  }
  else if (DAT_02012330 == 0) {
    thunk_FUN_04176eb1(DAT_02012320);
  }
  else {
    FUN_00660220(DAT_02012330);
  }
  DAT_020122f8 = 0;
  DAT_02012300 = (undefined8 *)0x0;
  if ((DAT_02012348 != (undefined8 *)0x0) && (DAT_02012348[4] != 0)) {
    local_39 = 3;
    if (local_29 == '\0') {
      local_39 = 4;
      *(undefined4 *)(DAT_02012348 + 3) = 0;
      *(undefined4 *)((longlong)DAT_02012348 + 0x1c) = 0;
      local_28 = 0;
    }
    local_20 = DAT_02012348;
    local_68 = DAT_02012348 + 3;
    FUN_00649ce0(DAT_02012348[2],local_39,DAT_02012348,DAT_02012348[4]);
    if (DAT_02012348 == (undefined8 *)0x0) {
      DAT_02012348 = local_20;
    }
  }
  FUN_00410f20(DAT_02012340);
  DAT_02012340 = 0;
  if (DAT_02012348 != (undefined8 *)0x0) {
    *(undefined1 *)((longlong)DAT_02012348 + 9) = 0;
    local_68 = (undefined8 *)CONCAT71(local_68._1_7_,local_29);
    (**(code **)*DAT_02012348)(DAT_02012348,DAT_02012348[4],local_28 & 0xffffffff,local_28._4_4_);
  }
  DAT_02012300 = (undefined8 *)0x0;
  DAT_020122f8 = 0;
  if ((DAT_02012348 != (undefined8 *)0x0) &&
     (((cVar1 = FUN_004113d0(DAT_02012348,&PTR_FUN_00637ca0), cVar1 != '\0' ||
       (cVar1 = FUN_004113d0(DAT_02012348,&PTR_FUN_00637650), cVar1 != '\0')) ||
      (cVar1 = FUN_004113d0(DAT_02012348,&PTR_FUN_006383a8), cVar1 != '\0')))) {
    FUN_00410f20(DAT_02012348);
  }
  DAT_0201232c = 0;
  return;
}

