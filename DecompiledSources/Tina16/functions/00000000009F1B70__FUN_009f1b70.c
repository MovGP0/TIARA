/* Ghidra address: 009f1b70 */
/* Ghidra symbol: FUN_009f1b70 */


undefined8 FUN_009f1b70(longlong param_1)

{
  longlong lVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  while( true ) {
    while( true ) {
      while( true ) {
        uVar3 = FUN_00a01900(param_1);
        sVar2 = (short)uVar3;
        if (sVar2 != 0xe) break;
        if ((*(char *)(param_1 + 0x21) != '\x01') && (*(char *)(param_1 + 0x21) != '\x02'))
        goto code_r0x009f1cad;
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
      if (sVar2 != 0xf) break;
      *(undefined1 *)(param_1 + 0x20) = 0;
    }
    if ((sVar2 != 0x1b) ||
       (lVar1 = *(longlong *)(param_1 + 8), *(longlong *)(param_1 + 0x10) - lVar1 < 2))
    goto code_r0x009f1cad;
    sVar2 = FUN_00a01900(param_1);
    if (sVar2 != 0x24) break;
    sVar2 = FUN_00a01900(param_1);
    if (sVar2 == 0x29) {
      sVar2 = FUN_00a01900(param_1);
      if (sVar2 == 0x41) {
        *(undefined1 *)(param_1 + 0x21) = 1;
      }
      else {
        if (sVar2 != 0x47) goto LAB_009f1c85;
        *(undefined1 *)(param_1 + 0x21) = 2;
      }
    }
    else {
      if ((sVar2 != 0x2a) || (sVar2 = FUN_00a01900(param_1), sVar2 != 0x48)) goto LAB_009f1c85;
      *(undefined1 *)(param_1 + 0x22) = 1;
    }
  }
  if (sVar2 == 0x4e) {
    if (*(char *)(param_1 + 0x22) == '\0') goto code_r0x009f1cad;
    if (*(char *)(param_1 + 0x22) == '\x01') {
      uVar3 = FUN_00a01900(param_1);
      uVar4 = FUN_00a01900(param_1);
      uVar5 = FUN_009f1b10(param_1,uVar3,uVar4);
      return uVar5;
    }
  }
LAB_009f1c85:
  *(longlong *)(param_1 + 8) = lVar1;
code_r0x009f1cad:
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar5 = FUN_009ef730(param_1,uVar3);
    if (((short)uVar5 == 10) || ((short)uVar5 == 0xd)) {
      *(undefined1 *)(param_1 + 0x21) = 0;
      *(undefined1 *)(param_1 + 0x22) = 0;
    }
  }
  else if (*(char *)(param_1 + 0x20) == '\x01') {
    uVar4 = FUN_00a01900(param_1);
    if (*(char *)(param_1 + 0x21) == '\x01') {
      uVar5 = FUN_009ef750(param_1,uVar3,uVar4);
    }
    else if (*(char *)(param_1 + 0x21) == '\x02') {
      uVar5 = FUN_009f1a10(param_1,uVar3,uVar4);
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

