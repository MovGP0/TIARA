/* Ghidra address: 01ae8160 */
/* Ghidra symbol: FUN_01ae8160 */


void FUN_01ae8160(longlong param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_2 < 5) {
    if (param_2 == 4) {
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),param_3);
      plVar2 = (longlong *)
               (**(code **)(**(longlong **)(lVar1 + 0x78) + 0x30))
                         (*(longlong **)(lVar1 + 0x78),param_4);
      (**(code **)(*plVar2 + 0x98))(plVar2,*(undefined8 *)(param_1 + 0x80));
    }
    else if (param_2 == 0) {
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),param_3);
      plVar2 = (longlong *)
               (**(code **)(**(longlong **)(lVar1 + 0x80) + 0x30))
                         (*(longlong **)(lVar1 + 0x80),param_4);
      (**(code **)(*plVar2 + 0x98))(plVar2,*(undefined8 *)(param_1 + 0x80));
    }
    else if (param_2 == 1) {
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),param_3);
      plVar2 = (longlong *)
               (**(code **)(**(longlong **)(lVar1 + 0x80) + 0x30))
                         (*(longlong **)(lVar1 + 0x80),param_4);
      (**(code **)(*plVar2 + 0x98))(plVar2,*(undefined8 *)(param_1 + 0x80));
    }
    else if (param_2 == 2) {
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),param_3);
      plVar2 = (longlong *)
               (**(code **)(**(longlong **)(lVar1 + 0x70) + 0x30))
                         (*(longlong **)(lVar1 + 0x70),param_4);
      (**(code **)(*plVar2 + 0x98))(plVar2,*(undefined8 *)(param_1 + 0x80));
    }
    else if (param_2 == 3) {
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),param_3);
      plVar2 = (longlong *)
               (**(code **)(**(longlong **)(lVar1 + 0x78) + 0x30))
                         (*(longlong **)(lVar1 + 0x78),param_4);
      (**(code **)(*plVar2 + 0x98))(plVar2,*(undefined8 *)(param_1 + 0x80));
    }
  }
  else if (param_2 == 5) {
    plVar2 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                       (*(longlong **)(param_1 + 0xe0),param_4);
    (**(code **)(*plVar2 + 0x98))(plVar2,*(undefined8 *)(param_1 + 0x80));
  }
  else if (param_2 == 6) {
    plVar2 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                       (*(longlong **)(param_1 + 0xe0),param_4);
    (**(code **)(*plVar2 + 0x98))(plVar2,*(undefined8 *)(param_1 + 0x80));
  }
  else if (param_2 == 7) {
    plVar2 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                       (*(longlong **)(param_1 + 0xe0),param_4);
    (**(code **)(*plVar2 + 0x98))(plVar2,*(undefined8 *)(param_1 + 0x80));
  }
  return;
}

