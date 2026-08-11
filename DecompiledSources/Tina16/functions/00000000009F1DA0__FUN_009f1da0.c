/* Ghidra address: 009f1da0 */
/* Ghidra symbol: FUN_009f1da0 */


undefined8 FUN_009f1da0(longlong param_1)

{
  longlong lVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
LAB_009f1daa:
  while( true ) {
    while( true ) {
      uVar3 = FUN_00a01900(param_1);
      sVar2 = (short)uVar3;
      if (sVar2 != 0xe) break;
      if (*(char *)(param_1 + 0x21) != '\x01') goto code_r0x009f1e44;
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    if (sVar2 != 0xf) break;
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  if (sVar2 != 0x1b) goto code_r0x009f1e44;
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x10) - lVar1 < 2) goto code_r0x009f1e44;
  sVar2 = FUN_00a01900(param_1);
  if (sVar2 == 0x24) {
    sVar2 = FUN_00a01900(param_1);
    if (sVar2 == 0x29) {
      sVar2 = FUN_00a01900(param_1);
      if (sVar2 == 0x43) {
        *(undefined1 *)(param_1 + 0x21) = 1;
        goto LAB_009f1daa;
      }
    }
  }
  *(longlong *)(param_1 + 8) = lVar1;
code_r0x009f1e44:
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar5 = FUN_009ef730(param_1,uVar3);
    if (((short)uVar5 == 10) || ((short)uVar5 == 0xd)) {
      *(undefined1 *)(param_1 + 0x21) = 0;
    }
  }
  else if (*(char *)(param_1 + 0x20) == '\x01') {
    if (*(char *)(param_1 + 0x21) == '\x01') {
      uVar4 = FUN_00a01900(param_1);
      uVar5 = FUN_009efc70(param_1,uVar3,uVar4);
    }
    else {
      uVar5 = 0xfffd;
    }
  }
  else {
    uVar5 = 0xfffd;
  }
  return uVar5;
}

