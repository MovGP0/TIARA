/* Ghidra address: 015353b0 */
/* Ghidra symbol: FUN_015353b0 */


void FUN_015353b0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_950 [2];
  undefined1 local_940 [955];
  undefined2 local_585;
  double local_583;
  double local_57b;
  undefined1 local_573;
  undefined1 local_572;
  ushort local_571;
  ushort local_56f;
  ushort local_56d;
  
  local_950[0] = 0;
  FUN_00417580(local_940,&DAT_01d0d0b8);
  FUN_00417c40(local_940,*(longlong *)(param_1 + 0x7e0) + 0x5d8,&DAT_01d0d0b8);
  local_583 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x700));
  local_57b = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x6f8));
  local_585 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x708));
  local_573 = *(undefined1 *)(*(longlong *)(param_1 + 0x710) + 0x4a8);
  local_572 = *(undefined1 *)(*(longlong *)(param_1 + 0x718) + 0x4a8);
  if (((local_57b <= local_583) || (local_583 <= 0.0)) || (1e+50 < local_57b)) {
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,local_950,0x134);
    FUN_01535350(param_1,local_950[0]);
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x720) + 0x530) == *(longlong *)(param_1 + 0x728)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))(*(longlong **)(param_1 + 0x758))
    ;
    if (cVar1 == '\0') {
      local_571 = local_571 & 0xfffb;
    }
    else {
      local_571 = local_571 | 4;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))(*(longlong **)(param_1 + 0x748))
    ;
    if (cVar1 == '\0') {
      local_571 = local_571 & 0xfffe;
    }
    else {
      local_571 = local_571 | 1;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))(*(longlong **)(param_1 + 0x750))
    ;
    if (cVar1 == '\0') {
      local_571 = local_571 & 0xfffd;
    }
    else {
      local_571 = local_571 | 2;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x768) + 0x260))(*(longlong **)(param_1 + 0x768))
    ;
    if (cVar1 == '\0') {
      local_571 = local_571 & 0xffdf;
    }
    else {
      local_571 = local_571 | 0x20;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x260))(*(longlong **)(param_1 + 0x760))
    ;
    if (cVar1 == '\0') {
      local_571 = local_571 & 0xffbf;
    }
    else {
      local_571 = local_571 | 0x40;
    }
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x720) + 0x530) == *(longlong *)(param_1 + 0x730)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x780) + 0x260))(*(longlong **)(param_1 + 0x780))
    ;
    if (cVar1 == '\0') {
      local_56f = local_56f & 0xff7f;
    }
    else {
      local_56f = local_56f | 0x80;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x260))(*(longlong **)(param_1 + 0x778))
    ;
    if (cVar1 == '\0') {
      local_56f = local_56f & 0xfeff;
    }
    else {
      local_56f = local_56f | 0x100;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x788) + 0x260))(*(longlong **)(param_1 + 0x788))
    ;
    if (cVar1 == '\0') {
      local_56f = local_56f & 0xfffd;
    }
    else {
      local_56f = local_56f | 2;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0x260))(*(longlong **)(param_1 + 0x798))
    ;
    if (cVar1 == '\0') {
      local_56f = local_56f & 0xffdf;
    }
    else {
      local_56f = local_56f | 0x20;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x790) + 0x260))(*(longlong **)(param_1 + 0x790))
    ;
    if (cVar1 == '\0') {
      local_56f = local_56f & 0xffbf;
    }
    else {
      local_56f = local_56f | 0x40;
    }
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x720) + 0x530) == *(longlong *)(param_1 + 0x738)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 2000) + 0x260))(*(longlong **)(param_1 + 2000));
    if (cVar1 == '\0') {
      local_56d = local_56d & 0xff7f;
    }
    else {
      local_56d = local_56d | 0x80;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0x260))(*(longlong **)(param_1 + 0x7c8))
    ;
    if (cVar1 == '\0') {
      local_56d = local_56d & 0xffef;
    }
    else {
      local_56d = local_56d | 0x10;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x260))(*(longlong **)(param_1 + 0x7a8))
    ;
    if (cVar1 == '\0') {
      local_56d = local_56d & 0xfffe;
    }
    else {
      local_56d = local_56d | 1;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x260))(*(longlong **)(param_1 + 0x7b0))
    ;
    if (cVar1 == '\0') {
      local_56d = local_56d & 0xfffd;
    }
    else {
      local_56d = local_56d | 2;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))(*(longlong **)(param_1 + 0x7c0))
    ;
    if (cVar1 == '\0') {
      local_56d = local_56d & 0xffdf;
    }
    else {
      local_56d = local_56d | 0x20;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x260))(*(longlong **)(param_1 + 0x7b8))
    ;
    if (cVar1 == '\0') {
      local_56d = local_56d & 0xffbf;
    }
    else {
      local_56d = local_56d | 0x40;
    }
  }
  if (*(char *)(param_1 + 0x7d8) == '\0') {
    FUN_00417c40(*(longlong *)(param_1 + 0x7e0) + 0x5d8,local_940,&DAT_01d0d0b8);
  }
  FUN_00414480(local_950);
  FUN_00417740(local_940,&DAT_01d0d0b8);
  return;
}

