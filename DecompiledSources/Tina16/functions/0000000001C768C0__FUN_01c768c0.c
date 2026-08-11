/* Ghidra address: 01c768c0 */
/* Ghidra symbol: FUN_01c768c0 */


void FUN_01c768c0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  undefined8 local_148;
  undefined1 *local_140;
  undefined8 local_130;
  undefined1 local_124 [4];
  undefined1 local_120 [5];
  char local_11b;
  char local_11a;
  char local_119;
  undefined1 local_118 [264];
  
  local_140 = auStack_178;
  local_148 = 0;
  local_150 = 0;
  local_130 = 0;
  FUN_015fca00(&local_130,0,*(undefined8 *)(param_1 + 0x27a8));
  FUN_019af590(*(undefined8 *)(param_1 + 0x27a8),local_130);
  FUN_01610c90(local_118);
  FUN_019a10d0(*(undefined8 *)(param_1 + 0x27a8),local_118,local_120,local_124);
  if (PTR_DAT_020030c0[0x5d] == '\0') {
    uVar2 = FUN_019a4600();
    FUN_01603f40(uVar2,0,0);
  }
  else {
    local_119 = FUN_019a1cf0(*(undefined8 *)(param_1 + 0x27a8));
    local_11a = FUN_015f23e0(*(undefined8 *)(param_1 + 0x27a8));
    if ((local_119 == '\0') && (local_11a == '\0')) {
      local_11b = '\x01';
    }
    else {
      local_11b = '\0';
    }
    if (local_11b == '\0') {
      uVar2 = FUN_00b89270();
      FUN_0041ddd0(&local_150,&LAB_01c648f8);
      FUN_00b8e650(uVar2,&local_148,L"Sched_c.sAnaNotAllowedTxt",local_150);
      FUN_016fd940(local_148);
      FUN_01c76a70(0,local_140);
      goto LAB_01c76a43;
    }
    cVar1 = FUN_015267a0(0);
    if (cVar1 == '\0') {
      FUN_013d39a0(*(undefined8 *)PTR_DAT_020027c0);
    }
    FUN_00414ad0(param_1 + 0x27e8,L"DigitalTransientClick");
  }
  FUN_01610cc0(local_118);
LAB_01c76a43:
  FUN_00414560(&local_150,2);
  FUN_00414480(&local_130);
  return;
}

