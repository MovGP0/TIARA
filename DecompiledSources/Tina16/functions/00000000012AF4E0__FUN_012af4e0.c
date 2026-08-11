/* Ghidra address: 012af4e0 */
/* Ghidra symbol: FUN_012af4e0 */


void FUN_012af4e0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 local_29 [9];
  
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))(*(longlong **)(param_1 + 0x7d8));
  if (iVar4 != -1) {
    plVar2 = *(longlong **)(param_1 + 0x7d8);
    uVar5 = (**(code **)(*plVar2 + 0x260))(plVar2);
    uVar6 = (**(code **)(*(longlong *)plVar2[0x9e] + 0x30))((longlong *)plVar2[0x9e],uVar5);
    lVar7 = FUN_004113f0(uVar6,&PTR_FUN_01105a20);
    *(longlong *)(param_1 + 0x870) = lVar7;
    *(undefined1 *)(lVar7 + 0x30) = *(undefined1 *)(param_1 + 0xd89);
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))(*(longlong **)(param_1 + 0x7d8))
    ;
    (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0x58))
              (*(longlong **)(param_1 + 0xdb8),
               CONCAT71((int7)((ulonglong)uVar6 >> 8),(char)uVar6 - *(char *)(param_1 + 0xd8c)) &
               0xffffffff);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0x138))(*(longlong **)(param_1 + 0xdb8))
    ;
    lVar7 = *(longlong *)(param_1 + 0x870);
    *(undefined1 *)(lVar7 + 0x38) = uVar3;
    lVar7 = FUN_004113f0(lVar7,&PTR_FUN_01105a20);
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0xbf8),*(char *)(lVar7 + 0x38) == '\x01');
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0xc00),*(char *)(lVar7 + 0x38) == '\x02');
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0xbf0),*(char *)(lVar7 + 0x38) == '\x04');
    cVar1 = *(char *)(lVar7 + 0x38);
    if (cVar1 == '\x01') {
      FUN_012af6c0(param_1,param_1);
    }
    else if (cVar1 == '\x02') {
      FUN_012af6e0(param_1,param_1);
    }
    else if (cVar1 == '\x04') {
      FUN_012af6a0(param_1,param_1);
    }
    (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0x80))
              (*(longlong **)(param_1 + 0xdb8),*(undefined1 *)(lVar7 + 0x2a));
    FUN_00b90440(*(undefined8 *)(param_1 + 0xd30),*(undefined8 *)(lVar7 + 0x118));
    FUN_00b90440(*(undefined8 *)(param_1 + 0xd38),*(undefined8 *)(lVar7 + 0x110));
    local_29[0] = 1;
    FUN_012af700(param_1,local_29);
    FUN_0082a6c0(*(undefined8 *)(param_1 + 2000),local_29[0]);
    *(undefined1 *)(param_1 + 0xd9e) = 0;
  }
  return;
}

