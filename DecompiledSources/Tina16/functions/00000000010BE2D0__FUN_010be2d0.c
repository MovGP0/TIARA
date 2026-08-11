/* Ghidra address: 010be2d0 */
/* Ghidra symbol: FUN_010be2d0 */


void FUN_010be2d0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_978;
  undefined8 local_970 [2];
  undefined1 local_960 [608];
  undefined2 local_700;
  undefined8 local_6fe;
  undefined8 local_6f6;
  undefined2 local_6ee;
  undefined8 local_6ec;
  undefined8 local_6e4;
  undefined1 local_6ca;
  undefined1 local_6c9;
  longlong local_192;
  longlong local_18a;
  undefined1 local_182;
  undefined1 local_181;
  
  local_978 = 0;
  local_970[0] = 0;
  FUN_00417580(local_960,&DAT_01d0d0b8);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x4b8),0);
  *(longlong *)(param_1 + 0x5b8) = param_2;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x5b0) = param_3;
  }
  else {
    *(longlong *)(param_1 + 0x5b8) = param_2;
    *(undefined8 *)(param_1 + 0x5b0) = *(undefined8 *)(param_2 + 0xa0);
  }
  if (*(longlong *)(param_1 + 0x5b8) == 0) {
    FUN_00417c40(local_960,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  else {
    FUN_00417c40(local_960,*(longlong *)(param_1 + 0x5b8) + 0x5d8,&DAT_01d0d0b8);
  }
  FUN_00b90440(*(undefined8 *)(param_1 + 0x528),local_6fe);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x520),local_6f6);
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x518),local_700);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x570),local_6ec);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x578),local_6e4);
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x580),local_6ee);
  FUN_0074b490(*(undefined8 *)(param_1 + 0x598),local_6ca);
  FUN_0074b490(*(undefined8 *)(param_1 + 0x5a0),local_6c9);
  (**(code **)(**(longlong **)(param_1 + 0x508) + 0x268))(*(longlong **)(param_1 + 0x508),local_182)
  ;
  (**(code **)(**(longlong **)(param_1 + 0x590) + 0x268))(*(longlong **)(param_1 + 0x590),local_181)
  ;
  plVar1 = *(longlong **)(param_1 + 0x510);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0xf0))(*(longlong **)(param_1 + 0x510));
  if (cVar2 != '\0') {
    FUN_010bd500(*(undefined8 *)(param_1 + 0x5b0),plVar1[0x9e],1,0,0);
    FUN_00685670(plVar1,1);
    iVar6 = 0;
    while( true ) {
      iVar3 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x28))((longlong *)plVar1[0x9e]);
      if (iVar3 <= iVar6) break;
      (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],local_970,iVar6);
      iVar3 = FUN_0043e650(local_970[0],local_192);
      if (iVar3 == 0) break;
      iVar6 = iVar6 + 1;
    }
    if (local_192 == 0) {
LAB_010be570:
      lVar5 = *(longlong *)(param_1 + 0x5b8);
      if (((lVar5 != 0) && (*(char *)(lVar5 + 0x4c8) != '\0')) &&
         (*(longlong *)(lVar5 + 0x4d0) != 0)) {
        lVar5 = FUN_017ff620(*(undefined8 *)(*(longlong *)(lVar5 + 0x4d0) + 0x128));
        if (lVar5 == 0) {
          uVar4 = (**(code **)(*(longlong *)plVar1[0x9e] + 0xc0))
                            ((longlong *)plVar1[0x9e],
                             *(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x5b8) + 0x4d0) + 0x128));
          (**(code **)(*plVar1 + 0x268))(plVar1,uVar4);
          goto LAB_010be5f5;
        }
      }
      (**(code **)(*plVar1 + 0x268))(plVar1,0);
    }
    else {
      iVar3 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x28))((longlong *)plVar1[0x9e]);
      if (iVar3 <= iVar6) goto LAB_010be570;
      (**(code **)(*plVar1 + 0x268))(plVar1,iVar6);
    }
LAB_010be5f5:
    FUN_010bec10(param_1,0);
  }
  plVar1 = *(longlong **)(param_1 + 0x588);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x10))
            ((longlong *)plVar1[0x9e],*(undefined8 *)(*(longlong *)(param_1 + 0x510) + 0x4f0));
  FUN_010bdc50(plVar1[0x9e]);
  FUN_00685670(plVar1,1);
  iVar6 = 0;
  while( true ) {
    iVar3 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x28))((longlong *)plVar1[0x9e]);
    if (iVar3 <= iVar6) break;
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_978,iVar6);
    iVar3 = FUN_0043e650(local_978,local_18a);
    if (iVar3 == 0) break;
    iVar6 = iVar6 + 1;
  }
  if (local_18a != 0) {
    iVar3 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x28))((longlong *)plVar1[0x9e]);
    if (iVar6 < iVar3) {
      (**(code **)(*plVar1 + 0x268))(plVar1,iVar6);
      goto LAB_010be6c5;
    }
  }
  (**(code **)(*plVar1 + 0x268))(plVar1,0);
LAB_010be6c5:
  FUN_010becb0(param_1,0);
  FUN_00414560(&local_978,2);
  FUN_00417740(local_960,&DAT_01d0d0b8);
  return;
}

