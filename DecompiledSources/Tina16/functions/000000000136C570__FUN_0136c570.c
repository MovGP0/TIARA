/* Ghidra address: 0136c570 */
/* Ghidra symbol: FUN_0136c570 */


void FUN_0136c570(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint local_40;
  undefined4 local_3c [3];
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x27a8);
  uVar3 = FUN_0198d430(plVar1);
  FUN_01a982d0(uVar3,param_2,param_3,local_3c,&local_40);
  plVar4 = (longlong *)(**(code **)(*plVar1 + 0x58))(plVar1,local_3c[0],local_40);
  if (plVar4 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar4 + 0x118))(plVar4);
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0x18) == '\0') {
        uVar3 = FUN_01c7d9d0(*(undefined8 *)(param_1 + 0x10));
        FUN_012bea40(uVar3,plVar4);
        uVar3 = FUN_0198d430(plVar1);
        (**(code **)(*plVar4 + 0x260))(plVar4,uVar3,0);
        FUN_0199e310(plVar1,0,1,0);
      }
      else {
        uVar3 = FUN_01c7d9d0(*(undefined8 *)(param_1 + 0x10));
        plVar5 = (longlong *)FUN_012be9c0(uVar3,plVar4);
        if (plVar5 == (longlong *)0x0) {
          uVar3 = FUN_01c7d9d0(*(undefined8 *)(param_1 + 0x10));
          plVar5 = (longlong *)FUN_012be900(uVar3,plVar4);
        }
        uVar3 = FUN_0198d430(plVar1);
        cVar2 = (**(code **)(*plVar5 + 0x100))(plVar5,uVar3);
        if (cVar2 != '\0') {
          uVar3 = FUN_0198d430(plVar1);
          (**(code **)(*plVar4 + 0x260))(plVar4,uVar3,1);
          FUN_0199e310(plVar1,0,1,0);
        }
      }
      FUN_01364ff0(param_1,param_2,param_3);
    }
  }
  return;
}

