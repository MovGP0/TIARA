/* Ghidra address: 00aab2c0 */
/* Ghidra symbol: FUN_00aab2c0 */


void FUN_00aab2c0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  FUN_004ae7e0(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00a8c408);
  if (cVar1 != '\0') {
    if ((*(char *)(param_1 + 0x58) == '\0') && (*(char *)(param_2 + 0x4c9) == '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(param_1 + 0x58) = uVar2;
    if ((*(char *)(param_1 + 0x59) == '\0') && (*(char *)(param_2 + 0x4ca) == '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(param_1 + 0x59) = uVar2;
    if ((*(char *)(param_1 + 0x5a) == '\0') && (*(char *)(param_2 + 0x4cb) == '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(param_1 + 0x5a) = uVar2;
    cVar1 = *(char *)(param_1 + 0x28);
    if (cVar1 == '\x01') {
      if (*(char *)(param_2 + 0x24) == '\x01') {
        if (*(int *)(param_2 + 0x20) < *(int *)(param_1 + 0x24)) {
          *(int *)(param_2 + 0x20) = *(int *)(param_1 + 0x24);
        }
      }
      else {
        *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x24);
      }
    }
    else if (cVar1 == '\x02') {
      cVar1 = *(char *)(param_2 + 0x24);
      if (cVar1 != '\0') {
        if (cVar1 == '\x02') {
          if (*(int *)(param_1 + 0x24) <= *(int *)(param_2 + 0x20)) {
            return;
          }
          *(int *)(param_2 + 0x20) = *(int *)(param_1 + 0x24);
          return;
        }
        if (cVar1 != '\x03') {
          return;
        }
      }
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x24);
    }
    else if (cVar1 == '\x03') {
      if (*(char *)(param_2 + 0x24) == '\0') {
        *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x24);
      }
      else if ((*(char *)(param_2 + 0x24) == '\x03') &&
              (*(int *)(param_2 + 0x20) < *(int *)(param_1 + 0x24))) {
        *(int *)(param_2 + 0x20) = *(int *)(param_1 + 0x24);
      }
    }
  }
  return;
}

