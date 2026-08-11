/* Ghidra address: 0138d410 */
/* Ghidra symbol: FUN_0138d410 */


void FUN_0138d410(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 local_41;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  double local_30;
  undefined1 local_28 [15];
  undefined1 local_19;
  
  uVar2 = (ulonglong)(*(byte *)(param_1 + 0xe91) + 1) % 3;
  cVar3 = (char)uVar2;
  *(char *)(param_1 + 0xe91) = cVar3;
  if (cVar3 == '\x02') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0xe18),0);
    FUN_0064de00(*(undefined8 *)(param_1 + 0xe10),PTR_u_Source_01f38da0);
  }
  else {
    FUN_0064de00(*(undefined8 *)(param_1 + 0xe18),(&PTR_DAT_01f38d90)[(int)uVar2]);
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0xe88) + 0xa0))
                      (*(longlong **)(param_1 + 0xe88),param_1 + 0xe91,0);
    FUN_00b90440(*(undefined8 *)(param_1 + 0xe10),uVar4);
  }
  lVar1 = *(longlong *)(param_1 + 0x9b0);
  local_30 = *(double *)(lVar1 + 0x118);
  cVar3 = FUN_010e1a60(param_1);
  if (cVar3 != '\0') {
    uVar4 = FUN_010e1b10(param_1);
    uVar4 = FUN_004113f0(uVar4,&PTR_FUN_01133e90);
    FUN_01138af0(uVar4,&local_19,local_28,&local_30,local_38,local_40);
  }
  cVar3 = *(char *)(*(longlong *)(lVar1 + 0x110) + 0x31);
  if ((cVar3 == '\x04') || (cVar3 == '\x05')) {
    local_41 = 1;
    if (*(char *)(param_1 + 0xe91) == '\x02') {
      *(double *)(lVar1 + 0x118) = (local_30 * local_30) / 100.0;
    }
    else {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0xe88) + 0xa0))
                        (*(longlong **)(param_1 + 0xe88),&local_41,0);
      *(undefined8 *)(lVar1 + 0x118) = uVar4;
    }
    *(undefined1 *)(lVar1 + 0x120) = 1;
  }
  else {
    local_41 = 0;
    if (*(char *)(param_1 + 0xe91) == '\x02') {
      *(double *)(lVar1 + 0x118) = local_30;
    }
    else {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0xe88) + 0xa0))
                        (*(longlong **)(param_1 + 0xe88),&local_41,0);
      *(undefined8 *)(lVar1 + 0x118) = uVar4;
    }
    *(undefined1 *)(lVar1 + 0x120) = 0;
  }
  return;
}

