/* Ghidra address: 01d811d0 */
/* Ghidra symbol: FUN_01d811d0 */


void FUN_01d811d0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 local_29 [9];
  
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x260))(*(longlong **)(param_1 + 0x918));
  if (iVar5 != -1) {
    plVar2 = *(longlong **)(param_1 + 0x918);
    uVar6 = (**(code **)(*plVar2 + 0x260))(plVar2);
    uVar7 = (**(code **)(*(longlong *)plVar2[0x9e] + 0x30))((longlong *)plVar2[0x9e],uVar6);
    uVar7 = FUN_004113f0(uVar7,&PTR_FUN_01105a20);
    *(undefined8 *)(param_1 + 0xae0) = uVar7;
    uVar7 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x260))(*(longlong **)(param_1 + 0x918))
    ;
    (**(code **)(**(longlong **)(param_1 + 0xa88) + 0x58))
              (*(longlong **)(param_1 + 0xa88),
               CONCAT71((int7)((ulonglong)uVar7 >> 8),(char)uVar7 - *(char *)(param_1 + 0xa5c)) &
               0xffffffff);
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0xa88) + 0x138))(*(longlong **)(param_1 + 0xa88))
    ;
    lVar3 = *(longlong *)(param_1 + 0xae0);
    *(undefined1 *)(lVar3 + 0x38) = uVar4;
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0x980),*(char *)(lVar3 + 0x38) == '\x01');
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0x988),*(char *)(lVar3 + 0x38) == '\x02');
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0x978),*(char *)(lVar3 + 0x38) == '\x04');
    cVar1 = *(char *)(lVar3 + 0x38);
    if (cVar1 == '\x01') {
      FUN_01d81390(param_1,param_1);
    }
    else if (cVar1 == '\x02') {
      FUN_01d813b0(param_1,param_1);
    }
    else if (cVar1 == '\x04') {
      FUN_01d81370(param_1,param_1);
    }
    (**(code **)(**(longlong **)(param_1 + 0xa88) + 0x80))
              (*(longlong **)(param_1 + 0xa88),*(undefined1 *)(lVar3 + 0x2a));
    FUN_00b90440(*(undefined8 *)(param_1 + 0xa20),*(undefined8 *)(lVar3 + 0x118));
    FUN_00b90440(*(undefined8 *)(param_1 + 0xa28),*(undefined8 *)(lVar3 + 0x110));
    local_29[0] = 1;
    FUN_01d813d0(param_1,local_29);
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0x990),local_29[0]);
    *(undefined1 *)(param_1 + 0xa6e) = 0;
  }
  return;
}

