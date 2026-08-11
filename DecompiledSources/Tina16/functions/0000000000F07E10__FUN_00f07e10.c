/* Ghidra address: 00f07e10 */
/* Ghidra symbol: FUN_00f07e10 */


void FUN_00f07e10(longlong param_1,double *param_2,double *param_3,undefined2 *param_4,
                 undefined1 *param_5,ushort *param_6)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  double dVar4;
  double *local_10;
  
  local_10 = (double *)0x0;
  dVar4 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x4f0));
  *param_2 = dVar4;
  dVar4 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x4e8));
  *param_3 = dVar4;
  uVar2 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x4f8));
  *param_4 = uVar2;
  *param_5 = *(undefined1 *)(*(longlong *)(param_1 + 0x500) + 0x4a8);
  if (((*param_3 <= *param_2) || (*param_2 <= 0.0)) || (1e+50 < *param_3)) {
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,&local_10,0x134);
    FUN_00f07c40(param_1,local_10);
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x520) + 0x260))(*(longlong **)(param_1 + 0x520));
  if (cVar1 == '\0') {
    *param_6 = *param_6 & 0xfffb;
  }
  else {
    *param_6 = *param_6 | 4;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x260))(*(longlong **)(param_1 + 0x510));
  if (cVar1 == '\0') {
    *param_6 = *param_6 & 0xfffe;
  }
  else {
    *param_6 = *param_6 | 1;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x518) + 0x260))(*(longlong **)(param_1 + 0x518));
  if (cVar1 == '\0') {
    *param_6 = *param_6 & 0xfffd;
  }
  else {
    *param_6 = *param_6 | 2;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x528) + 0x260))(*(longlong **)(param_1 + 0x528));
  if (cVar1 == '\0') {
    *param_6 = *param_6 & 0xfff7;
  }
  else {
    *param_6 = *param_6 | 8;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x530) + 0x260))(*(longlong **)(param_1 + 0x530));
  if (cVar1 == '\0') {
    *param_6 = *param_6 & 0xffef;
  }
  else {
    *param_6 = *param_6 | 0x10;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x260))(*(longlong **)(param_1 + 0x538));
  if (cVar1 == '\0') {
    FUN_00f06730(L"Show Loop Gain Output Only",0);
  }
  else {
    FUN_00f06730(L"Show Loop Gain Output Only",1);
  }
  FUN_00414480(&local_10);
  return;
}

