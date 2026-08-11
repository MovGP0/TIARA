/* Ghidra address: 00d76ce0 */
/* Ghidra symbol: FUN_00d76ce0 */


void FUN_00d76ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  
  iVar3 = FUN_00d77c90(param_1);
  if (0 < iVar3) {
    iVar3 = FUN_00d77c90();
    iVar4 = 0;
    if (-1 < iVar3 + -1) {
      do {
        plVar1 = (longlong *)FUN_00d77ca0(param_1,iVar4);
        if (((*(char *)((longlong)plVar1 + 0x8c) != '\0') && (0 < *(int *)((longlong)plVar1 + 0x84))
            ) && (0 < (int)plVar1[0x11])) {
          cVar2 = FUN_00423b30(param_3);
          if (cVar2 == '\0') {
            FUN_00d77cb0(plVar1,local_58);
            cVar2 = FUN_004239d0(local_48,local_58,param_3);
            if (cVar2 != '\0') {
              (**(code **)(*plVar1 + 0xa8))(plVar1,param_2,param_3);
            }
          }
          else {
            (**(code **)(*plVar1 + 0xa8))(plVar1,param_2,param_3);
          }
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

