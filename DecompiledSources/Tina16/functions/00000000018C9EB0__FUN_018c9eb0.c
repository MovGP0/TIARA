/* Ghidra address: 018c9eb0 */
/* Ghidra symbol: FUN_018c9eb0 */


void FUN_018c9eb0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_38 [40];
  
  if (param_2 != 0) {
    cVar2 = FUN_0196bc20(param_2);
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0xd8) = 1;
      FUN_01973030(*(undefined8 *)(param_1 + 0x40),*(longlong *)(param_1 + 0x128),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x128) + 0x1f0),0);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x128) + 0x198);
      if (plVar1 == (longlong *)0x0) {
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x128) + 0x20c);
        if (0 < iVar3) {
          do {
            if (*(char *)(*(longlong *)(param_1 + 0x40) + 0x288) != '\0') break;
            FUN_018c9bc0(auStack_38);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else {
        (**(code **)(*plVar1 + 0x2f8))(plVar1);
        while ((plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x128) + 0x198),
               cVar2 = (**(code **)(*plVar1 + 0x310))(plVar1), cVar2 == '\0' &&
               (*(char *)(*(longlong *)(param_1 + 0x40) + 0x288) == '\0'))) {
          FUN_018c9bc0(auStack_38);
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x128) + 0x198);
          (**(code **)(*plVar1 + 0x300))(plVar1);
        }
      }
      FUN_01973030(*(undefined8 *)(param_1 + 0x40),*(longlong *)(param_1 + 0x128),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x128) + 0x1e8),0);
    }
    else {
      FUN_018c8f10(auStack_38,param_2);
    }
  }
  return;
}

