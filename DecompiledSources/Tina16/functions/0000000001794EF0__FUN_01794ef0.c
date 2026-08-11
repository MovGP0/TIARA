/* Ghidra address: 01794ef0 */
/* Ghidra symbol: FUN_01794ef0 */


void FUN_01794ef0(longlong param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
                 undefined4 param_5,uint param_6)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  uint in_stack_ffffffffffffffd0;
  uint local_20;
  undefined4 local_1c;
  
  if (*(char *)(param_1 + 0xc91) == '\0') {
    plVar3 = *(longlong **)(param_1 + 0xd20);
    if ((plVar3 != (longlong *)0x0) &&
       (in_stack_ffffffffffffffd0 = param_6,
       cVar1 = (**(code **)(*plVar3 + 0x48))(plVar3,param_2,param_3,param_4,param_5,param_6),
       cVar1 == '\0')) {
      return;
    }
    FUN_017954b0(param_1,param_5,param_6,&local_1c,&local_20);
    plVar3 = (longlong *)FUN_01795510(param_1,local_1c,local_20);
    if ((plVar3 != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*plVar3 + 0x10))(plVar3), cVar1 == '\0')) {
      FUN_017956f0(param_1);
      return;
    }
    if ((plVar3 == (longlong *)0x0) || ((param_4 & 4) != 0)) {
      if ((param_4 & 1) == 0) {
        FUN_017956f0(param_1);
      }
      FUN_017957d0(param_1,local_1c,local_20);
    }
    else if ((param_4 & 1) == 0) {
      if (*(char *)((longlong)plVar3 + 0x21) == '\0') {
        FUN_01795750(param_1,plVar3);
        FUN_01795680(param_1,plVar3,1);
        *(undefined4 *)(param_1 + 0xd30) = 0xffffffff;
      }
      else {
        uVar2 = (**(code **)(*plVar3 + 0x80))(plVar3,local_1c,local_20);
        *(undefined4 *)(param_1 + 0xd30) = uVar2;
      }
      FUN_01795810(param_1);
      FUN_01795890(param_1,local_1c,local_20,1,1,in_stack_ffffffffffffffd0 & 0xffffff00);
    }
    else if (*(char *)((longlong)plVar3 + 0x21) == '\0') {
      FUN_01795680(param_1,plVar3,1);
      FUN_01795810(param_1);
      *(undefined4 *)(param_1 + 0xd30) = 0xffffffff;
      FUN_01795890(param_1,local_1c,local_20,1,1,in_stack_ffffffffffffffd0 & 0xffffff00);
    }
    else {
      FUN_01795680(param_1,plVar3,0);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xc91) = 0;
  }
  return;
}

