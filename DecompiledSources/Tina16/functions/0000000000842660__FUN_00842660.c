/* Ghidra address: 00842660 */
/* Ghidra symbol: FUN_00842660 */


void FUN_00842660(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  code *pcVar4;
  undefined1 local_a0 [56];
  undefined1 local_68 [56];
  undefined8 local_30;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x528) != 0) {
    FUN_0083da60(*(longlong *)(param_1 + 0xc0) + 0x528,
                 *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x4a4),
                 *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x4b0));
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x538) != 0) {
    FUN_0083da60(*(longlong *)(param_1 + 0xc0) + 0x538,
                 *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x4a4),1);
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x530) != 0) {
    FUN_0083da60(*(longlong *)(param_1 + 0xc0) + 0x530,
                 *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x4e0),
                 *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x4b4));
  }
  local_30 = *(ulonglong *)(*(longlong *)(param_1 + 0xc0) + 0x4a8);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0xc0) + 0x4e0);
  if (iVar1 <= *(int *)(*(longlong *)(param_1 + 0xc0) + 0x4ac)) {
    local_30 = CONCAT44(iVar1 + -1,(int)local_30);
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0xc0) + 0x4a4);
  if (iVar1 <= *(int *)(*(longlong *)(param_1 + 0xc0) + 0x4a8)) {
    local_30 = CONCAT44(local_30._4_4_,iVar1 + -1);
  }
  if ((*(int *)(*(longlong *)(param_1 + 0xc0) + 0x4a8) != (int)local_30) ||
     (*(int *)(*(longlong *)(param_1 + 0xc0) + 0x4ac) != local_30._4_4_)) {
    FUN_00844b60(*(undefined8 *)(param_1 + 0xc0),local_30 & 0xffffffff,local_30._4_4_,1,1);
  }
  if ((*(int *)(*(longlong *)(param_1 + 0xc0) + 0x498) != (int)local_30) ||
     (*(int *)(*(longlong *)(param_1 + 0xc0) + 0x49c) != local_30._4_4_)) {
    FUN_00844ac0(*(undefined8 *)(param_1 + 0xc0),&local_30);
  }
  if (((*(char *)(*(longlong *)(param_1 + 0xc0) + 0x556) == '\0') &&
      (*(int *)(*(longlong *)(param_1 + 0xc0) + 0x4e8) == *(int *)(param_1 + 0x5c))) &&
     (*(int *)(*(longlong *)(param_1 + 0xc0) + 0x4ec) == *(int *)(param_1 + 0x94))) {
    cVar3 = FUN_0065be20(*(undefined8 *)(param_1 + 0xc0));
    if (cVar3 != '\0') {
      FUN_00841d10(*(undefined8 *)(param_1 + 0xc0),local_a0);
      FUN_008425e0(param_1,param_1 + 0x40,local_a0,0);
      FUN_008425e0(param_1,param_1 + 0x78,local_68,0xffffffff);
    }
  }
  else {
    FUN_00844220(*(undefined8 *)(param_1 + 0xc0));
  }
  FUN_008458c0(*(undefined8 *)(param_1 + 0xc0));
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  pcVar4 = (code *)FUN_00411550(uVar2,0xffa0);
  (*pcVar4)(uVar2,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x38));
  return;
}

