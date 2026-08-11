/* Ghidra address: 00ddd3d0 */
/* Ghidra symbol: FUN_00ddd3d0 */


void FUN_00ddd3d0(longlong *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  undefined8 local_28;
  int local_1c;
  
  local_40 = auStack_68;
  local_28 = 0;
  local_30 = 0;
  puVar1 = auStack_68;
  if (param_1[0x98] == 0) {
    uVar3 = FUN_0041b800(&local_30);
    local_1c = (**(code **)(*(longlong *)param_1[0x96] + 0x20))((longlong *)param_1[0x96],uVar3);
    if ((local_1c != 0) || (local_30 == 0)) {
      if (param_1 == (longlong *)0x0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = param_1 + 0xae;
      }
      uVar2 = (**(code **)(*(longlong *)param_1[0x96] + 0x18))((longlong *)param_1[0x96],plVar4);
      FUN_006245b0(uVar2);
    }
    lVar5 = param_1[0x95];
    if ((lVar5 == 0) && (param_1[0x97] != 0)) {
      uVar2 = (**(code **)(*(longlong *)param_1[0x97] + 0x40))((longlong *)param_1[0x97]);
      FUN_006245b0(uVar2);
    }
    else {
      uVar3 = FUN_0041b800(&local_28);
      uVar2 = thunk_FUN_039b661f(lVar5,0,uVar3);
      FUN_006245b0(uVar2);
      uVar2 = (**(code **)(*(longlong *)param_1[0x97] + 0x28))((longlong *)param_1[0x97],local_28);
      FUN_006245b0(uVar2);
      FUN_00dde660(param_1);
    }
    uVar3 = FUN_0041b800(param_1 + 0x98);
    uVar2 = (*(code *)**(undefined8 **)param_1[0x96])
                      ((undefined8 *)param_1[0x96],&DAT_00ddd798,uVar3);
    FUN_006245b0(uVar2);
    *(undefined4 *)(param_1 + 0xa4) = 0x18;
    (**(code **)(*(longlong *)param_1[0x98] + 0x18))((longlong *)param_1[0x98],param_1 + 0xa4);
    uVar3 = FUN_0041b800(param_1 + 0x99);
    uVar2 = (*(code *)**(undefined8 **)param_1[0x96])
                      ((undefined8 *)param_1[0x96],&DAT_00ddd7a8,uVar3);
    FUN_006245b0(uVar2);
    uVar3 = FUN_0041b800(param_1 + 0x9a);
    (*(code *)**(undefined8 **)param_1[0x96])((undefined8 *)param_1[0x96],&DAT_00ddd7b8,uVar3);
    if (param_1 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = param_1 + 0xa7;
    }
    FUN_00624ce0(param_1[0x96],&LAB_00ddd7c8,plVar4,param_1 + 0x9d);
    if (param_1[0x94] == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = param_1[0x94] + 0x10;
    }
    FUN_00624ce0(param_1[0x96],param_1[0x92] + 0x10,lVar5,(longlong)param_1 + 0x4ec);
    if ((*(uint *)(param_1[0x92] + 0x38) & 1) != 0) {
      (**(code **)(*param_1 + 0x288))(param_1,0xfffffe0b);
    }
    if ((*(uint *)(param_1[0x92] + 0x38) & 8) != 0) {
      (**(code **)(*param_1 + 0x288))(param_1,0xfffffdfe);
    }
    if ((*(uint *)(param_1[0x92] + 0x38) & 4) != 0) {
      (**(code **)(*param_1 + 0x288))(param_1,0xfffffe00);
    }
    if ((*(uint *)(param_1[0x92] + 0x38) & 2) != 0) {
      (**(code **)(*param_1 + 0x288))(param_1,0xfffffdff);
    }
    (**(code **)(*(longlong *)param_1[0x98] + 0x28))((longlong *)param_1[0x98],0xffffffff);
    FUN_00de1370(param_1);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_0041b800(&local_30);
  FUN_0041b800(&local_28);
  return;
}

