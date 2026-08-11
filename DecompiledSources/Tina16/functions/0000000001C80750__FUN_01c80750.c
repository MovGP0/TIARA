/* Ghidra address: 01c80750 */
/* Ghidra symbol: FUN_01c80750 */


void FUN_01c80750(longlong param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 local_158;
  undefined8 local_150 [2];
  undefined8 local_140;
  undefined1 local_138 [80];
  int local_e8;
  undefined1 local_34 [4];
  undefined1 local_30 [5];
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29 [9];
  
  local_150[0] = 0;
  local_158 = 0;
  local_140 = 0;
  cVar2 = FUN_019a1cf0(*(undefined8 *)(param_1 + 0x27a8));
  cVar3 = FUN_015f23e0(*(undefined8 *)(param_1 + 0x27a8));
  cVar4 = FUN_019a1aa0(*(undefined8 *)(param_1 + 0x27a8),local_29,&local_2b,&local_2a);
  FUN_015fca00(&local_140,0,*(undefined8 *)(param_1 + 0x27a8));
  FUN_019af590(*(undefined8 *)(param_1 + 0x27a8),local_140);
  FUN_01610c90(local_138);
  FUN_019a10d0(*(undefined8 *)(param_1 + 0x27a8),local_138,local_30,local_34);
  if (PTR_DAT_020030c0[0x5d] == '\0') {
    if ((cVar4 == '\0') || (local_e8 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  else if (((cVar2 == '\0') && (cVar3 == '\0')) && (local_e8 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    cVar2 = FUN_019a02e0(*(undefined8 *)(param_1 + 0x27a8));
    if (cVar2 == '\0') {
      cVar2 = FUN_015fc1d0(PTR_DAT_02004010 + 0x8a9);
      if (cVar2 == '\0') {
        FUN_01542950(L"Enable VHDL mixed mode to run digital step-by-step in mixed mode!");
      }
      else {
        FUN_01c80a70(param_1);
      }
    }
    else {
      FUN_01500620(0);
    }
    FUN_00414ad0(param_1 + 0x27e8,L"mnDigitalStepbyStepClick");
    FUN_01610cc0(local_138);
  }
  else {
    uVar5 = FUN_00b89270();
    FUN_0041ddd0(&local_158,&LAB_01c648f8);
    FUN_00b8e650(uVar5,local_150,L"Sched_c.sAnaNotAllowedTxt",local_158);
    FUN_016fd940(local_150[0]);
  }
  FUN_00414560(&local_158,2);
  FUN_00414480(&local_140);
  return;
}

