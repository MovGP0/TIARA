/* Ghidra address: 016f5200 */
/* Ghidra symbol: FUN_016f5200 */


void FUN_016f5200(longlong param_1,char param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  
  uVar2 = FUN_00b92140(0);
  *(undefined8 *)(param_1 + 0x2f8) = 1;
  local_29 = 1;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *PTR_DAT_02004578 = 1;
  if ((*(char *)(param_1 + 0x326) == '\0') && (param_2 != '\x06')) {
    FUN_01b08890(param_1,0x20);
    FUN_016f6430(param_1,param_2,0);
    FUN_01b07850(param_1,*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x128));
    FUN_017c51f0(*(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(param_1 + 400),
                 *(undefined4 *)(param_1 + 0x31c));
    FUN_01b08890(param_1,0);
  }
  if (param_2 == '\x06') {
    if (*(char *)(param_1 + 0x326) == '\0') {
      FUN_01b08890(param_1,0x40);
      FUN_016f6430(param_1,6,0);
      FUN_016f3620(param_1,0,6);
      FUN_01b07850(param_1,*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x128));
      FUN_017c51f0(*(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(param_1 + 400),
                   *(undefined4 *)(param_1 + 0x31c));
      FUN_01b08890(param_1,8);
    }
    else {
      FUN_01b08890(param_1,0x80);
      FUN_016f4f50(auStack_58);
      FUN_01b08890(param_1,8);
    }
  }
  uVar1 = FUN_016f4f50(auStack_58);
  *(undefined1 *)(param_1 + 0x324) = uVar1;
  dVar3 = (double)FUN_00b92140(uVar2);
  *(double *)PTR_DAT_02004668 = dVar3 + *(double *)PTR_DAT_02004668;
  return;
}

