/* Ghidra address: 01389cf0 */
/* Ghidra symbol: FUN_01389cf0 */


void FUN_01389cf0(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_21;
  undefined8 local_20;
  
  if (*(char *)(param_1 + 0xe91) != '\x02') {
    local_20 = FUN_00b90090(*(undefined8 *)(param_1 + 0xe10));
    if (param_2 == '\0') {
      local_20 = FUN_010bfbe0(&local_20,0x3eb0c6f7a0b5ed8d,0);
    }
    else if (param_2 == '\x01') {
      local_20 = FUN_010bfa60(&local_20,0x3eb0c6f7a0b5ed8d,0);
    }
    (**(code **)(**(longlong **)(param_1 + 0xe88) + 0x98))
              (*(longlong **)(param_1 + 0xe88),local_20,*(undefined1 *)(param_1 + 0xe91));
    local_20 = (**(code **)(**(longlong **)(param_1 + 0xe88) + 0xa0))
                         (*(longlong **)(param_1 + 0xe88),param_1 + 0xe91,1);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xe10),local_20);
    lVar2 = *(longlong *)(param_1 + 0x9b0);
    cVar1 = *(char *)(*(longlong *)(lVar2 + 0x110) + 0x31);
    if ((cVar1 == '\x04') || (cVar1 == '\x05')) {
      local_21 = 1;
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0xe88) + 0xa0))
                        (*(longlong **)(param_1 + 0xe88),&local_21,0);
      *(undefined8 *)(lVar2 + 0x118) = uVar3;
      *(undefined1 *)(lVar2 + 0x120) = 1;
    }
    else {
      local_21 = 0;
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0xe88) + 0xa0))
                        (*(longlong **)(param_1 + 0xe88),&local_21,0);
      *(undefined8 *)(lVar2 + 0x118) = uVar3;
      *(undefined1 *)(lVar2 + 0x120) = 0;
    }
  }
  return;
}

