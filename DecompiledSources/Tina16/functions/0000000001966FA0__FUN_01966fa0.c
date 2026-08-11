/* Ghidra address: 01966fa0 */
/* Ghidra symbol: FUN_01966fa0 */


void FUN_01966fa0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5,undefined8 param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_68 [26];
  undefined1 local_4e [46];
  
  local_88 = param_5;
  local_80 = param_6;
  (**(code **)(*param_1 + 0x2b0))(param_1,param_2,param_3,param_4);
  if (*(char *)((longlong)param_1 + 0x219) == '\0') {
    (**(code **)(*param_1 + 0x2b8))(param_1);
  }
  if (param_1[0x5b] == 0) {
    plVar2 = *(longlong **)(param_1[0x59] + 0x18);
  }
  else {
    plVar2 = (longlong *)
             (**(code **)(*(longlong *)param_1[0x5b] + 0x20))((longlong *)param_1[0x5b],2);
  }
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
    if (cVar1 == '\0') {
      FUN_01966f30(auStack_a8);
      FUN_01966c80(param_1);
      lVar4 = param_1[0x5c];
      local_78 = param_4;
      if (lVar4 == 0) {
        uVar3 = FUN_018669c0();
        lVar4 = FUN_01867390(uVar3);
        local_88 = (undefined1 *)CONCAT44(local_88._4_4_,*(undefined4 *)((longlong)param_1 + 0x254))
        ;
        FUN_00498350(local_68,(int)param_1[0x49],*(undefined4 *)((longlong)param_1 + 0x24c),
                     (int)param_1[0x4a]);
        local_88 = local_68;
        local_80 = param_3;
        (**(code **)(lVar4 + 0x60))(lVar4,local_4e,param_2,plVar2);
      }
      else {
        local_88 = (undefined1 *)CONCAT44(local_88._4_4_,*(undefined4 *)((longlong)param_1 + 0x254))
        ;
        FUN_00498350(local_68,(int)param_1[0x49],*(undefined4 *)((longlong)param_1 + 0x24c),
                     (int)param_1[0x4a]);
        local_88 = local_68;
        local_80 = param_3;
        (**(code **)(lVar4 + 0x60))(lVar4,local_4e,param_2,plVar2);
      }
      goto LAB_019671ed;
    }
  }
  cVar1 = FUN_01953ba0(param_1);
  if (cVar1 != '\0') {
    uVar3 = FUN_0180bfb0();
    uVar3 = FUN_0180a250(uVar3);
    local_88 = (undefined1 *)CONCAT44(local_88._4_4_,3);
    local_80 = CONCAT71(local_80._1_7_,1);
    FUN_007d6c70(uVar3,param_2,(int)param_1[0x49] + 1,*(int *)((longlong)param_1 + 0x24c) + 2);
  }
LAB_019671ed:
  (**(code **)(*param_1 + 0x2c0))(param_1);
  FUN_0195ace0(param_1);
  return;
}

