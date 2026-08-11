/* Ghidra address: 0084ed00 */
/* Ghidra symbol: FUN_0084ed00 */


void FUN_0084ed00(longlong param_1)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  int local_28;
  undefined4 local_24;
  int local_20;
  
  thunk_FUN_0415f13b(&local_28,2,2,*(int *)(param_1 + 0x98) + -2,*(undefined4 *)(param_1 + 0x9c));
  if (*(char *)(param_1 + 0x530) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x508);
    pcVar2 = (code *)FUN_00411550(uVar3,0xffc5);
    cVar1 = (*pcVar2)(uVar3);
    if (cVar1 == '\0') {
      local_20 = (local_20 - *(int *)(param_1 + 0x518)) + -2;
    }
    else {
      local_28 = local_28 + *(int *)(param_1 + 0x518) + -2;
    }
  }
  uVar3 = FUN_0065b870(param_1);
  FUN_004701a0(uVar3,0xb4,0,&local_28);
  uVar3 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar3,0xb7,0,0);
  if (PTR_DAT_02005bd0[0xc] != '\0') {
    FUN_00658a80(param_1,*(undefined8 *)(param_1 + 0xb8),local_28,local_24);
  }
  return;
}

