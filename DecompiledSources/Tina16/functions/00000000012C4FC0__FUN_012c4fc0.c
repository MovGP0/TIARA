/* Ghidra address: 012c4fc0 */
/* Ghidra symbol: FUN_012c4fc0 */


void FUN_012c4fc0(longlong param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 uVar5;
  undefined8 local_20;
  
  local_20 = 0;
  if (param_3 != 0) {
    pcVar1 = *(char **)(param_3 + 0x18);
    (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0x268))(*(longlong **)(param_1 + 0x7c8),*pcVar1)
    ;
    (**(code **)(**(longlong **)(param_1 + 0x848) + 0x268))
              (*(longlong **)(param_1 + 0x848),pcVar1[1]);
    (**(code **)(**(longlong **)(param_1 + 0x8b8) + 0x268))
              (*(longlong **)(param_1 + 0x8b8),pcVar1[2]);
    (**(code **)(**(longlong **)(param_1 + 0x7e8) + 0x268))
              (*(longlong **)(param_1 + 0x7e8),pcVar1[3]);
    (**(code **)(**(longlong **)(param_1 + 0x868) + 0x268))
              (*(longlong **)(param_1 + 0x868),pcVar1[4]);
    (**(code **)(**(longlong **)(param_1 + 0x8d8) + 0x268))
              (*(longlong **)(param_1 + 0x8d8),pcVar1[5]);
    (**(code **)(**(longlong **)(param_1 + 0x7f0) + 0x268))
              (*(longlong **)(param_1 + 0x7f0),pcVar1[6]);
    (**(code **)(**(longlong **)(param_1 + 0x870) + 0x268))
              (*(longlong **)(param_1 + 0x870),pcVar1[7]);
    (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0x268))
              (*(longlong **)(param_1 + 0x8e0),pcVar1[8]);
    (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x268))
              (*(longlong **)(param_1 + 0x7d8),pcVar1[9]);
    (**(code **)(**(longlong **)(param_1 + 0x858) + 0x268))
              (*(longlong **)(param_1 + 0x858),pcVar1[10]);
    (**(code **)(**(longlong **)(param_1 + 0x8c8) + 0x268))
              (*(longlong **)(param_1 + 0x8c8),pcVar1[0xb]);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x808),*(undefined8 *)(pcVar1 + 0x610));
    FUN_00b90440(*(undefined8 *)(param_1 + 0x890),*(undefined8 *)(pcVar1 + 0x618));
    FUN_00b90440(*(undefined8 *)(param_1 + 0x900),*(undefined8 *)(pcVar1 + 0x620));
    plVar4 = *(longlong **)(param_1 + 0x828);
    FUN_0043f750(&local_20,*(undefined4 *)(pcVar1 + 0x628));
    (**(code **)(*(longlong *)plVar4[0x9e] + 0xb0))((longlong *)plVar4[0x9e],local_20);
    (**(code **)(*plVar4 + 0x268))(plVar4);
    if ((*(uint *)(pcVar1 + 0x62c) & 0x20) == 0x20) {
      if ((*pcVar1 == '\0') || (pcVar1[6] == '\0')) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      if ((pcVar1[1] == '\0') || (pcVar1[7] == '\0')) {
        uVar3 = 0;
      }
      else {
        uVar3 = (undefined4)CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
      }
      if ((pcVar1[2] == '\0') || (pcVar1[8] == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      FUN_012ca200(param_1,param_3,uVar2,uVar3,uVar5,pcVar1[9],pcVar1[10],pcVar1[0xb],pcVar1 + 0xc,
                   pcVar1 + 0x20c,pcVar1 + 0x40c);
    }
  }
  FUN_00414480(&local_20);
  return;
}

