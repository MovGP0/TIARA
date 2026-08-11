/* Ghidra address: 00cbd4c0 */
/* Ghidra symbol: FUN_00cbd4c0 */


void FUN_00cbd4c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 local_30 [2];
  longlong *local_20;
  
  local_30[0] = 0;
  local_20 = *(longlong **)(param_1 + 0x100);
  if (local_20 != param_2) {
    lVar1 = *(longlong *)(param_1 + 0xf8);
    if ((((param_2 != (longlong *)0x0) && (lVar1 != 0)) && (param_2[0x22] != 0)) &&
       (param_2[0x22] != lVar1)) {
      FUN_0041ddd0(local_30,PTR_PTR_02005ac0);
      uVar4 = FUN_0086dfd0(&PTR_FUN_0086d2e8,1,local_30[0]);
      FUN_004134c0(uVar4);
    }
    plVar2 = local_20;
    if (*(char *)(param_1 + 0x110) != '\0') {
      if (local_20 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x100) = 0;
        local_20 = (longlong *)0x0;
        FUN_00410f20(plVar2);
      }
      *(undefined1 *)(param_1 + 0x110) = 0;
    }
    *(undefined8 *)(param_1 + 0x128) = 0;
    if (local_20 != (longlong *)0x0) {
      FUN_00c8d620(local_20,0);
      FUN_004d2d90(local_20,param_1);
    }
    if (param_2 != (longlong *)0x0) {
      FUN_004d26c0(param_2,param_1);
      FUN_00c8d620(param_2,param_1);
      if (lVar1 != 0) {
        (**(code **)(*param_2 + 0xd0))(param_2,lVar1);
      }
      cVar3 = FUN_004113d0(param_2,&PTR_FUN_00cb8bf8);
      if (cVar3 != '\0') {
        *(longlong **)(param_1 + 0x128) = param_2;
      }
    }
    *(longlong **)(param_1 + 0x100) = param_2;
  }
  FUN_00414480(local_30);
  return;
}

